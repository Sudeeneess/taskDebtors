#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    string surname;
    int period;
    int skips;   
};

float countAverage(Student student) {
    int attendance = student.period - student.skips;
    float score = attendance * 5 + student.skips * 2;
    return score / student.period;
}

int main() {
    Student student;

    cout << "Enter first name: \n";
    cin >> student.name;
    cout << "Enter last name: \n";
    cin >> student.surname;
    cout << "Enter the number of classes: \n";
    cin >> student.period;
    cout << "Enter the number of passes: \n";
    cin >> student.skips;

    float averageScore = countAverage(student);

    cout << "Student GPA " << student.name << " " << student.surname << " is: " << averageScore << endl;
}