#include <iostream>
using namespace std;

int main()
{
    //deklarasi variabel untuk menyimpan nilai
	int a;
	cout<< "Masukkan tahun : ";
	cin>>a;

	/*percabangan if untuk menentukan tahun kabisat. 
	tahun kabisat adalah tahun yang habis dibagi 4 dan habis dibagi 400*/
	
	if(a%400==0 || a%4==0 && a%100!=0){
		cout<< "Tahun "<<a<<" adalah Tahun Kabisat";
	}
	else{
		cout<<endl;
		cout<<a<<" Bukan Tahun Kabisat";
	}
	
	return 0;
	}
