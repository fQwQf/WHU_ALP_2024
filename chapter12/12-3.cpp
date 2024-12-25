#include <bits/stdc++.h>

class CException
{
public:
    CException(const char *reason)
    {
        this->reason = reason;
    }
    const char *Reason()
    {
        return reason;
    }

private:
    const char *reason;
};

void fn1()
{
    throw CException("fn1()");
}

int main(){
    try
    {
        fn1();
    }
    catch (CException &e)
    {
        std::cout << e.Reason() << std::endl;
    }
}