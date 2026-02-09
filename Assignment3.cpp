#include <iostream>
#include <string>

using namespace std;
int main(){
    string tname;
    string yname;
    string food;
    string num;
    string color;
    string ani;
    string adjective;
    cout<<"Follow instructions to create your mad lib"<<endl<<endl;
    cout<<"enter your first name: "<<endl;
    cin>>yname;
    cout<<"Enter your teachers first name: "<<endl;
    cin>>tname;
    cout<<"Enter a food: "<<endl;
    cin>>food;
    cout<<"Enter a number between 100-120: "<<endl;
    cin>>num;
    cout<<"Enter an adjective: "<<endl;
    cin>>adjective;
    cout<<"Enter a color: "<<endl;
    cin>>color;
    cout<<"Enter an Animal: "<<endl;
    cin>>ani;
    cout << "Dear Instructor "<<tname<<","<<endl<<endl;

    cout << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten "<<food<<" , which made me turn "<<color<<" and extremely ill. I came down with a fever of "<<num<<" . Next, my "<<adjective<<" pet "<<ani<<" must have smelled the remains of the "<<food<<" on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late."<<endl<<endl;

cout<<"Sincerely,"<<endl<<endl;

cout<<yname<<endl;
return 0;

}
