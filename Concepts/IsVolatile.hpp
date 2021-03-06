//Copyright Alice Framework, All Rights Reserved
#pragma once

namespace Alice
{
    namespace Concepts
    {
        template<class T> class IsVolatileClass
        {
        public:
            constexpr static bool Value = false;
        };

        template<class T> class IsVolatileClass<volatile T>
        {
        public:
            constexpr static bool Value = true;
        };

        template<class T> constexpr bool IsVolatile = IsVolatileClass<T>::Value;
    }
}