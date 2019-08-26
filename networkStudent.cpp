#include <iostream>
#include <string>
#include <iomanip>
#include "networkStudent.h"
#include "student.h"
using namespace std;


NetworkStudent::NetworkStudent():Student()
{
	degreeType = NETWORK;
}
NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree d) 
	: Student(studentId, firstName, lastName, emailAddress, age, course)
{
	degreeType = NETWORK;
}
NetworkStudent::~NetworkStudent()
{
	Student::~Student();
}
Degree NetworkStudent::GetDegreeType() {
	string degreeTypeString;
	degreeTypeString = degreeTypeStrings[degreeType];
	//cout << degreeTypeString;
	return degreeType;
}
void NetworkStudent::Print() {
	cout << GetStudentId() << '\t';
	cout << "First Name: " << GetFirstName() << '\t';
	cout << "Last Name: " << GetLastName() << '\t';
	cout << "Email Address: " << GetEmailAddress() << '\t';
	cout << "Age: " << GetAge() << '\t';
	cout << GetNumDaysToCompleteEachCourse()[0] << '\t';
	cout << GetNumDaysToCompleteEachCourse()[1] << '\t';
	cout << GetNumDaysToCompleteEachCourse()[2] << '\t';
	cout << "Degree Program: " << degreeTypeStrings[GetDegreeType()] << endl;
}