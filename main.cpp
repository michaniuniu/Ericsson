#include <iostream>
using namespace std;
class Figura 
{
public:
	int bok;
	Figura(int a)
	{
		this->bok=a;
	}
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
	Trojkat(int a):Figura(a)
	{
	}
	int Obwod(){
		return(bok*3);
	}
};

class Trapez : public Figura
{
public:
	int podstawa,bokTrapez;
	Trapez(int a, int b, int c):Figura(a),podstawa(b),bokTrapez(c)
	{
	}
	int Obwod(){
		return(bok+podstawa+bokTrapez*2);
	}
};

int main(int argc, char** argv) {
	
	Kwadrat kwadrat(1);
	Prostokat prostokat(4,6);
	Trojkat trojkat(6);
	Trapez trapez(7,3,2);
	
	cout<<"Obwod kwadratu to: "<<kwadrat.Obwod()<<endl;
	cout<<"Obwod prostokata: "<<prostokat.Obwod()<<endl;
	cout<<"Obwod trojkata to: "<<trojkat.Obwod()<<endl;
	cout<<"Obwod trapezu to: "<<trapez.Obwod()<<endl;
	return 0;
}
