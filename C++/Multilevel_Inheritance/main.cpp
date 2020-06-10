#include <iostream>

using namespace std;

class cs
{
public:
    void cs_student()
    {
        cout << "Ravindra , Shubham , Sahil ..." << endl ;
    }
};

class ex : public cs
{
public:
    void ex_students()
    {
        cout << "Rahul , vivek , himanshu" << endl ;
    }
};

class collage : public ex
{

};

int main()
{
    collage co ;
    co.cs_student();
    co.ex_students();
    return 0;
}
