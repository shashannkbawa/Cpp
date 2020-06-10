#include <iostream>

using namespace std;

class complex
{
private:
    int real , image ;

public:
    complex ( int r = 0 , int i = 0)
    {
        real = r ;
        image = i ;
    }

    complex operator + (complex const &obj )
    {
        complex res ;
        res.real = real + obj.real;
        res.image = image + obj.image;

        return res ;
    }

    void printf()
    {
        cout << real << " +i" << image << endl ;
    }

};


int main()
{
    complex c1(10 , 20) , c2(5,50) ;
    complex c3 = c1 + c2 ;

    c3.printf();

    return 0;
}
