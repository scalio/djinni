workspace(name = "djinni")

rules_scala_version="14d9742496859faaf860b1adfc8126f3ed077921" # update this as needed

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive( 
    name = "com_google_protobuf", 
    sha256 = "9510dd2afc29e7245e9e884336f848c8a6600a14ae726adb6befdb4f786f0be2", 
    urls = ["https://github.com/protocolbuffers/protobuf/archive/v3.6.1.3.zip"], 
    strip_prefix = "protobuf-3.6.1.3", 
)

http_archive(
    name = "io_bazel_rules_scala",
    strip_prefix = "rules_scala-%s" % rules_scala_version,
    type = "zip",
    url = "https://github.com/bazelbuild/rules_scala/archive/%s.zip" % rules_scala_version,
)

load("@io_bazel_rules_scala//scala:toolchains.bzl", "scala_register_toolchains")
scala_register_toolchains()

load("@io_bazel_rules_scala//scala:scala.bzl", "scala_repositories")
scala_repositories((
    "2.12.8",
    {
       "scala_compiler": "f34e9119f45abd41e85b9e121ba19dd9288b3b4af7f7047e86dc70236708d170",
       "scala_library": "321fb55685635c931eba4bc0d7668349da3f2c09aee2de93a70566066ff25c28",
       "scala_reflect": "4d6405395c4599ce04cea08ba082339e3e42135de9aae2923c9f5367e957315a"
    }
))

maven_jar(
    name = "scala_parser_combinators",
    artifact = "org.scala-lang.modules:scala-parser-combinators_2.12:1.1.2",
)

maven_jar(
    name = "snakeyaml",
    artifact = "org.yaml:snakeyaml:1.24",
)

maven_jar(
    name = "scopt",
    artifact = "com.github.scopt:scopt_2.12:3.7.1"
)