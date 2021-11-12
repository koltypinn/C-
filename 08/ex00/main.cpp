#include "easyfind.hpp"

int main()
{
    std::vector<int> array;
    array.push_back(1);
    array.push_back(33);
    array.push_back(533);
    array.push_back(243);
    array.push_back(555);
    try
    {
        easyfind(array, 1);
        easyfind(array, 533);
        easyfind(array, 33);
        easyfind(array, 555);
        easyfind(array, 243);
        easyfind(array, 20);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
