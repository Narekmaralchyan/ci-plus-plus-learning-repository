#include <iostream>
double getnumber()
{
	double number;
	
	while(true) {
		std::cout << "input a number ";
		std::cin >> number;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else  return number;
	}
}
char getoperator()
{
    	while (true)
	{
		std::cout << "Plese select math operator << + , - , / , * >>  ->  ";
		char a;
		std::cin >> a;
		std::cin.ignore(32767, '\n');
		if (a == '+' || a == '-' || a == '*' || a == '/')
			return a;
		else std::cout << "please input correctly ";
	}
}
void printresult(double x, char a, double y)
{	
		switch (a)
		{
		case '+':
			std::cout << x + y;
			break;
		case '-':
			std::cout << x - y;
			break;
		case '/':
			std::cout << x / y;
			break;
		case '*':
			std::cout << x * y;
			break;
		}
}
int main()
{
	double a = getnumber();
	char x = getoperator();
	double b = getnumber();
	printresult(a, x, b);
	return 0;
}