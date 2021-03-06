#include <Collections/Generic/List.hpp>
#include <iostream>

void ListTest()
{
    Alice::Collections::Generic::List<f32> vec(4);
    Alice::Collections::Generic::List<f32> vec3{0.2f, 2.3f, 3.4f};
    vec[0] = 2.4f;
    vec[1] = 93847.9384f;
    vec[2] = 9.0f;
    std::cout << std::boolalpha;
    std::cout << vec.Exists(2.4f) << std::endl;//returns true
    std::cout << vec.BinarySearch(2.4f) << std::endl;//returns 0
    vec3.Swap(vec);
    std::cout << vec3.Exists(2.4f);//returns true
    vec.Swap(vec3);
    vec.Add(92.4f);
    std::cout << vec.Capacity() << std::endl
    << vec.Size() << std::endl
    << vec[0] << std::endl << vec[1] << std::endl
    << vec[2] << std::endl << vec[3] << std::endl << vec[4] << std::endl;
    vec.Remove();
    std::cout << vec[4] << std::endl;
    vec.Resize(vec.Size() + 3);
    std::cout << vec.Capacity() << std::endl;
    Alice::Collections::Generic::List<f32> vec2(Alice::Forward<decltype(vec)>(vec));
    std::cout << vec2.Capacity() << std::endl << vec2[0] << std::endl << vec2[1] << std::endl << vec2[2] << std::endl;
    char c;
    std::cin >> c;
}