//Copyright Alice Framework, All Rights Reserved
#pragma once
#include <Basic\Types.hpp>

typedef f32 V128F __attribute__((vector_size(16)));
typedef f64 V128 __attribute__((vector_size(16)));
typedef f32 V256F __attribute__((vector_size(32)));
typedef f64 V256 __attribute__((vector_size(32)));
typedef f32 V512F __attribute__((vector_size(64)));
typedef f64 V512 __attribute__((vector_size(64)));