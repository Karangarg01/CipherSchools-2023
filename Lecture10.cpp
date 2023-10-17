#include <iostream>

using namespace std;

void printHi(){
    cout << "Hi" << endl;
    return;
}

int sum(int a, int b){
    int c;
    c = a+b;
    cout << "The value of c is " << c << endl;
    a = 500;
    return c;
}
int main()
{
    printHi();
    int a,b,c; 
    a = 4;
    b = 6;
    c = 75;
    int d = sum(a,b);
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;
    return 0;
}
