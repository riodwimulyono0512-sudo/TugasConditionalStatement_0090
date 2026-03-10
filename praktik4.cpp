#include <iostream>
using namespace std;

float berat,tinggi;

void inputData()
{//startinputdata
    cout << "--- Selamat Datang Mahasiswa Kelas B 2025 --- " << endl;

    cout << "Masukkan Berat Badan (kg): ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >> tinggi;

}//selesaiinputdata

float hitungBMI (float a, float b)
{

     return a / (b * b);

}