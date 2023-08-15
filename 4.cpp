int main() {
	// sifre belirleme
	int sifre;
	cout << "lutfen sifre belirleyin :";
	cin >> sifre;
	cout << "sifreniz belirlendi.." << endl;
	// sifre sorma
	int kullanıcı_sifre;
	cout << "Sifre giriniz :";
	cin >> kullanıcı_sifre;
	
	if (kullanıcı_sifre == sifre)
		cout << "Sifre dogru ";
	else
		cout << "Sifre yanlis " << endl;

	return 0;

}
