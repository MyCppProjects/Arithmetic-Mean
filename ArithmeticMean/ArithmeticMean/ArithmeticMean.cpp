#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "ArithmeticMean.h"
#include <stdio.h>

using namespace std;

int StuNum = 0, arr[150];
float armean = 0, sum = 0;

int main()
{
	StudentNumber();
	EnteringStudentsGrades();
	CalculatedAndPrinted();
}

void CalculatedAndPrinted()
{
	armean = sum / StuNum;
	cout << "Your students' grade's arithmetic mean is = " << armean << endl;
	system("PAUSE");
}

void EnteringStudentsGrades()
{
	cout << "Please enter students' grades." << endl;
	for (int i = 0; i < StuNum; i++)
	{
		cin >> arr[i];
		while ((arr[i] > 100) || (arr[i] < 0))
		{
			cout << "Please enter an acceptable value." << endl;
			cin >> arr[i];
		}		
			sum = sum + arr[i];
	}
}

void StudentNumber()
{
	cout << "Welcome to arithmetic mean calculator program." << endl;
	cout << "Please enter how much students are in the class." << endl << endl;
	cin >> StuNum;
	Sleep(2000);
	system("CLS");
}
