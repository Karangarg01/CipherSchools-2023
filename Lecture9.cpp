#include <iostream>

using namespace std;

int sum(int,int);

int main()
{
    int a =4, b = 5;
    int add = sum(a,b);
    cout << add << endl;
    cout << a << endl << b <<endl;
    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}
