#include<iostream>
using namespace std;

int main() {
	for (int a = 1; a <= 100; a++)
	{
		cout << a << '\t';
		if (a %10==0)
		{
			cout << "\n";
		}
		
	}
}