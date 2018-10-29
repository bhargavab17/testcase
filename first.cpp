#include <iostream>
using namespace std;
#define TWO 2

int Add(int a , int b)
{
    int c = a+b;
    return c ;
}


int main(){

int (*ptr)(int,int);
ptr = &Add;
int c = ptr(5,6);
cout << c<< endl;

}

