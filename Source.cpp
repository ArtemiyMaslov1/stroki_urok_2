# define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "string.h"

using namespace std;

int main()
{

	//char arr[] = "Week";
	//cout << arr;
	//for (int i = 0; i < 4; i++)
	//{
	//	if (i == 2)
	//	{
	//		arr[i] = 97;
	//	}
	//}	
	//cout << "\n";
	//cout << "Sposob 1";
	//cout << "\n";
	//cout << arr;
	//cout << "\n";
	//
	//cout << "Sposob 2";
	//cout << "\n";
	//arr[2] = 'a';
	//cout << arr;
	//cout << "\n";
	//
	//cout << "\n";
	//cout << "Sposob 3";
	//cout << "\n";
	//char arr2[] = "Weak";
	//strcpy_s(arr, arr2);
	//cout << arr;

	//char text[] = "Print texs";
	//int a;
	//a = strlen(text) + 1;
	//a++;
	//char* dest = new char[a];
	//strcpy(dest, text);
	//cout << dest << endl;

	char hi[21] = "hello, ";
	char kakti[13] = "how are you";

	strcat(hi, kakti);
	cout << hi;

	int n = strlen(hi) + 1;
	char* hi2 = new char[n];

	int a = strcmp(hi, kakti);
	cout << "\n";
	cout << a;
	return 0;
}