#include "mutantstack.hpp"
#include <list>
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    MutantStack<int> ms;
    std::list<int> lst;
    MutantStack<int> ms_empty;
    std::list<int> lst_empty;
    ms.push(200);
    ms.push(300);
    lst.push_back(200);
    lst.push_back(300);
    std::cout << "the return of ms.empty() is      :  " << ms.empty() << std::endl;
    std::cout << "the return of lst.empty() is     :  " << lst.empty() << std::endl;
    std::cout << "the return of ms_empty.empty() is:  " << ms_empty.empty() << std::endl;
    std::cout << "the return of lst_empty.empty() is: " << lst_empty.empty() << std::endl;
    std::cout << std::endl;

    return 0;

    
}
