#pragma once

#if __has_include(<CL/opencl.hpp>)
# include <CL/opencl.hpp>
#else
# include <CL/cl.hpp>
# define USING_OLD_CL_API 1
#endif
#include <stdint.h>

struct CLParams
{
    cl_uint dim_x, rad_x;
    cl_uint dim_y, rad_y;
};

void ReversalTable(uint32_t size, uint32_t radix, uint32_t *table);
uint32_t reverse(uint32_t x, uint32_t radix);
size_t radix(size_t n);
