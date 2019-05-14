typedef double Item;
static const int M = 10;

class List {
private:
	Item m_list[M];
	unsigned int m_now;
public:
	List(){for(int i=0;i<M;i++) m_list[i] =  0.0; m_now = 0;};
	bool add(Item num);
	bool isEmpty() const;
	bool isFull() const;
	void visit( void (*pf)(Item & ls));
	bool substract ( Item & num);
};
