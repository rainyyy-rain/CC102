#include <iostream>
using namespace std;

int main()
{
	 int temp;
	
	cout << "The temperature today is: ";
	cin >> temp;
	
	if (temp < 32){
		cout << "Please, bring a heavy jacket." << endl;
	}
	else if (temp >= 32 && temp <= 50){
		cout << "Please, bring a light jacket." << endl;
	}
	else {
		cout << "Don't bring any jacket.";
	}
	
	return 0;
}
