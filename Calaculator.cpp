#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	char op;
	cout << "Enter two numbers : ";
	cin >> a >> b;
	cout << "Enter a operator(+, -, *. /): ";
	cin >> op;

	switch(op)
	{
		case '+':
		cout << a + b << endl;
		break;
		case '-':
		cout << a - b << endl;
		break;
		case '*':
		cout << a * b << endl;
		break;
		case '/':
		if(b != 0)
		cout << a / b << endl;
		else
		cout << "Error! Division by zero is not allowed." << endl;
		break;
		default:
		cout << "Error! Operator is not correct." << endl;
		break;
	}
}