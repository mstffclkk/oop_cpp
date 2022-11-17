#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include <string>
using namespace std;
class Line
{
	public:
		Line(string,const Point &,const Point &);
		~Line();
		void setName(string);
		void setMagnitude(double);
		Point getStartPoint() const;
		Point getEndPoint() const;
		string getName() const;
		double getMagnitude() const;
		void print() const;
	protected:
	private:
		string name;
		double magnitude;
		void calculateMagnitude();
		const Point first_value;
		const Point second_value;
		
};

#endif
