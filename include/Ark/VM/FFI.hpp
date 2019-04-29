#ifndef ark_vm_ffi
#define ark_vm_ffi

#include <vector>

#include <Ark/VM/Value.hpp>

namespace Ark
{
    namespace VM
    {
        namespace FFI
        {
            #define FFI_VM
            #define FFI_MAKE_HEADER

            #include <Ark/MakeFFI.hpp>

            #undef FFI_VM
            #undef FFI_MAKE_HEADER
        }
    }
}

#endif