#include <iostream>
#include "sales.h"
#include <cstdlib>
namespace SALES {

	Sales::Sales(const double ar[], int n){
	if (n > QUARTERS || n < 0){
		std::cout << "Over sales region\n";
		std::cout << "Exit\n";
		exit(EXIT_FAILURE);
	}
	double max=0.0, min=0.0, sum=0.0;
	for ( int i=0; i<n; i++){
		m_sales[i] = ar[i];
		sum += ar[i];
		/*if ( max < ar[i])
			max = ar[i];
		if ( min > ar[i])
			min = ar[i];*/
	}
	for ( int i=n; i<QUARTERS; i++)
		m_sales[i] = 0;
	max = min = m_sales[0];
	for ( int i=1; i<QUARTERS; i++){
		if ( max < m_sales[i])
			max = m_sales[i];
		if ( min > m_sales[i]){
			min = m_sales[i];
			std::cout << i << " times mininum: " << min << std::endl;
		}
	}
	m_max = max;
	m_min = min;
	m_average = sum / n;
}

	Sales::Sales() {
	std::cout << "Enter sales for 4 quarters interactively\n";
	for (int i=0; i<QUARTERS; i++)
		std::cin >> m_sales[i];
	double sum=0.0, max=m_sales[0], min=m_sales[0];
	for (int i=0; i<QUARTERS; i++){
//		std::cin >> m_sales[i];
		sum += m_sales[i];
		if (max < m_sales[i])
			max = m_sales[i];
		if (min > m_sales[i])
			min = m_sales[i];
	}
	m_max = max;
	m_min = min;
	m_average = sum / QUARTERS ;
}

void Sales::showSales() const{
	using std::cout;
	using std::endl;
	cout << "Sales details\n";
	cout << "4 quarters: \n";
	for (int i=0; i<QUARTERS; i++){
		cout << m_sales[i] << ", ";
	}
	cout << "Average is: " << m_average << endl;
	cout << "Maximum is: " << m_max << ", Minimum is : " << m_min <<endl;
}
}
