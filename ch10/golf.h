#ifndef GOLF_H_
#define GOLF_H_

const int Len = 40;
class golf {
//static const int Len = 40;
private:
	char m_fullname[Len];
	int m_handicap;
public:
golf(const char* name, int hc);

golf();

int setgolf();

void handicap(int hc);

void showgolf() const;

golf & setgolf(const char* name, int hc);
};

#endif
