// 100 - 80 = A
// 79 - 60 = B
// 59 - 40 = C
// 39 - 20 = D
// 19 - 0 = E

#include <iostream>
#include <cctype>
using namespace std;

// Make a program count GPA and Predicate of Collage Student
int main () {
    int totalStudent, totalMk;
    cout << "How many are student at your faculty: ";
    cin >> totalStudent;
    cout << "How many are subjects at every student: ";
    cin >> totalMk;

    string student[totalStudent];
    string studentMk[totalMk];

    for (int i = 1; i <= totalStudent; i++) {
        string studentName;
        cout << "Input the student name: ";
        cin >> student[i-1].append(studentName);
        cout << '\t' << student[i-1] << endl;

        // Subject name and rate it
        for (int j = 1; j <= totalMk; j++) {
            float ipkList[totalMk];
            string collSubjectName;
            cout << '\t' << "Input a subject name (Don't use space): ";
            cin >> studentMk[j-1].append(collSubjectName);
            cout << '\t' << " - " << studentMk[j-1] << ": " << endl;
            cout << '\t' << "Input the subject name: ";
            cin >> ipkList[j-1];

            if (j == totalMk) {
                float mean = 0;
                for (int k = 1; k <= totalMk; k++) {
                    mean += ipkList[k-1];
                }
                mean /= totalMk;
                cout << '\t' << "Rate of weekly student GPA: " << mean << endl;
                cout << '\t' << "Predicate ";

                // Pake if, kalo mau membaca rentang nilai
                if (mean <= 100 && mean >= 80) {
                    cout << "A";
                }
                else if (mean < 80 && mean >= 60) {
                    cout << "B";
                }
                else if (mean < 60 && mean >= 40) {
                    cout << "C";
                }
                else if (mean < 40 && mean >= 20) {
                    cout << "D";
                }
                else if (mean < 20 && mean >= 0) {
                    cout << "E";
                }
                else {
                    cout << "Invalid";
                }
            }
        }
    }

}
