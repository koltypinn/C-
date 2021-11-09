#include <iostream>
#include "Karen.hpp"

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
void Karen::ewh(std::string level)
{
    typedef void (Karen::*com)();

    com fun[4];
    fun[0] = &Karen::debug;
    fun[1] = &Karen::info;
    fun[2] = &Karen::warning;
    fun[3] = &Karen::error;
    level == "DEBUG"   ? (this->*fun[0])(): void();
    level == "INFO"    ? (this->*fun[1])(): void();
    level == "WARNING" ? (this->*fun[2])(): void();
    level == "ERROR"   ? (this->*fun[3])(): void();
}