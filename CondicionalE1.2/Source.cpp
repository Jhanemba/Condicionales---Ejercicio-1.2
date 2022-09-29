/*
Escriba un programa que lea dos numeros y determine cual de ellos es el mayor
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b;

	cout << "Introduzca 2 numeros: " << endl;
	cin >> a >> b;

	if(a > b)
	{
		cout << "El numero mayor es " << a;
	}
	else
	{
		cout << "El numero mayor es " << b;
	}

	return 0;
}