
#if defined(__clang__) || defined(__GNUC__)
#define ATTRIBUTE_NO_SANITIZE_ADDRESS __attribute__((no_sanitize("address")))
#elif defined(_MSC_VER)
#define ATTRIBUTE_NO_SANITIZE_ADDRESS __declspec(no_sanitize_address)
#else
#define ATTRIBUTE_NO_SANITIZE_ADDRESS
#endif