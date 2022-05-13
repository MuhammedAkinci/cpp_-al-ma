#include<iostream>

using namespace std;

int main()
{
	float a,b;
	string islem;
	
	std::cout << "hesap makinesine hos geldiniz..." << endl;
	
	std::cout << "1.islem toplama islemidir\n2.islem cikarma islemidir.\n3.islem carpma islemidir.\n4. islem bolme islemeleridir.\nhangisini istersin" << endl;
	std::cin >> islem;
	
	if(islem == "1")
	{
		std::cout << "toplama islemi icin 2 tane deger giriniz:";
		std::cin >> a >> b;
		std::cout << a + b;
	}
	else if(islem == "2")
	{
		std::cout << "cikarma islemi icin 2 tane deger giriniz:";
		std::cin >> a >> b;
		std::cout << a - b;
	}
	else if(islem == "3")
	{
		std::cout << "carpma islemi icin 2 tane deger giriniz:";
		std::cin >> a >> b;
		std::cout << a * b;
	}
	else if(islem == "4")
	{
		std::cout << "bolme islemi icin 2 tane deger giriniz:";
		std::cin >> a >> b;
		std::cout << a / b;
	}
	
	
	
	
	return 0;
}
