#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main(){
char huruf,lagi,nm[20];
float nilai,nmid,nfinal,na,ttl_mid,ttl_tugas,ttl_final,jml=0;
int i=1;
atas:
cout<<"Menghitung Nilai Akhir Mahasiswa\n";
cout<<"-------------------------------------------";
cout<<"Masukkan Nama Mahasiswa = \n";cin>>nm;
do
	{cout<<"Masukkan Nilai Tugas = \n"<<i<<" = ";
   jml=jml+nilai;
   i++;}
   while(i<=5);
cout<<"Masukkan Nilai Mid Mahasiswa= \n";cin>>nmid;
cout<<"Masukkan Nilai Final Mahasiswa= \n";cin>>nfinal;
ttl_tugas=0.3*(jml/5);
ttl_mid=0.3*nmid;
ttl_final=0.4*nfinal;
na=ttl_tugas+ttl_mid+ttl_final;
if((na>=80) && (na<=100))
huruf = 'A';
if((na>=70) && (na<=79))
huruf = 'B';
if((na>=60) && (na<=69))
huruf = 'C';
if((na>=50) && (na<=59))
huruf = 'D';
else if (na<=50)
huruf = 'E';

cout<<endl;
cout<<endl;
cout<<"Menghitung Nilai Akhir Mahasiswa	\n";
cout<<"----------------------------------------------\n";
cout<<"Nama Mahasiswa			= "<<nm<<endl;
cout<<"Total Nilai Tugas		= "<<ttl_tugas<<endl;
cout<<"Total Nilai MID			= "<<ttl_mid<<endl;
cout<<"Total Nilai Final		= "<<ttl_final<<endl;
cout<<"Nilai Akhir Mahasiswa	= "<<na<<endl;
cout<<"Nilai Huruf Mahasiswa	= "<<huruf<<endl;
cout<<"Ingin menginput lagi ? [Y/T]";
lagi=getch();
clrscr;
if(lagi=='Y'||lagi=='y')goto atas;

getch();
}






