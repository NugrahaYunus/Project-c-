#include <iostream>
using namespace std;

main ()
{
	//arrray = koleksi data sejenis;
	/*
	int a;
	a =12;
	int b;
	b = 100;
	int c;
	c = 1;
	*/
	int a[3]; //deklarasi variabel dengan jumlah 3 elemen;
	a[0]=12; // mengisi elemen pertama dengan nilai 12;
	a[1]=100; // mengisi elemen kedua dengan nilai 100
	a[2]=1;
	
	cout << " Masukan elemen pertama = " << a[0] << endl;
	
	for (int i=0; i<3; i++)
	{
		cout << "a["<<i<<"] =" << a[i] << endl;
		// program pengulangan  untuk bisa di output kedalam program C
	}
}
