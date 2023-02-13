#include <iostream>

using namespace std;

int main() 
{
	string nama = " Akmal Fauzan ";
	cout << nama << " letak alamat " << &nama <<endl; 
	
	string *ptrNama;
	ptrNama = &nama;
	
	cout << " isi variabel nama : " << nama <<endl;   
	cout << " letak alamat : " << ptrNama <<endl; 
	
	*ptrNama = "Restu Agung";
	cout << " isi variabel nama yg di ganti : " << *ptrNama <<endl;
	cout << " letak variabel nama yg di ganti : " << ptrNama <<endl;
}

