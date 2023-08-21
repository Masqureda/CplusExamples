int main() {
	int sayi1, sayi2, secilenıslem, sonuc;
	cout << "lutfen 1. sayiyi giriniz :";
	cin >> sayi1;
	cout << "lutfen 2. sayiyi giriniz :";
	cin >> sayi2; 

	cout << "lutfen isleminizi seciniz (1:+ 2:- 3:* 4:/): ";
	cin >> secilenıslem;
	cout << endl;
	
	if (secilenıslem == 1) {
		sonuc = sayi1 + sayi2;
	}
	else if (secilenıslem == 2) {
		sonuc == sayi1 - sayi2;
	}
	else if (secilenıslem == 3) {
		sonuc == sayi1 * sayi2;
	}
	else if (secilenıslem == 4) {
		sonuc == sayi1 / sayi2;
	}
	else {
		cout << "lutfen 1-4 arasi bir sayi giriniz";
	}
	cout << "isleminizin sonucu = " << sonuc;

	return 0;
}
