#include <iostream>

using namespace std;

class Figura 
{
public:
	int bok;
	
	Figura(){
	}
	
	Figura(int a)
	{
		bok=a;
	}
	
// 	virtual int Obwod(){
// 		return 0;
// 	}
	
};

class Prostokat : public Figura
{
	
public:
	int bokProstokat;
	Prostokat(int a, int b):Figura(a),bokProstokat(b)
	{
		//this->bokProstokat=b;
	}
	
	int Obwod()
	{
		return(bok*2+bokProstokat*2);
	}
};

class Kwadrat : public Figura
{
public:	
	Kwadrat(int a):Figura(a)
	{
		
	}
	
	int Obwod(){
		
		return(bok*4);
	}
};

class Trojkat : public Figura
{
public:
	int bok1,bok2;
	Trojkat(int a, int b, int c):Figura(a),bok1(b),bok2(c)
	{
	}
	int Obwod(){
		return(bok+bok1+bok2);
	}
};

class Trapez : public Figura
{
public:
	int podstawa,bokTrapez1,bokTrapez2;
	Trapez(int a, int b, int c, int d):Figura(a),podstawa(b),bokTrapez1(c),bokTrapez2(d)
	{
	}
	int Obwod(){
		return(bok+podstawa+bokTrapez1+bokTrapez2);
	}
};

int main(int argc, char** argv) {
	
	Figura *kwadrat = new Kwadrat(5);
	Figura *prostokat = new Prostokat(5,4);
	Figura *trojkat = new Trojkat(5,4,3);
	Figura *trapez = new Trapez(5,4,3,5);
	
//	Kwadrat kwadrat(5);
//	Prostokat prostokat (5,4);
//	Trojkat trojkat(5,4,3);
//	Trapez trapez(5,4,3,5);
	
//	Figura* wskKwadrat = &kwadrat;
//	Figura* wskProstokat = &prostokat;
//	Figura* wskTrojkat = &trojkat;
//	Figura* wskTrapez = &trapez;
			
	cout<<"Obwod kwadratu to: "<<kwadrat->Obwod()<<endl;
	cout<<"Obwod prostokata: "<<prostokat->Obwod()<<endl;
	cout<<"Obwod trojkata to: "<<trojkat->Obwod()<<endl;
	cout<<"Obwod trapezu to: "<<trapez->Obwod()<<endl;

	delete kwadrat;
	delete prostokat;
	delete trojkat;
	delete trapez;
	return 0;
}
