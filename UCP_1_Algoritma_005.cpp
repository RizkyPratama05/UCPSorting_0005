#include <iostream>
using namespace std;

int sipeps[5];           
int n;                 

void input() {         
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";   
		cin >> n; 
		if (n <= 5) 
			break;
		else {    
			cout << "\narray dapat mempunyai maksimal 5 elemen.\n";
		}
	}
	cout << endl;                          
	cout << "===========" << endl; 
	cout << "masukan elemen array" << endl;
	cout << "===========" << endl; 

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> sipeps[i];
	}
}void selectionshortarray() { 
	int pass = 1; 
	do {
		for (int j = 0; j <= n - 1 - pass; j++) { 
			if (sipeps[j] > sipeps[j + 1]) {            
				int temp = sipeps[j];
				sipeps[j] = sipeps[j + 1];
				sipeps[j + 1] = temp;
			}
		}
		pass = pass + 1;      

		cout << "\npass " << pass - 1 << ": "; 
		for (int k = 0; k < n; k++) {        
			cout << sipeps[k] << " ";           

		}
		cout << endl;
	} while (pass <= n - 1);   
}
void display() {
	cout << endl;
	cout << "=========" << endl;
	cout << "element array yang telah tersusun" << endl;
	cout << "=========" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << sipeps[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}
int main() {
	input(); 
	selectionshortarray(); 
	display(); 
	system("pause");

	return 0;
}

// jawaban no 1 = algoritma bubbleshort menggunakan metode membandingkan dan menukar elemen dari yang terkecil ke yang palinhg besar,
// metode ini dilakukan dengan cara  membandingkan elemen pada index 0 dan index 1 dan menentukan mana yang paling kecil dari kedua elemen tersebut,
// lalu elemen yang paling kecil tersebut di pindahkan ke index 0 dan begitu seterusnya

// jawaban no 2 = algoritma shell short menggunakan metode membandingkan dan menukar elemen dengan cara memisahkan elemen elemen dengan jarak tertentu 
// dan di kelompokan lalu dibandingan dan ditukar mulai dari elemen yang paling kecil ke yang paling besar

// jawaban no 3 = selanjutnya mencari data yang belum di urutkan lalu memulai lagi cara yang sebelumnya di gunakan untuk menburutkan data tersebut, 
// karena jika masih ada data yang belum berurutan maka program tidak akan berjalan dengan lancar atau bisa error






