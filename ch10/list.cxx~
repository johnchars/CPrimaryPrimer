#include <iostream>
#include "list.h"

bool List::add(Item num) {
	if (m_now < M-1){
		m_list[m_now++] = num;
		std::cout << "Adding success.\n";
	}
	else if ( List::isFull() )
		std::cout << "List is full, adding failed!\n";
	else std::cout << "Unknown failure.\n";
}

bool List::isEmpty() const {
	if ( m_now == 0 )
		std::cout << "List is empty.\n";
	else std::cout << "Now list including " << m_now << " double datas.\n"; 
}

bool List::isFull() const {
	if ( m_now == M)
		std::cout << "List is full.\n";
	else std::cout << "NOw list has " << M-m_now
	       	<< " double datas could be contented.\n";
}

void List::visit ( void (*pf)(Item & ls)) {
	//for (int i=0; i<m_now; i++){
		(*pf)(m_list[0]);
	//}
}

bool List::substract( Item & num){
	if (m_now > 0){
		num = m_list[0];
		for (int i=0; i< m_now-1; i++)
			m_list[i] = m_list[i+1];
	}
	else std::cout << "False, List is empty now.\n";
}

/*{
	for (int i=0;  i<m_now; i++){
		if ( num == m_list[i])
			for (int j=i; j< (m_now-1);j++)
				m_list[j] = m_list[j++];
		else {
		       	std::cout << "Not find " << num << ", please check list.\n";
			for ( int i=0; i<m_now; i++)
				std::cout << m_list[i] << std::endl;
	}
}*/
