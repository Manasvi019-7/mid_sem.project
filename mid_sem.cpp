#include <iostream>
using namespace std;


class Complex
{

	private:
		double real,imag;

	public:
	Complex()
	{
  		real=0;
  		imag=0;
 	}
 
 	Complex(double r)
 	{
  		real=r;
  		imag=0;
 	}
    
 	Complex(double r, double i)
 	{
  		real=r;
  		imag=i;
 	}
   
 	Complex(Complex &obj)
 	{
  		real=obj.real;
  		imag=obj.imag;
 	}
  
 	Complex add(Complex c)
 	{
        Complex Add;
  		Add.real = real + c.real;
  		Add.imag = imag + c.imag;
        return Add;
 	}
    
 	Complex sub(Complex c)
 	{
  		Complex Sub;
  		Sub.real = real - c.real;
  		Sub.imag = imag - c.imag;
  		return Sub;
 	}
   
 	Complex mult(Complex c)
 	{
        Complex Mult;
  		Mult.real = real*c.real - imag*c.imag;
  		Mult.imag = real*c.imag - c.real*imag;
  		return Mult;
 	}
   
    
 	void print()
 	{
        cout<<real<<"+"<<imag<<"i"<<endl<<endl;
 	}
    
 	double getReal() const
 	{
  		return real;
 	}
    
 	double getImag() const
 	{
 	 return imag;
 	}
   
 	void setReal(double re)
 	{
  		real = re;
	}
    
 	void setImag(double im)
 	{
        imag = im;
 	}
 };


int main()
{
	double real1,imag1,real2,imag2;

	cout<<"Enter the Real  part of First Number: ";
    cin>>real1;
 	cout<<"Enter the imaginary  part of First Number: ";
 	cin>>imag1;
    Complex obj1(real1,imag1);

 	cout<<"Enter the Real part of Second Number: ";
 	cin>>real2;
 	cout<<"Enter the Imaginary part of second number: ";
    cin>>imag2;
    Complex obj2(real2,imag2);
    cout<<"first number : "<<endl;
    obj1.print();
    cout<<"second number : "<<endl;
 	obj2.print();

 	Complex c;
 	c = obj1.add(obj2);
 	cout<<"Addition  : "<<c.getReal()<<"+"<<c.getImag()<<"i"<<endl;
 	c= obj1.sub(obj2);
 	cout<<endl<<"Subtraction  : "<<c.getReal()<<"+"<<c.getImag()<<"i"<<endl;

 	c= obj1.mult(obj2);
 	cout<<endl<<"Multiplication  : "<<c.getReal()<<"+"<<c.getImag()<<"i"<<endl;
 	return 0;
}

