#include <iostream>

using namespace std;

class Encapsulation{
    private:
        int a , b ;

    public:
        void vset( int x , int y)
        {
             a = x ;
             b = y ;
        }

        void display()
        {
            cout << "a = " << a << endl ;
            cout << "b = " << b << endl ;
        }
};

int main()
{
    Encapsulation eo ;
    eo.vset(55,22);
    eo.display();

    return 0;
}
