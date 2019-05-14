#include <iostream>
#include "sales.h"

using namespace SALES;

int main(){
	Sales cup;
	double price[QUARTERS];
	int n=0;
	cup.showSales();
	std::cout << "Enter the number of price: ";
	std::cin >> n;
	while (std::cin.get() != '\n')
		std::cin.get();
	std::cout << "Enter " << n << " price \n";
	for (int i=0; i<n; i++)
		std::cin >> price[i];
	std::cin.get();
	Sales hub=Sales(price,n);
	hub.showSales();
	/*setSales(cup[0],price,n);
	setSales(cup[1]);
	
	showSales(cup[0]);
	showSales(cup[1]);*/
	return 0;
}
