#include <iostream>
using namespace std;
bool lovefunction(int numbpetals1,int numbpetals2)
{
	int a = numbpetals1 % 2;
	int b = numbpetals2 % 2;
	if (a != b) return true;
	return false;
}
int main()
{
	int petFlower1, petFlower2;
	cout << "add number of petals first flower "; cin >> petFlower1; cout<<endl;
	cout << "add number of petals second flower "; cin >> petFlower2; cout << endl;
	if (lovefunction(petFlower1, petFlower2)) cout << "Timmy & Sarah  are in love";
	else cout << "Timmy and Sarah are not in love, ";
		
	return 0;
}