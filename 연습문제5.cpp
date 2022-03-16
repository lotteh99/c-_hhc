#include<iostream>
#include<string>
using namespace std;

int main()
{
	char name[100];
	int cnt = 0;
	cin.getline(name, 100, '\n');

	for (int i = 0; i < 100; i++)
	{
		if (name[i] == 'x')
		{
			cnt++;
		}
	}
	cout << "x의 개수는" << cnt;
}