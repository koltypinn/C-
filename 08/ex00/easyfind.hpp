#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void easyfind(T container, int x)
{
    typename T::iterator i;
    i = std::find(container.begin(), container.end(), x);
    if (i == container.end())
    {
        std::cerr << x << " not found\n";
        throw std::exception();
    }
    else
        std::cout << x << " found\n";
}