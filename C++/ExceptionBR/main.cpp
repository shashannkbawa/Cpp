#include <iostream>

using namespace std;

int main()
{

    try {

        int mom_age = 34 ;
        int son_age = 50 ;

        if ( son_age > mom_age )
        {
                throw 99 ;
        }
    }
    catch (int x)
    {
        cout << "Moms age can't be greater than sons age " << x << endl ;
    }

    return 0;
}
