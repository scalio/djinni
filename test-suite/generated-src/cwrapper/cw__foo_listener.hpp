// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_listener.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "foo_listener.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "cw__foo_listener.h"

#ifdef __cplusplus
}
#endif
struct DjinniWrapperFooListener final {
    DjinniWrapperFooListener(std::shared_ptr<::testsuite::FooListener>wo): wrapped_obj(wo) {};

    static std::shared_ptr<::testsuite::FooListener> get(djinni::Handle<DjinniWrapperFooListener> dw);
    static djinni::Handle<DjinniWrapperFooListener> wrap(std::shared_ptr<::testsuite::FooListener> obj);

    const std::shared_ptr<::testsuite::FooListener> wrapped_obj;
    std::atomic<size_t> ref_count {1};
};

class FooListenerPythonProxy final : public ::testsuite::FooListener {
    public:
        explicit FooListenerPythonProxy(DjinniObjectHandle * c_ptr);
        ~FooListenerPythonProxy();
        DjinniObjectHandle * get_m_py_obj_handle();

        std::string on_string_change(const std::string & private_string);

        int32_t get_private_int(void);

        std::string on_changes_string_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d);

        std::vector<uint8_t> on_changes_binary_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d);

        std::chrono::system_clock::time_point on_changes_date_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d);

        int32_t on_changes_int_returned(int32_t i, float f, const std::string & s, const std::vector<uint8_t> & binar, bool b, const std::chrono::system_clock::time_point & d);

        ::testsuite::FooSomeOtherRecord on_changes_record_returned(int32_t n1, int32_t n2);

        std::experimental::optional<std::string> on_changes_string_optional_returned(std::experimental::optional<int32_t> i, float f, const std::experimental::optional<std::string> & s, const std::vector<uint8_t> & binar, int32_t b, const std::chrono::system_clock::time_point & d);

        std::experimental::optional<int32_t> on_changes_int_optional_returned(std::experimental::optional<int32_t> i, float f, const std::experimental::optional<std::string> & s, const std::vector<uint8_t> & binar, int32_t b, const std::chrono::system_clock::time_point & d);

        void cause_py_exception(const std::string & exception_arg);

        void cause_zero_division_error(void);

    private:
        DjinniObjectHandle * m_py_obj_handle;
};
