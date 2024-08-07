#include <iostream>
using namespace std;

int main() {
	
	int i,n;
	float terkecil,terbesar,bil;

	cout << "Masukan Jumlah Bilangan : ";
	cin >> n;

	for (i=1;i<=n;i++){
	     cout << "Masukan Bilangan Ke-" << i << " : ";
	     cin >> bil;
	     
	     if (i==1){
	     	terkecil=bil;
	     	terbesar=bil;
		 }
		 else if (bil < terkecil){
		 	terkecil=bil;
		 }
		 else if (bil > terbesar){
		 	terbesar=bil;
		 }
	}
	cout << "Nilai Terkecil adalah : " << terkecil << endl;
	cout << "Nilai Terbesar adalah : " << terbesar << endl;

return 0;	
}