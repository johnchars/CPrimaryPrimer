namespace SALES {
	const int QUARTERS = 4;
	class Sales {
		private:
		double m_sales[QUARTERS];
		double m_average;
		double m_max;
		double m_min;
		public:
		Sales(const double ar[], int n);
		Sales();
		void showSales() const;
	};
/*
	void setSales(Sales & s, const double ar[], int n);
	void setSales(Sales & s);
	void showSales(const Sales & s);
	*/
}

