#include "GroupData.h"
#include "DataSpec.h"



GroupData::GroupData(const DataSpec &df1, const DataSpec &df2, const DataSpec &df3, double x, double y, double z)
		 : f1(df1),
		   f2(df2),
		   f3(df3),
		   maxX(x),
		   maxY(y),
		   maxZ(z)
{
	cout << "GroupData constructor is running" << endl;
}

double GroupData::getMaxX() const{ return maxX; }
double GroupData::getMaxY() const{ return maxY; }
double GroupData::getMaxZ() const{ return maxZ; }

void GroupData::print() const{ 
	cout << "maxX: " << getMaxX() << "\nmaxY: " << getMaxY() << "\nmaxZ: " << getMaxZ() << endl; 
}

void GroupData::calculateMaxFeatures(){
	double temp1, temp2, temp3;
	temp1 =  max(f1.getFX(), f2.getFX());
	maxX = max(temp1, f3.getFX());
	
	temp2 =  max(f1.getFY(), f2.getFY());
	maxY = max(temp2, f3.getFY());
	
	temp3 =  max(f1.getFZ(), f2.getFZ());
	maxZ = max(temp3, f3.getFZ());
}

bool GroupData::compare(const GroupData &obj){
	return (this->maxX>obj.maxX)&&(this->maxY>obj.maxY)&&(this->maxZ>obj.maxZ);

}


