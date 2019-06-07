djinni_bin = attr.label(
    executable = True,
    cfg = "host",
    allow_files = True,
    default = Label("@djinni//:djinni"),
)

def declare_tree(ctx,ext):
  return ctx.actions.declare_directory(ctx.attr.name + ext)

def _cpp_library_impl(ctx):
    tree = declare_tree(ctx,".cc")

    arguments = [ 
        "--idl", ctx.attr.idl.files.to_list()[0].path,
        "--cpp-out", tree.path,
    ]

    if hasattr(ctx.attr, "namespace"):
        arguments.extend(["--cpp-namespace", ctx.attr.namespace])

    if hasattr(ctx.attr, "enum_ident"):
        arguments.extend(["--ident-cpp-enum-type", ctx.attr.enum_ident])

    ctx.actions.run(
        inputs = ctx.attr.idl.files,
        outputs = [ tree ],
        arguments = arguments,
        progress_message = "Generating files into '%s'" % tree.path,
        executable = ctx.executable._tool,
        execution_requirements = {
            "no-sandbox": "1",
            "local": "1",
        },
    )
    return [ DefaultInfo(files = depset(direct = [ tree ])) ]

djinni_cc_library = rule(
    implementation = _cpp_library_impl,
    attrs = {
        "_tool": djinni_bin,
        "idl": attr.label(mandatory = True, allow_single_file=True),
        "namespace": attr.string(mandatory = False),
        "enum_ident": attr.string(mandatory = False),
    },
    output_to_genfiles = True,
    fragments = ["cpp"],
)