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

string statusBMI (float bmi)
{

    if (bmi < 18.5)
        return "Berat badan kurang";
    else if (bmi < 25)
        return "Berat badan normal";
    else if (bmi < 30)
        return "Berat badan kelebihan";
    else 
        return "Obesitas";
        
}

int main()
{//mulaiinputdata
    inputData();

    float bmi = hitungBMI (berat, tinggi);
    cout << "--- Hasil --- ";