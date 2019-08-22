#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"
using namespace std;

/*
Create each of the following functions in the Student class :
	a.an accessor(i.e., getter) for each  instance variable from part D1
	b.a mutator(i.e., setter) for each instance variable from part D1
	Note : All accessand changes to the instance variables of the Student class should be done through the accessorand mutator functions.
	c.constructor using all  of the input parameters provided in the table
	d.  virtual print() to print specific student data
	e.destructor
	f.  virtual getDegreeProgram()
	Note: Leave the implementation of the getDegreeProgram() function empty.
	*/

//Mutators
void Student::SetStudentId(string studentId) {
	this->studentId = studentId;
	return;
}
void Student::SetFirstName(string firstName) {
	this->firstName = firstName;
	return;
}
void Student::SetLastName(string lastName) {
	this->lastName = lastName;
	return;
}
void Student::SetEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
	return;
}
void Student::SetAge(int age) {
	this->age = age;
	return;
}
void Student::SetNumDaysToCompleteEachCourse(int course[]) {
	for (i = 0; i < numDaysArraySize; i++ ) {
		this->numDaysToCompleteEachCourse[i] = course[i];
	}
	return;
}
void Student::SetDegreeType(Degree degreeType) {
	this->degreeType = degreeType;
	return;
}

//Accessors
string Student::GetStudentId() {
	return studentId;
}
string Student::GetFirstName() {
	return firstName;
}
string Student::GetLastName() {
	return lastName;
}
string Student::GetEmailAddress() {
	return emailAddress;
}
int Student::GetAge() {
	return age;
}
int* Student::GetNumDaysToCompleteEachCourse() {
	return numDaysToCompleteEachCourse;
}
Degree Student::GetDegreeType() {
	return degreeType;
}

//Constructors and Destructor
Student::Student()
{
	this->studentId = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < numDaysArraySize; i++) this->numDaysToCompleteEachCourse[i] = 0;
}
Student::Student(string studentId, string firstName, string lastName, string emailAddress, int age, int course[])
{
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < numDaysArraySize; i++) this->numDaysToCompleteEachCourse[i] = course[i];
}

Student::~Student()
{
}

//Virtual
void Student::Print() {
	cout << left << setw(5) << studentId;
	cout << left << setw(20) << firstName;
	cout << left << setw(20) << lastName;
	cout << left << setw(40) << emailAddress;
	cout << left << setw(2) << age;
	cout << left << setw(5) << numDaysToCompleteEachCourse[0];
	cout << left << setw(5) << numDaysToCompleteEachCourse[1];
	cout << left << setw(5) << numDaysToCompleteEachCourse[2];
}