#include <iostream>
using namespace std;

int main() 
{
	int sugarPriceUSD, ricePriceUSD, sardinesPriceUSD, coffeePriceUSD, milkPriceUSD;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float dollarEx, pesoEx, poundEx;
	float sugarCiD, riceCiP, sardinesCiP, coffeeCiD, milkCiD;
	float totalDs, totalPr, totalSar, totalDc, totalDm, total;
	
	cout << "Enter the price of sugar: ";
	cin >> sugarPriceUSD;
	cout << "Enter the amount of sugar: ";
	cin >> sugarQty;
	cout << "Enter the price of rice: ";
	cin >> ricePriceUSD;
	cout << "Enter the amount of rice: ";
	cin >> riceQty;
	cout << "Enter the price of sardines: ";
	cin >> sardinesPriceUSD;
	cout << "Enter the amount of sardines: ";
	cin >> sardinesQty;
	cout << "Enter the price of coffee: ";
	cin >> coffeePriceUSD;
	cout << "Enter the amount of coffee: ";
	cin >> coffeeQty;
	cout << "Enter the price of milk: ";
	cin >> milkPriceUSD;
	cout << "Enter the amount of milk: ";
	cin >> milkQty;
	cout << "************************************************************************\n";
	cout << "Input the Dollar To PESO Convertion Rate: ";
	cin >> dollarEx;
	cout << "Input the Pound To Peso Convertion Rate: ";
	cin >> poundEx;
	cout << "************************************************************************\n";
	
	sugarCiD = sugarPriceUSD * sugarQty;
	riceCiP = ricePriceUSD * riceQty;
	sardinesCiP = sardinesPriceUSD * sardinesQty;
	coffeeCiD = coffeePriceUSD * coffeeQty;
	milkCiD = milkPriceUSD * milkQty;
	
	totalDs = dollarEx * sugarCiD;
	totalPr = poundEx * riceCiP;
	totalSar = poundEx * sardinesCiP;
	totalDc = dollarEx * coffeeCiD;
	totalDm = dollarEx * milkCiD;
	
	total = totalDc + totalPr + totalSar + totalDc, totalDm;
	cout << "The total of sugar in dollar is " << sugarCiD << " Dollar\n";
	cout << "The total of rice in pound is " << riceCiP << " Pound\n";
	cout << "The total of sardines in pound is " << sardinesCiP << " Pound\n";
	cout << "The total of coffee in dollar is " << coffeeCiD << " Dollar\n";
	cout << "The total of milk in dollar is " << milkCiD << " Dollar" << endl;
	
	cout << "Thank you, need to pay of " << total << "Pesos. Please, Come Again";
	
	return 0;
}