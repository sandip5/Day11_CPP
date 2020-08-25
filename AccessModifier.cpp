#include <iostream>
#include <string>

using namespace std;

class Fruit
{
	int weight, price;
	string name;
	
	public:
	int getWeight()
	{
		return weight;
	}

	int getPrice()
	{
		return price;
	}

	string getName()
	{
		return name;
	}

	void setWeight(int weight)
	{
		this -> weight = weight;
	}

	void setPrice(int price)
	{
		this -> price = price;
	}

	void setName(string name)
	{
		this -> name = name;
	}
};

class Vegetable
{
	protected:
	int weight, price;
	string name;

	Vegetable()
	{
		weight = 500;
        	price = 34;
        	name = "Potato";
	}
};

class Potato : public Vegetable
{
	public:
	void showDetails()
	{
		cout << name << " " << "Price: " << price << " " << "Weight: " << weight << endl;
	}
};

int main()
{
	//In Class All Member Functions By Default Private So We Can Not Access Directly.
	//For Accessing That Data We Can Use Method And Give Access Modifier Public So By doing that my data
	//is still not any chance of mishandling and by the help of public method we can handle it.
	Fruit apple, mango;
	/*cout << apple.size << endl;
	when trying to fetch variables give compile time error
	AccessModifier.cpp: In function 'int main()':
	AccessModifier.cpp:55:16: error: 'int Fruit::size' is private within this context
  	cout << apple.size << endl;
                ^~~~
	AccessModifier.cpp:8:14: note: declared private here
  	int weight, size;
              ^~~~
	AccessModifier.cpp:55:16: note: field 'int Fruit::size' can be accessed via 'int Fruit::getSize()'
  	cout << apple.size << endl;
                ^~~~
                getSize()
	*/
	apple.setWeight(500);
	apple.setPrice(50);
	apple.setName("Apple");
	cout << "Name Of Fruit: " << apple.getName() << "Price: " << apple.getPrice() << "Quantity: " << apple.getWeight() << endl;

	mango.setWeight(800);
	mango.setPrice(40);
	mango.setName("Mango");
	cout << "Name Of Fruits: " << mango.getName() << "Price: " << mango.getPrice() << "Quantity: " << mango.getWeight() << endl;

	Potato p1;
	p1.showDetails();
}
