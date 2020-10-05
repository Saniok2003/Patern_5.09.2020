#include<iostream>
#include <string>
using namespace std;

class Conveyor
{
protected:
	string bodyy;
	string enginey;
	string wheelsy;
	string colory;
	string salony;
public:
	virtual void Collect() = 0;
	void GetResult()
	{
		cout << "Body: " << bodyy << endl;
		cout << "Engine: " << enginey << endl;
		cout << "Wheels: " << wheelsy << endl;
		cout << "Color: " << colory << endl;
		cout << "Salon: " << bodyy << endl;
	}
};

class TechnologyModels : protected Conveyor
{
public:
	virtual void Body_assembly() = 0;
	virtual void Engine_installation() = 0;
	virtual void Installation_wheels() = 0;
	virtual void Painting() = 0;
	virtual void Salon_preparation() = 0;
};

class Mini_Auto_technology : TechnologyModels
{
public:
	virtual void Body_assembly() override
	{	
		Conveyor::bodyy = "MINI Cooper";
	}
	virtual void Engine_installation() override
	{
		Conveyor::enginey = "Mini, 4 type";
	}
	virtual void Installation_wheels() override
	{	
		Conveyor::wheelsy = "Michelin 175/65R15 (x4)";
	}
	virtual void Painting() override
	{
		Conveyor::colory = "Green";
	}
	virtual void Salon_preparation() override
	{	
		Conveyor::salony = "Ready for sale";
	}
};

class TechnologySportsAuto : TechnologyModels
{
public:
	virtual void Body_assembly() override
	{
		Conveyor::bodyy = "Targa";
	}
	virtual void Engine_installation() override
	{
		Conveyor::enginey = "V6, type 2";
	}
	virtual void Installation_wheels() override
	{
		Conveyor::wheelsy = "Anzio R15 (4x)";
	}
	virtual void Painting() override
	{
		Conveyor::colory = "Red";
	}
	virtual void Salon_preparation() override
	{
		Conveyor::salony = "Ready for sale";
	}
};

class TechnologyOff_roadCar : TechnologyModels
{
public:
	virtual void Body_assembly() override
	{
		Conveyor::bodyy = "SUV";
	}
	virtual void Engine_installation() override
	{
		Conveyor::enginey = "Common Rail, type 3";
	}
	virtual void Installation_wheels() override
	{
		Conveyor::wheelsy = "Bridgestone Blizzak DM-V2 235/60 R18 107S XL(4x)";
	}
	virtual void Painting() override
	{
		Conveyor::colory = "Black";
	}
	virtual void Salon_preparation() override
	{
		Conveyor::salony = "Ready for sale";
	}
};

int main()
{
	

	return 0;
}