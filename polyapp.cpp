//****************************************************
// Program: polyapp.cpp                              *
// Implentation file for Appliance hierarchy    *
// Contains member function definitions for base    *
// class Appliance and derived classes TV and VCR      *
// Author: Wesley Charlton                                *
// Date: 12/08/25                                   *
//****************************************************

#include <iostream>
#include <string>
#include "polyapp.h"

using namespace std;
//=====================Aplliance class member functions======================
//-----------------------Appliance Constructor-----------------------------
Appliance::Appliance(string cust, string manu) : custName(cust), manuFact(manu), estCost(0) {}

//-----------------------Appliance EstimateService-----------------------------
void Appliance::EstimateService() {
	estCost = 0;
}

//-----------------------Appliance printObject-----------------------------
void Appliance::printObject() {
	cout << "Customer Name :" << custName << endl;
	cout << "Manufacture :" << manuFact << endl;
	cout << "Estimated Cost :" << estCost << endl;
}

// Getters
string Appliance::GetCustName() const {
	return custName;
}
string Appliance::GetManufacturer() const {
	return manuFact;
}
double Appliance::GetEstimatedCost() const {
	return estCost;
}

// Setters
void Appliance::SetCustName(string cust) {
	custName = cust;
}
void Appliance::SetManufacturer(string manu) {
	manuFact = manu;
}
void Appliance::SetEstimatedCost(double cost) {
	estCost = cost;
}

//=========================TV class member functions=========================
//-----------------------TV Constructor-----------------------------
TV::TV(string cust, string manu, int age) : Appliance(cust, manu), modelAge(age) {}

int TV::GetModelAge() const {
	return modelAge;
}
void TV::SetModelAge(int age) {
	modelAge = age;
}

//-----------------------TV EstimateService-----------------------------
void TV::EstimateService() {
	if (modelAge >= 6) {
		estCost = 150;
	}
	else {
		estCost = 50;
	}
}

//-----------------------TV printObject-----------------------------
void TV::printObject() {
	cout << "-----TV------" << endl;
	Appliance::printObject();
	cout << "Model Age : " << modelAge << endl;
}

//====================VCR class member functions=========================
//-----------------------VCR Constructor-----------------------------
VCR::VCR(string cust, string manu, int tapes) : Appliance(cust, manu), numTapes(tapes) {}

int VCR::GetNumTapes() const {
	return numTapes;
}
void VCR::SetNumTapes(int tapes) {
	numTapes = tapes;
}

//-----------------------VCR EstimateService-----------------------------
void VCR::EstimateService() {
	if (numTapes > 1) {
		estCost = 100;
	}
	else {
		estCost = 40;
	}
}

//-----------------------VCR printObject-----------------------------
void VCR::printObject() {
	cout << "-----VCR------" << endl;
	Appliance::printObject();
	cout << "Number of Tape Drives: " << numTapes << endl;
}

