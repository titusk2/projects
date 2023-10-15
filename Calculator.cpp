#include <iostream>
using namespace std;


int main(void)
{
	

	char opperand;
	float num1;
	float num2;
	bool done = false;

	while(!done)
	{
	cout << "enter a opperator: +, -, *, /" << endl;
	cin >> opperand;

	cout << "enter 2 inputs" << endl;
	cin >> num1 >> num2;

		switch (opperand)
		{
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
			
			break;
			

		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			
			break;
			

		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
			
			break;
			

		case '/':
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			
			break;
			

		default:
			cout << "opperator chosen that wasn't listed. Use what's listed above" << endl;
			break;

			return 0;
		}
	}
		
}


