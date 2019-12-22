#include<iostream>
#include<locale.h>

using namespace std;
int ada;
char ad;
long a[8];
long b[8];
long iki[8];
long bas;
string cvp;
void sorgu (string sd)
{
	cout << endl << "Başka bir değeri incelemek ister misiniz? (e,h)" ; cin >> sd;
	if (sd == "e" || sd == "evet" || sd == "EVET" || sd == "evet")
	{
		
	}
	else if (sd == "h" || sd == "H" || sd == "HAYIR" || sd == "hayir" || sd == "HAYİR" || sd == "hayır")
	{
		
	}
	else
	{
		cout << "Sanırım yanlış tuşlama yaptınız. Lütfen tekrar deneyin";
	}
	return ;
}
	
void baslan() {
	system("cls");
	cout << "Dönüştürmek istediğiniz değeri girin: "; cin >> ad;
	ada = ad;
	cout << "10'luk tabandaki karşılığı= " << ada << endl;
	//emin olmak istedim sadece
	if (ada < 0)
	{
		system("cls");
		cout << "Kusura bakmayın bu değer için tanımlı değilim. Sadece ASCII tablosunun ilk 128 karakteri için size yardımcı olabilirim. Başka bir karakterle çalışmak ister misiniz? (e,h)"<<endl; cin >> cvp;
		if (cvp == "e" || cvp == "evet" || cvp == "EVET" || cvp == "evet")
		{
			 sorgu(cvp);
		}
		else
		{
			
		}
	}
	for (size_t i = 0; i < 8; i++)
	{
		iki[7 - i] = pow(2, 7 - i);
	}
	bas = ada % 128;
	a[7] = bas;
	for (size_t i = 0; i < 7; i++)
	{
		a[6 - i] = a[7 - i] % iki[6 - i];
	}
	b[7] = ada / 128;
	for (size_t i = 0; i < 7; i++)
	{
		b[6 - i] = a[7 - i] / iki[6 - i];
	}
	cout << "İkili tabandaki karşılığı= ";
	for (size_t i = 0; i < 8; i++)
	{
		cout << b[7 - i];
	}
}
int main()
{
	setlocale(LC_ALL, "Turkish");
	system("color 0c");
	
		giris:
		system("cls");
		cout << "Dönüştürmek istediğiniz değeri girin: "; cin >> ad;
		ada = ad;
		cout << "10'luk tabandaki karşılığı= " << ada << endl;
		//emin olmak istedim sadece
		if (ada < 0)
		{
			system("cls");
			cout << "Kusura bakmayın bu değer için tanımlı değilim. Sadece ASCII tablosunun ilk 128 karakteri için size yardımcı olabilirim. Başka bir karakterle çalışmak ister misiniz? (e,h)" << endl; cin >> cvp;
			if (cvp == "e" || cvp == "evet" || cvp == "EVET" || cvp == "evet")
			{
				goto giris;
			}
			else if (cvp == "h" || cvp == "H" || cvp == "HAYIR" || cvp == "hayir" || cvp == "HAYİR" || cvp == "hayır")
			{
				goto cikis;

			}
			else
			{
				system("cls");
				cout << "Sanırım yanlış tuşlama yaptınız. Lütfen tekrar deneyin";
				goto sorgu;
			}
		}
		for (size_t i = 0; i < 8; i++)
		{
			iki[7 - i] = pow(2, 7 - i);
		}
		bas = ada % 128;
		a[7] = bas;
		for (size_t i = 0; i < 7; i++)
		{
			a[6 - i] = a[7 - i] % iki[6 - i];
		}
		b[7] = ada / 128;
		for (size_t i = 0; i < 7; i++)
		{
			b[6 - i] = a[7 - i] / iki[6 - i];
		}
		cout << "İkili tabandaki karşılığı= ";
		for (size_t i = 0; i < 8; i++)
		{
			cout << b[7 - i];
		}
	sorgu:
		
		cout << endl << "Başka bir değeri incelemek ister misiniz? (e,h)"; cin >> cvp;
		if (cvp == "e" || cvp == "evet" || cvp == "EVET" || cvp == "E")
		{
			goto giris;
		}
		else if (cvp == "h" || cvp == "H" || cvp == "HAYIR" || cvp == "hayir" || cvp == "HAYİR" || cvp == "hayır")
		{
			goto cikis;
		}
		else
		{
			system("cls");
			cout << "Sanırım yanlış tuşlama yaptınız. Lütfen tekrar deneyin";
			goto sorgu;
		}
		

	
	cikis:



	return 0;


}







