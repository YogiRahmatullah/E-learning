#include <iostream>
using namespace std;
int main()
{
int i;
struct 
{
char nim[5]; char nama[15];float nilai;} mhs[5];
for(i=1; i<=2; i++)
{
cout << "Masukan Data Mahasiswa" << endl;	
cout << "masukan NIM = "; cin >> mhs[i].nim;
cout << "masukan Nama = "; cin >> mhs[i].nama;
cout << "masukan Nilai Akhir = "; cin >> mhs[i].nilai;
}
cout << endl;
cout << "Data Mahasiswa"<<endl;
for(i=1; i<=2; i++)
{
cout << "Data Ke - " << i << endl;
cout << "NIM = " << mhs[i].nim << endl;
cout << "Nama = " << mhs[i].nama << endl;
cout << "Nilai Akhir = " << mhs[i].nilai << endl;
cout << endl;
}
return 0;
}
