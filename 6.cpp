int main() {
	int sayi1, sayi2;
	cout << "1. sayiyi giriniz :";
    cin >> sayi1;
	cout << "2. sayiyi giriniz :";
	cin >> sayi2;

	if (sayi1 > 0 and sayi2 > 0) {
		cout << "Her iki sayi da pozitif!";
	}
	else if (sayi1 < 0 and sayi2 < 0) {
		cout << "Her iki sayi da negatif";
	}
	else if (sayi1 < 0 or sayi2 < 0) {
		cout << "Sayilarinizdan biri negatif!";
	}

}
