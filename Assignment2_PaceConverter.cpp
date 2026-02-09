#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mph = 6.5;
    // PACE calculation
    /* write your code */
cout<<"enter a speed: "<<endl;
cin>>mph;
double time;
time=60/mph;
int mins;
mins=static_cast<int>(time);
double secs;
secs=time-mins;
secs=secs*600;
int intsecs=static_cast<int>(secs);
secs=static_cast<double>(intsecs)/10;
cout<<"With a speed of "<<mph<< " miles per hour, you will complete a mile in "<<mins<<" minutes and "<<secs<< " seconds"<<endl;
    //express pace in minutes and seconds
  /* write your code here */

  //express your output in 1 decimal points
return 0;

}
