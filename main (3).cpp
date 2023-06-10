#include<iostream>
using namespace std;
int main(){
    
    float physics,chemistry,biology,mathematics,computer;
    cout<<"Enter the Marks in Physics: "<<endl;
    cin>>physics;
    cout<<"Enter the Marks in Chemistry: "<<endl;
    cin>>chemistry;
    cout<<"Enter the Marks in Biology: "<<endl;
    cin>>biology;
    cout<<"Enter the Marks in Mathematics: "<<endl;
    cin>>mathematics;
    cout<<"Enter the Marks in Computer: "<<endl;
    cin>>computer;
    float percentage=(physics+chemistry+mathematics+biology+computer)/5.0;
    if(percentage >= 90){
        cout<<"Your grade is A and percentage obtained is "<<percentage<<endl;
    }
    else if(percentage >= 80){
        cout<<"Your grade is B and percentage obtained is "<<percentage<<endl;
    }
    else if(percentage >= 70){
         cout<<"Your grade is C and percentage obtained is "<<percentage<<endl;
    }
    else if(percentage >= 60){
         cout<<"Your grade is D and percentage obtained is "<<percentage<<endl;
    }
    else if(percentage >= 40){
         cout<<"Your grade is E and percentage obtained is "<<percentage<<endl;
    }
    else{
         cout<<"Your grade is F and percentage obtained is "<<percentage<<endl;
    }
    return 0;
}
