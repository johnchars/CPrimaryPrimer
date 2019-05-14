#include <cstring>

#ifndef PLORG_H_
#define PLORG_H_

const int M = 19;

class plorg {
private:
	char m_name[M];
	int m_CI;
public:
	plorg() {strcpy(m_name,"Plorga"); m_CI=50;};
	void modify(int num);
	void show() const;
	plorg(char* name, int num);
};

#endif
