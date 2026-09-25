#include "Struct.h"
#include <iostream>
#include <string>
using namespace std;

void createrecord(Student* &s);
void deleterecord(Student*& s);
void updateMarks(Student* s, float newMarks);
void displayIfExists(const Student* s);

void task6(void)
{
	float newMarks;
	Student* p = nullptr;
	int option;
	do {
		cout << "\nMAIN MENU" << endl;
		cout << "1.create a record\n2.Display record\n3.Update marks\n4.Delete it\n5.Exit." << endl;
		cout << "\nEnter an option" << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			createrecord(p);
			break;
		case 2:
			displayIfExists(p);
			break;
		case 3:
			cout << "\nEnter the updated marks" << endl;
			cin >> newMarks;
			updateMarks(p, newMarks);
			break;
		case 4:
			deleterecord(p);
			break;
		case 5:
			if (p != nullptr)
			{
				delete p;
				p = nullptr;
			}
			cout << "Exiting the program..." << endl;
		}
	} while (option != 5);

}
void deleterecord(Student*& p)
{
	if (p == nullptr) {
		cout << "Error: No record exists" << endl;
		return;
	}

	delete p;
	p = nullptr;
	cout << "Record deleted successfully!" << endl;
}
void createrecord(Student*& s)
{
	if (s == nullptr)
	{
		s = new Student;
		cout << "Enter the roll number" << endl;
		cin >> s->roll_no;
		cin.ignore();
		cout << "Enter the full name" << endl;
		getline(cin, s->full_name);
		cout << "Enter the marks" << endl;
		cin >> s->marks;
	}
	else
		cout << "Record already exists" << endl;
}


