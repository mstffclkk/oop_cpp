#ifndef TRANSROT_H
#define TRANSROT_H
//#include <string>
#include <iostream>
using namespace std;

class TransRot
{
	private:
		double x,y,z,newX,newY,newZ;
		string opType;
	public:
		TransRot();
		void setXYZ(double x, double y, double z);
		void setX(double x);
		void setY(double y);
		void setZ(double z);
		
		double getX() ;
		double getY() ;
		double getZ() ;
		
		void translateAlongX(double value);
		void translateAlongY(double value);
		void translateAlongZ(double value);
	
		void rotateAroundX(double value);
		void rotateAroundY(double value);
		void rotateAroundZ(double value);
		
		void printResult(void);
		string getOperationType(void);
		double getRadianFromDegree(double value);
		void updateCoordinates(void);
	protected:
};

#endif
