//Mini calculator modified using user defined functions

#include <iostream>
using namespace std;

//function prototypes
void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);
void negation(int);

//Main function
int main()
{
	int first_num; int second_num; int operation;

	//Menu selection
	cout << "Enter your first number" << endl;
	cin >> first_num;
	cout << "Enter your second number" << endl;
	cin >> second_num;
	cout << "Enter operation to perform" << endl;
	cout << "1: Addition" << endl;
	cout << "2: Subtraction" << endl;
	cout << "3: Multiplication" << endl;
	cout << "4: Division" << endl;
	cout << "5: negation" << endl;
	cin >> operation;

	//switch statement
	switch (operation)
	{
	case 1:
		addition(first_num,second_num)
		break;
	case 2:
		subtraction(first_num, second_num)
		break;
	case 3:
		multiplication(first_num, second_num)
		break;
	case 4:
		division(first_num, second_num)
		break;
	case 5:
		addition(first_num, second_num)
		break;
	default:
		cout << "ERROR" << endl;
	
	}

	return 0;

}

void addition(int x; int y)
{
	int add;
	add = x + y; 
	cout << "The sum of" << first_num << "and" << second_num << "is" << add << endl;
	return 0;
}

void subtraction(int x, int y)
{
	int sub;
	sub = x - y;
	cout << "The difference of" << first_num << "and" << second_num << "is" << sub << endl;
	return 0;
}

void multiplication(int x, int y)
{
	int mult;
	multi = x * y;
	cout << "The product of" << first_num << "and" << second_num << "is" << mult << endl;
	return 0;
}

void division(int x, int y)
{
	int div;
	div = x / y;
	cout << "The quotient of" << first_num << "and" << second_num << "is" << div << endl;
	return 0;
}

void negation(int x)
{
	int neg;
	neg = x - 2x;
	cout << "The negation of" << first_num << "is" << neg < endl;
	return 0;
}