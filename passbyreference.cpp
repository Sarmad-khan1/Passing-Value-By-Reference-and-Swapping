#include <iostream>
using namespace std;
void swapped(int &num1, int &num2);

int main()
{
	int num1 = 6, num2 = 7;
	cout << num1 << " " << num2 << endl;
	swapped(num1, num2);
	cout<<num1<<" "<<num2;
	return 0;
}

void swapped(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}