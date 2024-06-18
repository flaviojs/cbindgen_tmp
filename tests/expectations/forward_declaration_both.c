#if defined(CBINDGEN_STYLE_TYPE)
/* ANONYMOUS STRUCTS DO NOT SUPPORT FORWARD DECLARATIONS!
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct StructInfo {
  const struct TypeInfo *const *fields;
  uintptr_t num_fields;
} StructInfo;

typedef enum TypeData_Tag {
  Primitive,
  Struct,
} TypeData_Tag;

typedef struct TypeData {
  TypeData_Tag tag;
  union {
    struct {
      struct StructInfo struct_;
    };
  };
} TypeData;

typedef struct TypeInfo {
  struct TypeData data;
} TypeInfo;

void root(struct TypeInfo x);

#if defined(CBINDGEN_STYLE_TYPE)
*/
#endif
