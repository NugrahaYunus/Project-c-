#include <iostream>
using namespace std;

int main (void)
 {
 	int akun;
 	long saldo, bunga ;
 	char nama [30];
 	FILE *fp;
 	fp = fopen ("c:\\Users\\asus\\Documents\\Tugas Kuliah\\C++\\bunga.txt", "w");
 	cout  << "---------- Selamat datang di Bank WIBU ----------" << endl << endl;
 	cout << "saya akan mencoba menghitung bunga per tahun dalam saldo anda" << endl;
	printf ("Masukkan ID Akun :");
 	scanf ("%d" ,& akun);
 	printf ("Masukkan Nama Anda :");
 	scanf ("%s", nama);
 	cout << "Masukkan saldo anda :Rp";
 	cin >> saldo;
 	cout << "bunga anda sebesar %/tahun :";
 	cin >> bunga;
 	cout << "Bunga dalam saldo anda sebesar :Rp" << saldo*bunga/100 << "/tahun" << endl;
 	cout << "NB : Bunga akan terus bertambah :Rp " << saldo*bunga << " setiap tahunnya" << endl << endl;
 	cout << "----------Berikut Saldo anda selama 5 tahun yang sudah di tambahkan bunga----------" << endl << endl;
 	cout << "Saldo di tahun pertama :Rp  " << saldo + (saldo*bunga*1/100) << endl;
 	cout << "------------------------------------------" << endl ;
 	cout << "Saldo di tahun kedua :Rp  " << saldo + (saldo*bunga*2/100) << endl;
 	cout << "------------------------------------------" << endl ;
 	cout << "Saldo di tahun ketiga :Rp  " << saldo + (saldo*bunga*3/100) << endl;
 	cout << "------------------------------------------" << endl ;
 	cout << "Saldo di tahun keempat :Rp  " << saldo + (saldo*bunga*4/100) << endl;
 	cout << "------------------------------------------" << endl ;
 	cout << "Saldo di tahun kelima :Rp  " << saldo + (saldo*bunga*5/100) << endl;
 	cout << "------------------------------------------" << endl << endl;
 	cout << "---------------GANBATTE MINNA ^_^---------------" ;
 	fprintf (fp, "----------Ini adalah database saldo dan bungamu per tahun---------- \n");
 	fprintf (fp, "Akun anda : %d\n", akun);
 	fprintf (fp, "Nama anda : %s\n", nama);
 	fprintf (fp, "Saldo anda senilai :Rp %d\n", saldo);
 	fprintf (fp, "Bunga anda sebesar :%d persen/tahun \n", bunga);
 	fprintf (fp, "Bunga dalam saldo anda sebesar :Rp %d/tahun \n\n" , saldo*bunga/100);
 	fprintf (fp, "----------Ini Adalah Saldo anda selama 5 tahun yang sudah di ditambahkan bunga----------\n");
 	fprintf (fp, "Saldo di tahun pertama :Rp  %i\n" ,saldo + (saldo*bunga*1/100));
 	fprintf (fp, "Saldo di tahun kedua :Rp  %i\n" ,saldo + (saldo*bunga*2/100));
 	fprintf (fp, "Saldo di tahun ketiga :Rp  %i\n" ,saldo + (saldo*bunga*3/100));
 	fprintf (fp, "Saldo di tahun keempat :Rp  %i\n", saldo + (saldo*bunga*4/100));
 	fprintf (fp, "Saldo di tahun kelima :Rp  %i\n \n" , saldo + (saldo*bunga*5/100));
 	fprintf (fp, "Jadi sisa saldo anda sekarang adalah :Rp  %d\n", saldo + (saldo*bunga*5/100));
	fclose(fp);
 	return 0;
 }
