/* Revina Aurigha Firdaus_003 */

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

	int main(){
		float alas, tinggi, sisi_miring;
		cout << "Menghitung sisi miring segitiga siku-siku"<<endl;
		cout << "\n";
		
		cout << "Masukkan alas segitiga siku-siku : ";
		cin >> alas;
		cout << "Masukkan tinggi segitiga siku-siku : ";
		cin >> tinggi;
		cout << " Sisi miring = " <<(alas*alas)+(tinggi*tinggi)<<endl;
		cout << "\n";
		
		cout << "=================================================";
		cout << "\n";
		cout << "Menghitung keliling segitiga siku-siku"<<endl;
		cout << "\n";
		cout << "Masukkan alas segitiga siku-siku : ";
		cin >> alas;
		cout << "Masukkan tinggi segitiga siku-siku : ";
		cin >> tinggi;
		cout << "Masukkan sisi miring: ";
		cin >> sisi_miring;
		cout << " Keliling = " <<(alas+tinggi+sisi_miring)<<endl;
		
		getch();
		return 0;
	}

