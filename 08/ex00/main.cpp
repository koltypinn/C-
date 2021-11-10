#include "easyfind.hpp"

int main()
{
    std::vector<int> array;
    array.push_back(3);
    array.push_back(5);
    array.push_back(10);
    array.push_back(1);
    array.push_back(2);
    array.push_back(9);
    try
    {
        easyfind(array, 3);
        easyfind(array, 5);
        easyfind(array, 10);
        easyfind(array, 2);
        easyfind(array, 1);
        easyfind(array, 9);
        easyfind(array, 20);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}