#include <iostream>

using namespace std;

class A
{
public:
    void cs_students()
    {
        cout << "Ravindra /n Shubham " << endl ;
    }

};

class B
{
public:
    void ex_students()
    {
        cout << "Raul /n vikas " << endl ;
    }

};

class C : public A , public B
{

};


int main()
{
    C oc;
    oc.cs_students();
    oc.ex_students();

    return 0;
}
