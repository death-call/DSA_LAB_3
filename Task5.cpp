#include <iostream>
#include <string>
#include "Struct.h"
using namespace std;

void displayIfExists(const Student* s);
void task5(void)
{

	Student* p = nullptr;

	//Call it before allocation
	cout << "\nBefore Allocation: " << endl;
	displayIfExists(p);

	p = new Student;
	cout << "Enter the roll number" << endl;
	cin >> p->roll_no;
	cin.ignore();
	cout << "Enter the full name" << endl;
	getline(cin, p->full_name);
	cout << "Enter the marks" << endl;
	cin >> p->marks;

	//After allocating and entering a record
	cout << "\nAfter Allocation: " << endl;

	displayIfExists(p);

	delete p;
	p = nullptr;
	//After deleting the record and resetting the pointer to nullptr.
	cout << "\nAfter deletion: " << endl;
	displayIfExists(p);
}
void displayIfExists(const Student* s) {
	if (s == nullptr)
		cout << "Record not available" << endl;
	else
	{
		cout << "-------------------------------------" << endl;
		cout << "Roll Number: " << s->roll_no << endl;
		cout << "Full Name: " << s->full_name << endl;
		cout << "Marks: " << s->marks << endl;
	}
}