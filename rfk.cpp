#include <iostream>
using namespace std;

int main() {
    int nilai_ujian = 85;

    switch (nilai_ujian / 10) {
        case 10:
        case 9:
            cout << "Nilai A";
            break;

        case 8:
            cout << "Nilai B";
            break;

        case 7:
            cout << "Nilai C";
            break;

        default:
            cout << "Nilai D";
    }

    return 0;
}
