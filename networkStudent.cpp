#include <iostream>
#include <string>
#include "networkStudent.h"
#include "student.h"
using namespace std;


NetworkStudent::NetworkStudent():Student()
{
	degreeType = NETWORK;
}
NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, int age, int course[], Degree degreeType) 
	: Student(studentId, firstName, lastName, emailAddress, age, course)
{
	degreeType = NETWORK;
}
NetworkStudent::~NetworkStudent()
{
	Student::~Student();
}
Degree NetworkStudent::GetDegreeType() {
	return NETWORK;
}
void NetworkStudent::Print() {
	this->Student::Print();
	cout << "NETWORKING" << endl;
}