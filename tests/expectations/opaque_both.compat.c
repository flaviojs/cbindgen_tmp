#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct HashMap_i32__i32__BuildHasherDefault_DefaultHasher HashMap_i32__i32__BuildHasherDefault_DefaultHasher;

typedef struct Result_Foo Result_Foo;

/**
 * Fast hash map used internally.
 */
typedef struct HashMap_i32__i32__BuildHasherDefault_DefaultHasher FastHashMap_i32__i32;

typedef FastHashMap_i32__i32 Foo;

typedef struct Result_Foo Bar;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(const Foo *a, const Bar *b);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
