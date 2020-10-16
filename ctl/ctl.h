#ifndef __CTL_H__
#define __CTL_H__

#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>

#define CTL_CAT(a, b) a##b

#define CTL_PASTE(a, b) CTL_CAT(a, b)

#define CTL_TEMP(type, name) CTL_PASTE(CTL_PASTE(name, _), type)

#define CTL_IMPL(container, name) CTL_PASTE(container, CTL_PASTE(_, name))

#define CTL_FOR(it, ...) while(!it.done) { __VA_ARGS__ it.step(&it); }

#define CTL_MUST_ALIGN_16(T) (sizeof(T) == sizeof(char))

#define CTL_LEN(a) (sizeof(a) / sizeof(*a))

// BUILT IN TYPES
#define char_init_default     (NULL)
#define char_copy             (NULL)
#define char_free             (NULL)
#define int_init_default      (NULL)
#define int_copy              (NULL)
#define int_free              (NULL)
#define unsigned_init_default (NULL)
#define unsigned_copy         (NULL)
#define unsigned_free         (NULL)
#define float_init_default    (NULL)
#define float_copy            (NULL)
#define float_free            (NULL)
#define double_init_default   (NULL)
#define double_copy           (NULL)
#define double_free           (NULL)

#endif
