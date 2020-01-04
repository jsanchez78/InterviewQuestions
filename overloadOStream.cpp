#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {  real = r;   imag = i; }
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
};
///observe for the output the const of object is used (copy)
//No new object is created when passing by const
//One is not changing the value of c
ostream & operator << (ostream &out,const Complex& c){
  out << c.real;
  out << "+ " << c.imag << "i" << endl;
  return out;
}
///observe for the input the actual object is used
///One is changing the value of c
istream & operator >> (istream &in,Complex &c){
  cout << "Enter the real part ";
  in >> c.real;
  cout << "Enter the imaginary part ";
  in >> c.imag;
  return in;
}

int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
   return 0;
}
