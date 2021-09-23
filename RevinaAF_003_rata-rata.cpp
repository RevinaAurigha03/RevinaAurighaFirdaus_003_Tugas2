/* Revina Aurigha Firdaus_003 */

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

	int main(){
		float nilai_praktikum, nilai_teori, nilai_tugas, nilai_final_project;
		cout << "Menghitung Nilai Rata-Rata Mata Kuliah"<<endl;
		cout << "\n";
		
		cout << "Masukkan nilai praktikum : ";
		cin >> nilai_praktikum;
		cout << "Masukkan nilai teori : ";
		cin >> nilai_teori;
		cout << "Masukkan nilai tugas : ";
		cin >> nilai_tugas;
		cout << "Masukkan nilai final project : ";
		cin >> nilai_final_project;
		
		cout << " Rata_rata = " <<(nilai_praktikum*0.4)+(nilai_teori*0.4)+(nilai_tugas*0.1)+(nilai_final_project*0.1)/4.0<<endl;
		
		return 0;
	}


