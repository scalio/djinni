// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_enum_interface.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "foo_enum_interface.hpp"

#include "color.hpp"
#include "cw__foo_enum_interface.hpp"
#include "dh__color.hpp"
#include <experimental/optional>

std::shared_ptr<::testsuite::FooEnumInterface> DjinniWrapperFooEnumInterface::get(djinni::WrapperRef<DjinniWrapperFooEnumInterface> dw) {
    if (dw) {
        return dw->wrapped_obj;
    }
    return nullptr;
}

void foo_enum_interface___wrapper_add_ref(DjinniWrapperFooEnumInterface * dh) {
    dh->ref_count.fetch_add(1);
}
void foo_enum_interface___wrapper_dec_ref(DjinniWrapperFooEnumInterface * dh) {
    const size_t ref = dh->ref_count.fetch_sub(1);
    if (ref == 1) {// value before sub is returned
        delete dh;
    }
}
djinni::Handle<DjinniWrapperFooEnumInterface> DjinniWrapperFooEnumInterface::wrap(std::shared_ptr<::testsuite::FooEnumInterface> obj) {
    if (obj)
        return djinni::Handle<DjinniWrapperFooEnumInterface>(new DjinniWrapperFooEnumInterface{ std::move(obj) }, foo_enum_interface___wrapper_dec_ref);
    return nullptr;
}

void cw__foo_enum_interface_set_enum(DjinniWrapperFooEnumInterface * djinni_this, int some_color) {
    try {
        djinni_this->wrapped_obj->set_enum(static_cast<::testsuite::color>(some_color));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

int cw__foo_enum_interface_get_enum(DjinniWrapperFooEnumInterface * djinni_this) {
    try {
        return int32_from_enum_color(djinni_this->wrapped_obj->get_enum());
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}

void cw__foo_enum_interface_set_optional_enum(DjinniWrapperFooEnumInterface * djinni_this, int some_color) {
    try {
        djinni_this->wrapped_obj->set_optional_enum(get_boxed_enum_color_from_int32(some_color));
    } CW_TRANSLATE_EXCEPTIONS_RETURN();
}

int cw__foo_enum_interface_get_optional_enum(DjinniWrapperFooEnumInterface * djinni_this) {
    try {
        return int32_from_enum_color(djinni_this->wrapped_obj->get_optional_enum());
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
DjinniWrapperFooEnumInterface * cw__foo_enum_interface_create(void) {
    try {
        return DjinniWrapperFooEnumInterface::wrap(::testsuite::FooEnumInterface::create()).release();
    } CW_TRANSLATE_EXCEPTIONS_RETURN(0);
}
