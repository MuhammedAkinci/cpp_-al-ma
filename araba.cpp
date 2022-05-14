#include<iostream>
using namespace std;

class Car
{
	public:
		string marka;
		string model;
		int year;
		car(string x, string y, int z);		
};
Car::car(string x, string y, int z)
{
	marka = x;
	model = y;
	year = z;
}
int main()
{
	Car obj1;
	Car obj2;
	
	cout << "obj1 marka gir: ";
	cin >> obj1.marka;
	
	cout << "obj1 model: ";
	cin >> obj1.model;
	
	cout << "obj1 yil gir: ";
	cin >> obj1.year;
	
	cout << "\n";
	
	cout << "obj2 marka gir: ";
	cin >> obj2.marka;
	
	cout << "obj2 model gir: ";
	cin >> obj2.model;
	
	cout << "obj2 yil gir: ";
	cin >> obj2.year;
	
	cout << "obj1 marka: \t" << obj1.marka << "obj1 model: \t" << obj1.model << "obj1 yil: " << obj1.year << endl;
	cout << "obj2 marka: \t" << obj2.marka << "obj2 model: \t" << obj2.model << "obj2 yil: " << obj2.year;
}


