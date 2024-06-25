#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    int id;
    int semester;
    string subjects[10];
    float marks[10];
    float cgpa;
};


float marksToGradePoint(float marks) {
    if (marks >= 90)
        return 4.0;
    else if (marks >= 80)
        return 3.0;
    else if (marks >= 70)
        return 2.0;
    else if (marks >= 60)
        return 1.0;
    else
        return 0.0;
}

float calculateCGPA(float marks[], int numSubjects) {
    float totalCredits = 0.0;
    float totalGradePoints = 0.0;

    for (int i = 0; i < numSubjects; i++) {
        float gradePoint = marksToGradePoint(marks[i]);
        totalGradePoints += gradePoint;

        totalCredits += 1.0;
    }

    return totalGradePoints / totalCredits;
}

void inputStudentDetails(student &s, int numSubjects) {
    cout << "Name: ";
    cin >> s.name;
    cout << "ID: ";
    cin >> s.id;
    cout << "Semester: ";
    cin >> s.semester;

    for (int j = 0; j < numSubjects; j++) {
        cout << "Enter subject " << j + 1 << " name: ";
        cin >> s.subjects[j];
        cout << "Enter marks for " << s.subjects[j] << ": ";
        cin >> s.marks[j];
    }

    s.cgpa = calculateCGPA(s.marks, numSubjects);
}

void printStudentDetails( student &s, int numSubjects) {
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Semester: " << s.semester << endl;
    for (int j = 0; j < numSubjects; j++) {
        cout << "Subject " << j + 1 << ": " << s.subjects[j] << endl;
        cout << "Marks: " << s.marks[j] << "\n";
    }
    cout << "CGPA: " << s.cgpa << endl;
    cout << "\n";
}

int main() {
    int n, numSubjects;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter number of subjects : ";
    cin >> numSubjects;

    if (numSubjects > 10) {
        cout << "Number of subjects should not exceed 10" << endl;
        return 1;
    }

    student s[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        inputStudentDetails(s[i], numSubjects);
    }

    cout << "\nEntered student details:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " details:\n";
        printStudentDetails(s[i], numSubjects);
    }

    return 0;
}

