#include <iostream>
#include <string>
#include "Struct.h"
using namespace std;

void task2(void)
{
	Student s1;
	Student* p = &s1;
	cout << "Enter the roll number" << endl;
	cin >> p->roll_no;
	cin.ignore();
	cout << "Enter the full name" << endl;
	getline(cin, p->full_name);
	cout << "Enter the marks" << endl;
	cin >> p->marks;

	s1.display_Details(p->roll_no, p->full_name, p->marks);

	cout << "\nEnter the updated marks" << endl;
	cin >> p->marks;

	cout << "\nAfter updation:" << endl;
	p->display_Details(p->roll_no, p->full_name, p->marks);
}