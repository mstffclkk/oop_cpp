#include "TransRot.h"
#include <cmath>
#include <iostream>
#include <string>
TransRot::TransRot()
{
	setXYZ(0.0,0.0,0.0);	 
}
void TransRot::setXYZ(double X,double Y,double Z){
	setX(X);
	setY(Y);
	setZ(Z);
}
void TransRot::setX(double X){
	x = X;
}
void TransRot::setY(double Y){
	y = Y;
}
void TransRot::setZ(double Z){
	z = Z;
}
double TransRot::getX() {
	return x;
}
double TransRot::getY() {
	return y;
}
double TransRot::getZ() {
	return z;
}
void TransRot::translateAlongX(double value){
	newX = x + value;
	newY = y;
	newZ = z;
	opType = "Translate X";
//	cout<<opType<<endl;
}
void TransRot::translateAlongY(double value){
	newX = x;
	newY = y + value;
	newZ = z;
	opType = "Translate Y";
//	cout<<opType<<endl;
}
void TransRot::translateAlongZ(double value){
	newX = x;
	newY = y;
	newZ = z + value;
	opType = "Translate Z";
//	cout<<opType<<endl;
}
void TransRot::rotateAroundX(double value){
	newX = x;
	newY = y * cos(getRadianFromDegree(value)) - z * sin(getRadianFromDegree(value));
	newZ = y * sin(getRadianFromDegree(value)) + z * cos(getRadianFromDegree(value));
	opType = "Rotate X";
//	cout<<opType<<endl;
}
void TransRot::rotateAroundY(double value){
	newX = x * cos(getRadianFromDegree(value)) + z * sin(getRadianFromDegree(value));
	newY = y;
	newZ = -x * sin(getRadianFromDegree(value)) + z * cos(getRadianFromDegree(value));
	opType = "Rotate Y";
//	cout<<opType<<endl;
}
void TransRot::rotateAroundZ(double value){
	newX = x * cos(getRadianFromDegree(value)) - y * sin(getRadianFromDegree(value));
	newY = x * sin(getRadianFromDegree(value)) + y * cos(getRadianFromDegree(value));
	newZ = z;
	opType = "Rotate Z";
//	cout<<opType<<endl;
}
string TransRot::getOperationType(void){
	return opType;
}
double TransRot::getRadianFromDegree(double value){
	double result;
	result = (value * M_PI / 180);
	return result;
}
void TransRot::updateCoordinates(){
	x = newX;
	y = newY;
	z = newZ;
}
void TransRot::printResult(){
	cout<<"P("<<getX()<<","<<getY()<<","<<getZ()<<")===="<<getOperationType()<<"========>"<<"PNew("<<newX<<","<<newY<<","<<newZ<<")"<<endl;
}
