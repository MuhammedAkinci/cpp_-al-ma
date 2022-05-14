#include<iostream>
using namespace std;

class Emp
{
	private: 
		int fiyat;
	
	public:
		void netfiyat(int a)
		{
			fiyat = a;
		}
		int getfiyat()
		{
			return fiyat;
		}
};
int main()
{
	Emp obj1;
	obj1.netfiyat(10);
	cout << obj1.getfiyat();
	
	return 0;
}
