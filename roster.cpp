#include <iostream>
#include "roster.h"
using namespace std;
/*
Create a Roster class (roster.cpp) by doing the following :
1.  Create an array of pointers, classRosterArray, to hold the data provided in the studentData table.
2.  Create a student object for each  student in the data table by using the subclasses NetworkStudent, SecurityStudent, and SoftwareStudent, and populate classRosterArray.
	a.Apply pointer operations when parsing each  set of data identified in the studentData table.
	b.Add each student object to classRosterArray.
3.  Define the following functions :
	a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, < degree program >) that sets the instance variables from part D1 and updates the roster.
	b.  public void remove(string studentID) that removes students from the roster by student ID.If the student ID does not exist, the function prints an error message indicating that the student was not found.
	c.  public void printAll() that prints a complete tab - separated list of student data using accessor functions with the provided format : 1[tab] First Name : John[tab] Last Name : Smith[tab] Age : 20[tab]daysInCourse : {35, 40, 55} Degree Program : Security.The printAll() function should loop through all  the students in classRosterArrayand call the print() function for each student.
	d.  public void printDaysInCourse(string studentID) that correctly prints a student’s average number of days in the three courses.The student is identified by the studentID parameter.
	e.  public void printInvalidEmails() that verifies student email addressesand displays all invalid email addresses to the user
Note : A valid email should include an at sign('@') and period('.') and should not include a space(' ').
	f.  public void printByDegreeProgram(int degreeProgram) that prints out student information for a degree program specified by an enumerated type
*/

//constructors
Roster::Roster() {
	this->capacity = 0;
	this->lastIndex = -1;
	this->classRosterArray = nullptr;
}
Roster::Roster(int capacity) {
	this->capacity = capacity;
	this->lastIndex = -1;
	this->classRosterArray = new Student * [capacity];
}


/*

*/

int main() {
	int numStudents = 5;

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Devren,Freestone,dfreest@wgu.edu,32,14,21,28,SOFTWARE" };


}
