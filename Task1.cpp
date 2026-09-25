#include <iostream>
#include <string>
#include "Struct.h"
using namespace std;

void task1()
{

	Student s1;
	cout << "Enter the roll number" << endl;
	cin >> s1.roll_no;
	cin.ignore();
	cout << "Enter the full name" << endl;
	getline(cin, s1.full_name);
	cout << "Enter the marks" << endl;
	cin >> s1.marks;

	s1.display_Details(s1.roll_no, s1.full_name, s1.marks);
}