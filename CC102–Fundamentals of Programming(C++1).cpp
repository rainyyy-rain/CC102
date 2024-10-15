#include <iostream>
using namespace std;

int main()
{
	int sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	int sugarCostPHP, riceCostPHP, sardinesCostPHP, coffeeCostPHP, milkCostPHP;
	double sgQty, rQty, sarQty, cofQty, mQty = 0;
	double usdToPHP = 0;
	//usd to php
	cout << "Exchange rate in USD to PHP: ";
	cin << usdToPHP;
	cout << "Price of Sugar in USD: ";
	cin >> sugarPriceUSD;
	
	//item name
	cout << "sugar\nrice\nsardines\ncoffee\nmilk\n ";
	//quantity purchased
	cout << "Quantity of sugar: ";
	cin >> sgQty;
	cout << "Quantity of rice: ";
	cin >> rQty;
	cout << "Quantity of sardines ";
	cin >> sarQty;
	cout << "Quantity of coffee: ";
	cin >> cofQty;
	cout << "Quantity of milk: ";
	cin >> mQty;
	
	cout << "Price per item in PHP\n";
	cout << "Total cost per item in PHP\n";
	
	return 0;
}