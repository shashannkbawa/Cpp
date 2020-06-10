#include <iostream>

using namespace std;

class Dog
{
public:

    void sound()
    {
        cout << "bhok" << endl;
    }
};

class cat : public Dog
{
public:
    void sound()
    {
        cout << "meow " << endl;
    }
};


int main()
{
    Dog do1;
    cat co1;

    co1.sound();
    do1.sound();
    return 0;
}
