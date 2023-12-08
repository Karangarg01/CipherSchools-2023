#include <iostream>

using namespace std;

void printStuff(){
    cout << "Writing my function\n";
}

int sum(int a, int b){
    int c = a+b;
    return c;
}
int main()
{
    printStuff();
    int a =4, b = 5;
    int add = sum(a,b);
    cout << add << endl;
    return 0;
}
