#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	private:
		double real;
		double complex;
	public:
		double magnitude();
		double get_real_part();
		double get_complex_part();
		void display();
};

#endif