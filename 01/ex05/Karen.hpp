#ifndef KAREN_HPP
#define KAREN_HPP

class Karen
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void ewh(std::string level);
};

#endif