#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int k;
	do {
		cout << "Enter the laboratory work you want open: ";
		int a;
		cin >> a;
        switch (a)
		{
		case 1:
			system("Lab1.exe");
			break;
		case 2:
			system("Lab2.exe");
			break;
		case 3:
			system("Lab3.exe");
			break;
		case 4:
			system("Lab4.exe");
			break;

		default:
			cout << "Error";
			break;
		}
		cout << "If you want to open another laboratory work, enter 1, else 0: ";
		cin >> k;
	} while (k == 1);
}