//Program tested on Microsoft Visual Studio 2008 - Zahid Ghadialy
//Example of class invariant
// http://advancedcppwithexamples.blogspot.com.es/2009/07/example-of-c-class-invariant.html

#include<iostream>

using namespace std;

const int PressureOverflow = 1;
const int PressureUnderflow = 2;

const int MIN_PRESSURE = 30;
const int MAX_PRESSURE = 100;

class Pressure
{
public:
  Pressure();
  void setPressure(int p);
  void displayPressure(void) const;
private:
  int pressureMonitor; //invariant
};

Pressure::Pressure()
{
  pressureMonitor = 30;
}

void Pressure::setPressure(int p)
{
  try
  {
    if(p < MIN_PRESSURE)
      throw PressureUnderflow;
    if(p > MAX_PRESSURE)
      throw PressureOverflow;
    pressureMonitor = p;
  }
  catch(int pError)
  {
    switch(pError)
    {
    case PressureUnderflow:
      pressureMonitor = MIN_PRESSURE;
      cout<<"ERROR: Pressure should be between "<<MIN_PRESSURE<<" and "<<
        MAX_PRESSURE<<" - Value set to "<<pressureMonitor<<endl;
      break;
    case PressureOverflow:
      pressureMonitor = MAX_PRESSURE;
      cout<<"ERROR: Pressure should be between "<<MIN_PRESSURE<<" and "<<
        MAX_PRESSURE<<" - Value set to "<<pressureMonitor<<endl;
      break;
    default:
      break;
    }
  }
}

void Pressure::displayPressure(void) const
{
  cout<<"Current Pressure set to: "<<pressureMonitor<<endl;
}

int main()
{
  Pressure p;
  int x=0;
  while(1)
  {
    p.displayPressure();
    cout<<"Enter new Pressure: ";
    cin>>x;
    p.setPressure(x);
  }

  return 0;
}
