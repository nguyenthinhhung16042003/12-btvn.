// 12 BTVN getter setters and manager.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	// Private attribute
	int salary;

public:
	// Setter
	void setSalary(int s) {
		salary = s;
	}
	// Getter
	int getSalary() {
		return salary;
	}
};

int maid() {
	Employee my0bj;
	my0bj.setSalary(5000);
	cout << my0bj.getSalary();
	return 0;
}
