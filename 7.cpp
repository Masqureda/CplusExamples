int main() {
	int sayi1, sayi2, sayi3, sonuc;
	cout << "Lutfen 3 sayiyi giriniz :";
	cin >> sayi1 >> sayi2 >> sayi3;
	cout << endl;
	
	if (sayi1 >= sayi2 and sayi1 >= sayi3) {
		sonuc = sayi1;
	}
	else if (sayi2 >= sayi1 and sayi2 >= sayi3) {
		sonuc = sayi2;
	}
	else {
		sonuc = sayi3;
	}
	cout << "Girilen en buyuk sayi : " << sonuc;
	cout << endl;




	return 0;
}
