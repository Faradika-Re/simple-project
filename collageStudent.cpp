// 100 - 80 = A
// 79 - 60 = B
// 59 - 40 = C
// 39 - 20 = D
// 19 - 0 = E

#include <iostream>
#include <cctype>
using namespace std;

// buat program menghitung IP dan predikat mahasiswa
int main () {
    int totalStudent, totalMk;
    cout << "Ada berapa mahasiswa yang ada terdaftar di Fasilkom: ";
    cin >> totalStudent;
    cout << "Ada berapa total mata kuliah pada setiap mahasiswa: ";
    cin >> totalMk;

    string student[totalStudent];
    string studentMk[totalMk];

    // Catat kerjain bre!
    // Usahain tanpa AI GBLK
    for (int i = 1; i <= totalStudent; i++) {
        string studentName;
        cout << "Masukkan nama mahasiswa Fasilkom: ";
        // function append itu menambah string
        cin >> student[i-1].append(studentName);
        cout << '\t' << student[i-1] << endl;

        // Nama matkul dan sebutin nilainya 
        for (int j = 1; j <= totalMk; j++) {
            float ipkList[totalMk];

            // Napa ga ipk kau jadiin array aja?
            string collSubjectName;
            cout << '\t' << "Masukkan mata kuliah (Usahakan jangan menggunakan spasi): ";
            // Pertanyaan bagus
            // Gimana caranya agar input masih bisa memakai spasi?
            cin >> studentMk[j-1].append(collSubjectName);
            cout << '\t' << " - " << studentMk[j-1] << ": " << endl;
            cout << '\t' << "Masukkan nilai: ";
            cin >> ipkList[j-1];

            if (j == totalMk) {
                float mean = 0;
                for (int k = 1; k <= totalMk; k++) {
                    mean += ipkList[k-1];
                }
                mean /= totalMk;
                cout << '\t' << "IP rerata minggu ini ialah: " << mean << endl;
                cout << '\t' << "Predikat ";

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