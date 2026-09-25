#include <iostream>
#include <string>
#include "Struct.h"
using namespace std;

void displayStudent(const Student* s);
void updateMarks(Student* s, float newMarks);

void task4(void)
{
	Student* ptr = new Student;
	cout << "Enter the roll number" << endl;
	cin >> ptr->roll_no;
	cin.ignore();
	cout << "Enter the full name" << endl;
	getline(cin, ptr->full_name);
	cout << "Enter the marks" << endl;
	cin >> ptr->marks;

	displayStudent(ptr);

	float newMarks;
	cout << "\Enter the updated marks" << endl;
	cin >> newMarks;

	updateMarks(ptr, newMarks);

	displayStudent(ptr);

	delete ptr;
	ptr = nullptr;
}
void displayStudent(const Student* s)
{
	cout << "-------------------------------------" << endl;
	cout << "Roll Number: " << s->roll_no << endl;
	cout << "Full Name: " << s->full_name << endl;
	cout << "Marks: " << s->marks << endl;
}
void updateMarks(Student* s, float newMarks)
{
	if (s != nullptr)
		s->marks = newMarks;
	else
		cout << "No record exists" << endl;
}
