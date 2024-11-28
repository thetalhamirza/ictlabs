#include <iostream>
#include <string.h>
using namespace std;

class Person	{
	public:
		string name;
		int age;
		string address;

		int displayDetails()	{
			cout	<<	"Name: "	<<	name	<<	endl;
			cout	<<	"Age: "	<<	age	<<	endl;
			cout	<<	"Address: "	<<	address	<<	endl;
			return 0;
		}
};

class Student	:	public Person	{
	public:
		string StudentID;
		string grades;

		int calculateGPA()	{
			switch (grades)	{
				case "A+":
					cout << "GPA: 4" << endl;
				case "A":
					cout << "GPA: 3.5" << endl;
				case "B":
					cout << "GPA: 3" << endl;
				case "C":
					cout << "GPA: 2.5" << endl;
				case "D":
					cout << "GPA: 2" << endl;
				case "F":
					cout << "GPA: 1.5" << endl;
			}
		
			return 0;
		}
};


class Teacher	:	public Person	{
	public:
		string TeacherID;
		string subject;
		
		int assignGrade(Student, grades)	{
			Student.grades = grades;
		}
};


int main()	{
	
	Teacher David;
	Student Affan;
	Student Omar;
	
	assignGrade(Affan, C)
	
	
	
	
	return 0;
}
