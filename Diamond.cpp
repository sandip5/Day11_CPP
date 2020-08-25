#include <iostream>

using namespace std;

class Person
{
	public:
	int living_being;
};

class Father : virtual public Person
{
	public:
	int father;
};

class Mother : virtual public Person
{
	public:
	int mother;
};

class Child : public Father, public Mother
{
	public:
	int child;
};

int main()
{
	Child child;
	child.living_being = 1;
	cout << child.living_being << endl;
	return 0;
}
