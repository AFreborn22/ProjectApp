#include <iostream> // library dingunakan untuk memanggil perintah input output using namespace std
#include <conio.h> //  library dingunakan untuk memanggil fungsi getch
#include <windows.h> // Library Dingunakan untuk memanggil perintah system cls dan pause
#define MAX 30 // deklarasi maksimal antrian adalah 30
using namespace std;

struct Antrian{ // deklarasi program antrian
	int depan;
	int belakang;
	int data[MAX];
}Bank; // mendeklarasikan setiap variabel yang dibuat harus di awali dengan bank

int penuh(){ // untuk memeriksa antrian penuh
	return Bank.belakang==MAX;
}

int kosong() { // untuk memeriksa antrian kosong
	return Bank.belakang==-1;
	cout << "\n\t Antrian Beres";
}

void reset(){
	Bank.depan=Bank.belakang=-1;
	cout << "\n\t Antrian Clear";
}
 
void Tampil(){ // variabel menampilkan antrian & memeriksa antrian kosong atau tidak
	if(kosong()){
		cout << "\n\t Antrian Kosong";
	}else{
		cout << "\n\t Daftar Antrian : \n";
		for(int i=Bank.depan;i < Bank.belakang;i++)
			cout << "\t|" << Bank.data[i]<<"|\n";
	}
}

void enqueue() { // variabel memasukan daftar antrian dengan memeriksa antrian penuh atau tidak
	if (penuh()){
		cout << "\t Antrian penuh ! "<<endl;
	}
	else{
		cout << "\n\t Masukan nomr antrian : "; cin>>Bank.data[Bank.belakang];
		cout << "\n\t Kode antrian "<<Bank.data[Bank.belakang]<<" Masuk ke antrian ";
		Bank.belakang++;
	}
}

void dequeue() { // variabel memasukan daftar antrian dengan memeriksa antrian kosong atau tidak
	if(kosong()){
		cout << "\t Antrian masih kosong "<<endl;
	}else{
		cout<<"\n\t Antrian Nomor "<<Bank.data[Bank.depan]<<" Silahkan Masuk ";
		for(int i=Bank.depan;i<Bank.belakang;i++)
			Bank.data[1]=Bank.data[i + 1];
		Bank.belakang--;
	}
}
 
void login(){ // login untuk menu teller dengan memasukan username dan password
	string name,password;
	system("cls");
	cout << "\t====== SELAMAT DATANG DI BANK ======\n";
	cout << "\n\t Masukan username dan password ";
	cout << "\n\t Username : ";
	cin >> name;
	cout << "\t Password : ";
	cin >> password;
	
	if (name == "Akmal"){
		if (password == "223355"){
		cout << "\n\t ====== LOGIN BERHASIL ======";
		cout << "\n\n\t anda login sebagai : "<<name;
		}else
		cout << "\n\t Password anda salah ! "<<endl;
	}else if (password == "223355"){
		cout << "n\t Username anda salah ! "<<endl;
	}else{
		cout << "\n\t USERNAME DAN PASSWORD ANDA SALAH ! "<<endl;
	}
	getch();  // fungsi untuk menahan proses yang sedang berjalan
	
}

void nasabah(){ // untuk menu nasabah dengan 3 pilihan menu
	int pilih;
	do{
		system("cls");
		cout << "\t +------------------------------+ \n";
		cout << "\t |         MENU NASABAH         | \n";
		cout << "\t +------------------------------+ \n";
		cout << "\t | 1. Memasukan data antrian    | \n";
		cout << "\t | 2. Daftar antrian            | \n";
		cout << "\t | 3. Keluar                    | \n";
		cout << "\t +------------------------------+ \n";
		cout << "\t pilihan : ";
		cin >> pilih;
		switch (pilih) {
			case 1 :
				enqueue();
				break;
			case 2 :
				Tampil();
				break;
			case 3 :
				cout << "\n\t TERIMA KASIH ";
				break;
		}getch();  // fungsi untuk menahan proses yang sedang berjalan
	}while(pilih!=3); // jika tidak sesuai dengan 3 output di atas maka akan kembali ke do
}

void teller() { // untuk menu nasabah dengan 4 pilihan menu
	int pil;
	login();
	do{
		system("cls"); // digunakan untuk membersihkan outputan sebelumnya dan di ganti dengan yang baru
		cout << "\t +------------------------------+ \n";
		cout << "\t |         MENU TELLER          | \n";
		cout << "\t +------------------------------+ \n";
		cout << "\t | 1. Memanggil Antrian         | \n";
		cout << "\t | 2. Melihat Data Antrian      | \n";
		cout << "\t | 3. Mereset Antrian           | \n";
		cout << "\t | 4. Keluar                    | \n";
		cout << "\t +------------------------------+ \n";
		cout << "\t pilihan : ";
		cin >> pil;
		switch(pil){
			case 1 :
				dequeue();
				break;
			case 2 :
				Tampil();
				break;
			case 3 :
				reset();
				break;
			case 4 :
				cout << "\n\t TERIMA KASIH ";
		}getch(); // fungsi untuk menahan proses yang sedang berjalan
	}while(pil!=4); // jika tidak sesuai dengan 4 output di atas maka akan kembali ke do
}

int main(){ //fungsi utama program / menu utama program
	int menu;
	do{
		system("cls"); // digunakan untuk membersihkan outputan sebelumnya dan di ganti dengan yang baru
		cout << "\t +------------------------------+ \n";
		cout << "\t |         Bank Amikom          | \n";
		cout << "\t |     Jl. Ring Road Utara      | \n";
		cout << "\t |         Yogyakarta           | \n";
		cout << "\t +------------------------------+ \n";
		cout << "\t | 1. Nasabah                   | \n";
		cout << "\t | 2. Teller                    | \n";
		cout << "\t | 3. keluar Program            | \n";
		cout << "\t +------------------------------+ \n";
		cout << "\t pilihan : ";
		cin >> menu;
		switch(menu){
			case 1 :
				nasabah();
				break;
			case 2 :
				teller();
				break;
			case 3 :
				system("cls");
				cout << "\n\t TERIMA KASIH ";
		}
	}while(menu!=3); // jika tidak sesuai dengan 3 output di atas maka akan kembali ke do
}