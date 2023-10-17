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
    return c;
}

void swap(int &a,int &b){
    int c = a;
    a = b;
    b = c;
    cout << "The values of a and b inside swap are " << a << " " <<  b << endl;
}

void fun(int &a, int b){
    a = 3333;
}
int main()
{
    printHi();
    int a,b,c; 
    a = 4;
    b = 6;
    cout << "The values of a and b before swap " << a << " " << b << endl;
    swap(a,b);
    fun(a,b);
    cout << "The value of a and b inside main are " << a << " " << b << endl;
    
    
    return 0;
}
