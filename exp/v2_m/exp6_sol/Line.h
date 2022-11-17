#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line
{
	public:
		Line(string Name, const Point &p1, const Point &p2);
		void setName(string);
		void setMagnitude(double);
		
		Point getStartPoint() const;
		Point getEndPoint() const;
		
		string getName() const;
		double getMagnitude() const;
		
		void print() const;
		
		~Line();
	private:
		const Point start;
		const Point end;
		string name;
		double magnitude;
		
		void calculateMagnitude();

};

#endif
