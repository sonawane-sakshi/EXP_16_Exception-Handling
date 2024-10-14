#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"You are eligible to vote"<<endl;
        }
    
    }
    catch(int num){
        cout<<"ERROR: required age: 18, your age: "<<num;
        }
}
