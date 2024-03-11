#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> danaMap = {
        {"Bayi", 1000000},
        {"Batita", 1000000},
        {"Balita", 1000000},
        {"Anak-Anak", 1000000},
        {"Remaja", 1500000},
        {"Pemuda", 1500000},
        {"Dewasa", 1500000},
        {"Lansia", 2000000}
    };

    string nama;
    int umur;

    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan umur: ";
    cin >> umur;

    string kategori;
    int danaDiterima = 0;

    if (umur >= 0 && umur <= 1) {
        kategori = "Bayi";
    } else if (umur > 1 && umur <= 3) {
        kategori = "Batita";
    } else if (umur > 3 && umur <= 5) {
        kategori = "Balita";
    } else if (umur > 5 && umur <= 12) {
        kategori = "Anak-Anak";
    } else if (umur > 12 && umur <= 17) {
        kategori = "Remaja";
    } else if (umur > 17 && umur <= 30) {
        kategori = "Pemuda";
    } else if (umur > 30 && umur <= 60) {
        kategori = "Dewasa";
    } else {
        kategori = "Lansia";
    }

    danaDiterima = danaMap[kategori];

    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;
    cout << "Kategori: " << kategori << endl;
    cout << "Dana yang diterima: " << danaDiterima << endl;

    return 0;
}
