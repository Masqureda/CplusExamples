int main() {
	int sayi1, sayi2, secilenislem, sonuc;
	sonuc = -1;

	cout << "Lutfen 1. sayiyi giriniz: ";
	cin >> sayi1;
	cout << "Lutfen 2. sayiyi giriniz: ";
	cin >> sayi2;

	cout << "Lutfen isleminizi seciniz (1:+ 2:- 3:* 4:/): ";
	cin >> secilenislem;
	cout << endl;

	if (secilenislem == 1) {
		sonuc = sayi1 + sayi2;
	}
	else if (secilenislem == 2) {
		sonuc = sayi1 - sayi2;
	}
	else if (secilenislem == 3) {
		sonuc = sayi1 * sayi2;
	}
	else if (secilenislem == 4) {
		if (sayi2 != 0) {  
			sonuc = sayi1 / sayi2;
		}
		else {
			cout << "Bolme isleminde ikinci sayi 0 olamaz." << endl;
		}
	}
	else {
		cout << "Lutfen 1-4 arasi bir sayi giriniz." << endl;
	}

	if (sonuc != -1) {
		cout << "Sonuc: " << sonuc << endl;
	}

	return 0;
}
