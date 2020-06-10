#include <iostream>

using namespace std;

void printnumber( int a )
{
    cout << "I'm printing an integer: " << a << endl ;
}

void printnumber ( float b )
{
    cout << "I'm print an float data type: " << b << endl ;
}

int main()
{
    int x = 52 ;
    float y = 98.254 ;

    printnumber(x);
    printnumber(y);

    return 0;
}
