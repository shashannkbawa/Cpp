#include <iostream>

using namespace std;

class A
{
public:

    void disp()
    {
        cout << "I'm from class A" << endl;
    }
};

class B : public A
{
public:

    void dispb()
    {
        cout << "I'm from class B" << endl;
    }
};

int main()
{
    B ob ;
    ob.disp();
    ob.dispb();

    return 0;
}
