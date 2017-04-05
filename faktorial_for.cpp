#include <iostream>
using namespace std; 

//prototype 
int faktorial (int x);

//variabel global 
	int nil, x; 
	int hasil; 
	
//program utama 
int main () {
	cout << " ====== NILAI FAKTORIAL ====== " << endl << endl;
	cout << " Masukan Nilai Anda : "; 
	cin >> x; 
	cout << " ----------------------------- " << endl; 
	cout << "" << faktorial (x) << endl;
	return 0; 
}

int faktorial (int x) {
	int hasil=1;
		for (int nil=x;nil!=0;nil--)
		{
		hasil = hasil*nil;	
		cout << nil;
			if (nil!=1)
				cout << "*";
			else 
				cout << " = ";
		}
		return hasil; 
}
