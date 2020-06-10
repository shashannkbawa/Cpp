#include <iostream>

using namespace std;

class Airthmatic {
public:
    double division( int a , int b )
    {
        if ( b==0 )
        {
            throw " Infinity " ;
        }

        return a/b ;
    }
};


int main()
{
    int x = 50 ;
    int y = 0 ;

    double z = 0 ;

    try {
            z = division(x,y);
            cout << z << endl;
    }

    catch ( const char*msg)
    {
        cerr << msg << endl;
    }
    return 0;
}
