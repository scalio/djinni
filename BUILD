load("@io_bazel_rules_scala//scala:scala.bzl", "scala_binary")

scala_binary(
    name = "djinni",
    srcs = glob(["src/source/*.scala"]), 
    deps = [
        "@scala_parser_combinators//jar",
        "@snakeyaml//jar",
        "@scopt//jar",
    ],
    main_class = "djinni.Main",
    visibility = ["//visibility:public"],
)