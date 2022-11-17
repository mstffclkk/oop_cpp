#ifndef SENSOR_H
#define SENSOR_H
#include <string>
using namespace std;
class Sensor
{
	public:
		Sensor(string, double T1 = 0.0, double T2 = 0.0, double T3 = 0.0, double rms = 0.0, double sra = 0.0); // default constructor initialize double values 0.0
		~Sensor();
		void setT1(double);
		void setT2(double);
		void setT3(double);
		void setID(string);
		double getT1() const;
		double getT2() const;
		double getT3() const;
		double getRMS() const;
		double getSRA() const;
		string getID() const;
		void calculateSensorStats();
		void print() const;
	protected:
		
	private:
		double t1;
		double t2;
		double t3;
		double RMS;
		double SRA;
		string ID;
};

#endif
