load("@djinni//tools:djinni.bzl", "djinni_cc_library")

djinni_cc_library(
    name = "textsort_djinni",
    idl = "example.djinni",
    namespace = "textsort",
    enum_ident = "foo_bar",
)

cc_library(
    name = "textsort",
    srcs = glob(["handwritten-src/cpp/*.cpp"]),
    hdrs = glob(["handwritten-src/cpp/*.hpp"]),
)