// Week 2 - Task 2: Admission Decision (Nested if)
// A student is admitted only if they are 18 or older AND score 50 or above.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age;
    double examScore;

    // Prompt the user for details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    cout << "\n===== ADMISSION DECISION =====" << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Age          : " << age << endl;
    cout << "Exam Score   : " << examScore << endl;

    // Nested if: check age first, then score
    if (age >= 18) {
        if (examScore >= 50) {
            cout << "Decision     : Admitted" << endl;
        } else {
            cout << "Decision     : Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Decision     : Not Admitted: Underage" << endl;
    }
    cout << "==============================" << endl;

    return 0;
}
