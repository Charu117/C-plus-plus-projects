#include <iostream>
#include "Student.h"
#include <vector>

using namespace std;

int main() {
    vector<Student> students;

    students.push_back(Student(1, "Upeka", "Gona", 44, "3Inf"));
    students.push_back(Student(2, "Upeka", "Gona", 44, "3Inf"));
    students.push_back(Student(3, "Upeka", "Gona", 44, "3Inf"));
    students.push_back(Student(4, "Upeka", "Gona", 44, "3Inf"));
    students.push_back(Student(5, "Upeka", "Gona", 44, "3Inf"));

    for (int i = 0; i < students.size(); ++i) {
        cout << students[i] << endl;
    }

    for (auto i = students.begin(); i != students.end(); i++) {
        cout << i->getAge();
    }

    return 0;
}
