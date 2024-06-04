// CurrencyConverter.cpp : This app converts specific given currency

#include <iostream>

using namespace std;

class CurrencyConverter {
	private:
		double usdToEuroRate;
		double euroToUsdRate;
		double usdToYenRate;
		double usdToAudRate;

	public:
		CurrencyConverter(double usdToEuro, double euroToUsd, double usdToYen, double usdToAud) {
			usdToEuroRate = usdToEuro;
			euroToUsdRate = euroToUsd;
			usdToYenRate = usdToYen;
			usdToAudRate = usdToAud;
		}

		// Convert USD to Euro
		double usdToEuro(double usdAmount) {
			return  usdAmount * usdToEuroRate;
		}

		// Convert Euro to USD
		double euroToUsd(double euroAmount) {
			return euroAmount * euroToUsdRate;
		}

		// Convert USD to Japanese Yen
		double usdToYen(double usdAmount) {
			return usdAmount * usdToYenRate;
		}

		// Convert USD to AUD
		double usdToAud(double usdAmount) {
			return usdAmount * usdToAudRate;
		}

		// Displays Exchange rate Method
		void DisplayExchangeRate() const {
			cout << "\n\t======Current Exchange Rate======\n";
			cout << "1 Usd to Euro: " << usdToEuroRate << endl;
			cout << "1 Euro to Usd: " << euroToUsdRate << endl;
			cout << "1 Usd to Yen: " << usdToYenRate << endl;
			cout << "1 Usd to Aud: " << usdToAudRate << endl;
		}
};

// rates are as of 06/02/2024
int main() {
	double initUsdToEuroRate = 0.92;
	double initEuroToUsdRate = 1.09;
	double initUsdToYenRate = 154.92;
	double initUsdToAudRate = 1.50;
	double amt;

	int choice;

	CurrencyConverter convert(initUsdToEuroRate, initEuroToUsdRate, initUsdToYenRate, initUsdToAudRate);
	convert.DisplayExchangeRate();

	do {
		cout << "\n\t====== Currency Converter Main Menu =====\n";
		cout << "1. Convert USD to Euro \n";
		cout << "2. Convert Euro to USD \n";
		cout << "3. Convert USD to Yen \n";
		cout << "4. Convert Usd to Aud \n";
		cout << "0. Exit\n";

		cout << "Please Enter Choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter USD Amount: ";
			cin >> amt;
			cout << amt << " USD is " << convert.usdToEuro(amt) << " Euro\n";

			break;

		case 2:
			cout << "Enter Euro Amount: ";
			cin >> amt;
			cout << amt << " Euro is " << convert.euroToUsd(amt) << " USD\n";


			break;

		case 3:
			cout << "Enter USD Amount: ";
			cin >> amt;
			cout << amt << " USD is " << convert.usdToYen(amt) << " Yen\n";

			break;

		case 4:
			cout << "Enter USD Amount: ";
			cin >> amt;
			cout << amt << " USD is " << convert.usdToAud(amt) << " AUD\n";
			

			break;

		default:
			cout << "Please Enter Valid Amount\n";
			system("pause");
		}
	} while (choice != 0);
}