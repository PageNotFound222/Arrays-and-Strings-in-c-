#include<iostream>
using namespace std;
int main(){
    int num[10];
    cout <<"Enter the given numbers: ";
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    for(int j=0;j<5;j++)
    {
        cout<<num[j]<<" ";
    }
}
/*
Output:
Enter the given numbers: 50
60
70
80
90

50 60 70 80 90 
*/
