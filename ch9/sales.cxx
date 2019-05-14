#include <iostream>
#include "sales.h"
#include <cstdlib>
namespace SALES {

void setSales(Sales & s, const double ar[], int n){
	if (n > QUARTERS || n < 0){
		std::cout << "Over sales region\n";
		std::cout << "Exit\n";
		exit(EXIT_FAILURE);
	}
	double max=0.0, min=0.0, sum=0.0;
	for ( int i=0; i<n; i++){
		s.sales[i] = ar[i];
		sum += ar[i];
		/*if ( max < ar[i])
			max = ar[i];
		if ( min > ar[i])
			min = ar[i];*/
	}
	for ( int i=n; i<QUARTERS; i++)
		s.sales[i] = 0;
	max = min = s.sales[0];
	for ( int i=1; i<QUARTERS; i++){
		if ( max < s.sales[i])
			max = s.sales[i];
		if ( min > s.sales[i])
			min = s.sales[i];
	}
	s.max = max;
	s.min = min;
	s.average = sum / n;
}

void setSales(Sales & s){
	std::cout << "Enter sales for 4 quarters interactively\n";
	double sum=0.0, max=0.0, min=s.sales[0];
	for (int i=0; i<QUARTERS; i++){
		std::cin >> s.sales[i];
		sum += s.sales[i];
		if (max < s.sales[i])
			max = s.sales[i];
		if (min > s.sales[i])
			min = s.sales[i];
	}
	s.max = max;
	s.min = min;
	s.average = sum / QUARTERS ;
}

void showSales(const Sales & s){
	using std::cout;
	using std::endl;
	cout << "Sales details\n";
	cout << "4 quarters: \n";
	for (int i=0; i<QUARTERS; i++){
		cout << s.sales[i] << ", ";
	}
	cout << "Average is: " << s.average << endl;
	cout << "Maximum is: " << s.max << ", Minimum is : " << s.min <<endl;
}
}
