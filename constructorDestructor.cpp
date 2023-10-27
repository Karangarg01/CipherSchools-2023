#include<iostream>
using namespace std;

class Comlex{
  float real, img;
  public:
  Comlex(int a, int b){
      real = a;
      img = b;
  }
  void print(){
      cout << "The real part is " << real << endl;
      cout << "The imaginary part is " << img << endl;
  }
  ~Comlex(){
      cout << "The use of object is complete and object is getting destroyed\n";
  }
};
int main(){
    Comlex obj(19,20);
    obj.print();
}
