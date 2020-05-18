#include <iostream>

using namespace std;

class Abstraction{

    private:
        int a , b ;

    public:
        void vset ( int x , int y)
        {
            a = x;
            b = y;
        }

        void display ()
        {
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main()
{
    Abstraction ao ;
    ao.vset( 10,20 );
    ao.display();
    return 0;
}
