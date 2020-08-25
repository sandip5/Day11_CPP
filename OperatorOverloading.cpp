#include <iostream>

using namespace std;

class Complex
{
private:
	int real;
	int img;

public:
	Complex(int r = 0,int i = 0)
 	{
 		real = r;
 		img = i;
 	}

	void display()
	{
		cout << real << "+i" << img <<endl;
	}

	Complex operator+(Complex c1)
	{
		Complex temp;
		temp.real = real + c1.real;
		temp.img = img + c1.img;
		return temp;
	}
};

//a = 2
//b = 4
//c = a + b
// 2 + 4 = 6
//c1.add(c2)
// 2 + 3i
// 3 + 5i
// 5 + 8i
// c1 + c2 = c3

int main()
{
	Complex c1(5, 3), c2(10, 5), c3;

	c3 = c1 + c2;

	c3.display();
}
