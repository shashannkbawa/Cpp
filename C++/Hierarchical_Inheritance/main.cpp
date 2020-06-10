#include <iostream>

using namespace std;

class father
{
public:
    void emotions()
    {
        cout << "Anger" << endl;
    }

};

class ca : public father
{
public:
    void a_emotion()
    {
        cout << "Kindness" << endl;
    }

};

class cb : public father
{
public:
    void b_emotion()
    {
        cout << "happiness" << endl;
    }

};


int main()
{
    ca oba;
    oba.emotions();
    oba.a_emotion();

    cb obb ;
    obb.emotions();
    obb.b_emotion();

    return 0;
}
