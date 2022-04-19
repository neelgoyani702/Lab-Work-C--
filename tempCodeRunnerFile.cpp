#include <bits/stdc++.h>
using namespace std;
// Forward declaration of
// destination class
class Class_type_two;
// Source class, i.e
// Class which will be converted to another
class Class_type_one
{
	string a = "GeeksforGeeks";

public:
	// Member function which returns
	// string type data
	string get_string()
	{
		return (a);
	}

	// Member function to display
	void display()
	{
		cout << a << endl;
	}
	// declaration of casting
	// operator for class conversion
	// note that it will be of type destination class
	operator Class_type_two();
};

// Destination class, i.e
// class type to which source class will converted
class Class_type_two
{

public:
	string b;

	// Member function for displaying
	// the data assigned to b.
	void display()
	{
		cout << b << endl;
	}
};
// here we define our casting operator
Class_type_one::operator Class_type_two()
{
	Class_type_two obj;
	obj.b = a;
	return obj;
}

int main()
{
	// Creating object of class Class_type_one
	Class_type_one a;

	// Creating object of class Class_type_two
	Class_type_two b;

	// CLass type conversion
	// using operator overloading
	b = a;

	// Displaying data of object
	// of class Class_type_one
	a.display();

	// Displaying data of object
	// of class Class_type_two
	b.display();

	return 0;
}
