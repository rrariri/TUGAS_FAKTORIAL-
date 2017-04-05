#include <iostream>
using namespace std; 

//prototype 
int faktorial (int x);


//program utama 
int main () {
	cout << " Hasil : " << faktorial (5) << endl;
	return 0; 
}

int faktorial (int x) {
	return x*(x-1)*(x-2)*(x-3)*(x-4);  
}
