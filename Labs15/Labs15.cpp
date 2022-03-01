#include <iostream>
#include <string>
#include <map>
using namespace std;

struct StudentGrade
{
	string name;
	char score;
};

int main()
{
	StudentGrade student;
	map<string, char> studentsMap;
	map<string, char>::iterator it;

	int n;
	cout << "Enter the number of students in the group: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the name of the student: ";
		cin >> student.name;
		student.score = 0;
		studentsMap.insert(make_pair(student.name, student.score));
	}

	string searchName;
	char input;
	do
	{
		cout << "Enter the name of the student to be graded: ";
		cin >> searchName;

		it = studentsMap.find(searchName);
		if (it == studentsMap.end()) {
			cout << "This student does not exist" << endl;
		}
		else
		{
			char grade;
			cout << "Enter score: ";
			cin >> grade;
			it->second = grade;
		}

		cout << endl;
		cout << "Continue? (y / n) ";
		cin >> input;
		if (input == 'y')
			continue;
	} while (input != 'n');

	it = studentsMap.begin();
	for (int i = 0; it != studentsMap.end(); it++, i++) {
		cout << "Name: " << it->first << ", grade:" << it->second << endl;
	}
}