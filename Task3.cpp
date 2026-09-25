#include <iostream>
#include <string>
#include "Struct.h"
using namespace std;

void task3(void)
{
	Student* ptr = new Student;
	cout << "Enter the roll number" << endl;
	cin >> ptr->roll_no;
	cin.ignore();
	cout << "Enter the full name" << endl;
	getline(cin, ptr->full_name);
	cout << "Enter the marks" << endl;
	cin >> ptr->marks;

	ptr->display_Details(ptr->roll_no, ptr->full_name, ptr->marks);

	delete ptr;
	ptr = nullptr;

}