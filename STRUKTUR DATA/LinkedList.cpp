#include <iostream>

using namespace std;

//deklarasi single Linkedlist
struct Mahasiswa
{
    //deklarasai komponen / member
    string nim,nama;
    int umur;

    Mahasiswa * next;
};

int main(){
    //inisialisasi single Linkedlist
    Mahasiswa *node1, *node2, *node3;
    
    node1 = new Mahasiswa();
    node2 = new Mahasiswa();
    node3 = new Mahasiswa();
    
    node1->nim = "21.11.4154";
    node1->nama = "Akmal Fauzan";
    node1->umur = 21;
    node1->next = node2;
    
    node2->nim = "21.11.4111";
    node2->nama = "Restu Agung";
    node2->umur = 21;
    node2->next = node3;
    
    node3->nim = "21.11.4199";
    node3->nama = "Bayu Enkai";
    node3->umur = 21;
    node3->next = NULL;
    
    Mahasiswa *cur;
    cur = node1;
    while( cur != NULL ){
    	cout << "Nama Mahasiswa : "<< cur->nama << endl;
    	cout << "Nim Mahasiswa : "<< cur->nim << endl;
    	cout << "Umur Mahasiswa : "<< cur->umur << endl;
    	
    	cur = cur->next;
	}
    
    
}
