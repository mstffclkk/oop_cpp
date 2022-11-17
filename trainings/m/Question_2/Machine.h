#ifndef MACHINE_H
#define MACHINE_H
#include <string>
#include "Sensor.h"
using namespace std;
class Machine
{
	public:
		Machine(const Sensor &, const Sensor &, double ppv = 0.0, double af = 0.0, double bf = 0.0);
		double getPPV() const;
		double getAF() const;
		double getBF() const;
		void print() const;
		void calculateMachineStats();
		bool compare(const Machine &);
	protected:
	private:
		const Sensor s1;
		const Sensor s2;
		double PPV;
		double AF;
		double BF;
		double getMax(double, double) const;
		double getMin(double, double) const;
};

#endif
