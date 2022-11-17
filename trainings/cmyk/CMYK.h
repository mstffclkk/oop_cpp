#ifndef CMYK_H
#define CMYK_H
#include <string>
using namespace std;
class CMYK
{
	public:
		CMYK(string Name, int R = 0, int G = 0, int B = 0);
		double C;
		double M;
		double Y;
		double K;
		void setR(int);
		void setG(int);
		void setB(int);
		string getName();
		void printCMYK();
		void printCMYK() const;
		~CMYK();
	protected:
	private:
		int r;
		int g;
		int b;
		const string name;
		double calculateK();
		double calculateC();
		double calculateM();
		double calculateY();
};

#endif
