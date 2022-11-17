#ifndef TRIANGLE_H
#define TRIANGLE_H
using namespace std;
#include <string>
#include "Line.h"
class Triangle
{
	public:
		Triangle(string,const Line &,const Line &,const Line &);		
		void outputProperties();
		~Triangle();
		
	protected:
	private:
		double angleA;
		double angleB;
		double angleC;
		string name;
		void calculateAngles();
		void calculateArea();
		void calculatePerimeter();
		void calculateTypeAngles();
		void calculateTypeEdges();
		const Line a;
		const Line b;
		const Line c;
		
};

#endif
