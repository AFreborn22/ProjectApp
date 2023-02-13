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

Mahasiswa *head, *tail, *cur, *newNode, *del;

//create single linked list
void createSingleLinkedList(string nim, string nama, int umur){
	head = new Mahasiswa();	 
	head->nim = nim;
	head->nama = nama;
	head->umur = umur;
	head->next = NULL;
	tail = head; 
}

//tambah awal single linked list
void addFirst(string nim, string nama, int umur){
	newNode = new Mahasiswa();	 
	newNode->nim = nim;
	newNode->nama = nama;
	newNode->umur = umur;
	newNode->next = head;
	head = newNode; 
}

//tambah akhir single linked list
void addLast(string nim, string nama, int umur){
	newNode = new Mahasiswa();	 
	newNode->nim = nim;
	newNode->nama = nama;
	newNode->umur = umur;
	newNode->next = NULL;
	tail->next = newNode;
	tail = newNode;
}

void removeFirst(){
	del = head;
	head = head->next;
	delete del;
}

void removeLast(){
	del = tail;
	cur = head;
	while( cur->next != tail ){
		cur = cur->next;
	}
	tail = cur;
	tail->next = NULL;
	delete del;
}

void printSingleLinkedList(){
	cur = head;
    while( cur != NULL ){
    	cout << "Nama Mahasiswa : "<< cur->nama << endl;
    	cout << "Nim Mahasiswa : "<< cur->nim << endl;
    	cout << "Umur Mahasiswa : "<< cur->umur << endl;
    	
    	cur = cur->next;
	}
}

int main(){
    
    createSingleLinkedList("21.11.4154", "Akmal Fauzan", 21);
    printSingleLinkedList();
    cout<<"\n\n"<<endl;
    
    addFirst("21.11.4199", "Restu Agung", 20);
    printSingleLinkedList();
    cout<<"\n\n"<<endl;
    
    addLast("21.11.4111", "Osman Dembele", 22);
    printSingleLinkedList();
    cout<<"\n\n"<<endl;
    
    removeFirst();
    printSingleLinkedList();
    cout<<"\n\n"<<endl;
    
    addLast("21.11.4222", "Bukayo Saka", 19);
    printSingleLinkedList();
    cout<<"\n\n"<<endl;
    
    removeLast();
    printSingleLinkedList();
    cout<<"\n\n"<<endl;
}
