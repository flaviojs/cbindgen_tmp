#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct NotReprC_Point NotReprC_Point;

typedef NotReprC_Point Foo;

typedef struct {
  int32_t x;
  int32_t y;
} Point;

typedef struct {
  Point point;
} MyStruct;

void root(const Foo *a, const MyStruct *with_manual_drop);

void take(Point with_manual_drop);
