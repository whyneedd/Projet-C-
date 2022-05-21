#include "MonteCarlo1.h"
#include "PayOff1.h"
#include "PayOffCallVanille.h"
#include "Random1.h"
#include <iostream> 

using namespace std;

int main()
{ 
	double Maturity;
	double Strike;
	double Spot;
	double Vol;
	double r;
	unsigned long NumberOfSimulation;

cout<<"n\Enter Maturity\n";
cin >>  Maturity;

cout<<"n\Enter Strike\n";
cin >>  Strike;

cout<<"n\Enter Spot\n";
cin >>  Spot;

cout<<"n\Enter Vol\n";
cin >>  Vol;

cout<<"n\Enter r\n";
cin >>  r;

cout<<"n\Enter Number of Simulation\n";
cin >>  NumberOfSimulation;

PayOffCallVanille CallVanillePayOff(Strike);
PayOffPutVanille PutVanillePayOff(Strike);

double resultCallVanille = MonteCarlo1(CallVanillePayOff,
									   Maturity,
									   Spot,
									   Vol,
									   r,
									   NumberOfSimulation);

double resultPutVanille = MonteCarlo1(PutVanillePayOff,
									   Maturity,
									   Spot,
									   Vol,
									   r,
									   NumberOfSimulation);

cout<< "The prices are" << resultCallVanille << "for the Call and" << resultPutVanille << "for the Put\n";

double tmp;
cin >> tmp;

return 0;
}
