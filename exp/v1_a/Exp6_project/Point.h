#ifndef POINT_H
#define POINT_H
#include <string>
using namespace std;
class Point
{
	public:
		Point(string Name, double X=0.0, double Y=0.0);		
		void setX(double);
		void setY(double);
		void setName(string);
		double getX() const;
		double getY() const;
		string getName() const;
		void print() const;
		~Point();
	protected:
	private:
		double x;
		double y;
		string name;
};

#endif
