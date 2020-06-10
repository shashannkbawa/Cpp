#include <iostream>

using namespace std;

int main()
{
    int prime(int);
    int num;

    scanf("%d",&num);
    prime(num);
}

int prime(int num){

    static int i = 2;

    if(num>1){
        if( num%i==0 ){
            printf("\n %d", i);
            return prime(num/i);
        }
    }
    else{
        i++;
        prime(num);
    }
    else{
        return 1;
    }
}
