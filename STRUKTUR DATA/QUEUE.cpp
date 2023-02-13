#include <iostream>
#define MAX 20

using namespace std;

struct queue{
 int front, rear, data[MAX];
 
}q;

bool isFull(){
 return q.rear == MAX;
}

bool isEmpty(){
 return q.rear == 0;
}

void printqueue(){
 if(isEmpty()){
  cout<<"antrian kosong gaess"<<endl;
  
 }else{
  cout<<"queue :";
  for(int i= q.front; i<q.rear; i++){
   cout<<q.data[i]<<((q.front - 1 == i)? "" : ",");
   
  }
 }
}
void enqueue(){
 if(isFull()){
  cout<<"antrian udah penuh nih!!"<<endl;
 }else{
  int data;
  cout<<"masukkan data:";
  cin>>data;
  q.data[q.rear]= data;
  q.rear++;
  cout<<"data telah di tambahkan !";
  printqueue();
 }
}
void dequeue(){
 if(isEmpty()){
  cout<<"antrian kosong"<<endl;
 }else{
  cout<<"mengambil data\""<<q.data[q.front]<<"\"..."<<endl;
  for(int i=q.front; i<q.rear; i++){
   q.data[i]=q.data[i+1];
   
  }
  q.rear--;
  printqueue();
  
 }
}
int main(){
 int pilih;
 do{
  cout<<"\nMenu pilihan\n";
  cout<<"1. enqueue\n";
  cout<<"2. dequeue\n";
  cout<<"3. keluar\n";
  cout<<"masukkan pilihan anda :";
  cin>>pilih;
  
  switch(pilih){
   case 1:
    enqueue();
    break;
   case 2:
    dequeue();
    break;
    default:
     cout<<"exit";
     break;
  }
 }
 while(pilih != 3);
 return 0;
}