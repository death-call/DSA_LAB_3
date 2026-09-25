#pragma once
#pragma once
#include <iostream>
using namespace std;

struct Student {
	int roll_no;
	string full_name;
	float marks;

	void display_Details(int roll_no, string full_name, float marks) {
		cout << "-------------------------------------" << endl;
		cout << "Roll Number: " << roll_no << endl;
		cout << "Full Name: " << full_name << endl;
		cout << "Marks: " << marks << endl;
	}
};
