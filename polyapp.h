//****************************************************
// Program: polyapp.h                              *
// Header file for the Appliance inheritance hierarchy  *
// Contains base class 'Appliance' and derived classes: TV, and VCR, to keep track for appliance repair tracking      *
// Author: Wesley Charlton                                *
                                  *
//****************************************************

#include <iostream>
#include <string>

using namespace std;
//=========================Appliance class definition=========================
//-----------------------------------------------------------------------
class Appliance {
protected:
	string custName;
	string manuFact;
	double estCost;

public:
	Appliance(string cust, string manu);
	virtual ~Appliance() {}

	// Getters
	string GetCustName() const;
	string GetManufacturer() const;
	double GetEstimatedCost() const;

	// Setters
	void SetCustName(string cust);
	void SetManufacturer(string manu);
	void SetEstimatedCost(double cost);

	// Virtual functions
	virtual void EstimateService();
	virtual void printObject();
};
//-----------------------------------------------------------------------
//=========================TV class definition=========================
//-----------------------------------------------------------------------
class TV : public Appliance {
private:
	int modelAge;

public:
	TV(string cust, string manu, int age);

	// Getter and Setter
	int GetModelAge() const;
	void SetModelAge(int age);

	// Virtual functions
	virtual void EstimateService();
	virtual void printObject();
};
//-----------------------------------------------------------------------
//=========================VCR class definition=========================
//-----------------------------------------------------------------------
class VCR : public Appliance {
private:
	int numTapes;

public:
	VCR(string cust, string manu, int tapes);

	// Getter and Setter
	int GetNumTapes() const;
	void SetNumTapes(int tapes);

	// Virtual functions
	virtual void EstimateService();
	virtual void printObject();
};
//-----------------------------------------------------------------------