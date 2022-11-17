#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class TransRot{
private:
	double x,y,z,newX,newY,newZ;
	string opType;
public:
	TransRot();	
	void setXYZ(double x = 0.0, double y = 0.0, double z = 0.0);
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
	
	
};
