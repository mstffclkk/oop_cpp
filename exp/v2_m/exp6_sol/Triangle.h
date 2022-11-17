#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Line.h"

class Triangle
{
	public:
		Triangle(string Name,const Line &A,const Line &B,const Line &C);
		void outputProperties();
		~Triangle();
		
		
	private:
		const Line a;
		const Line b;
		const Line c;
		string name;
		double angleA;
		double angleB;
		double angleC;
		
		void calculateAngles();
		void calculateArea();
		void calculatePerimeter();
		void determineTypeAngles();
		void determineTypeEdges();
		
		
};

#endif
