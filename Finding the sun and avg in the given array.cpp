#include<iostream>
using namespace std;
int main(){
    int x,sum,avg;
    cout<<"Enter the size of array: ";
    cin>>x;
    int num[x];
    cout <<"Enter any "<<x<<" integer values: ";
    for(int i=0;i<x;i++){
        cin>>num[i];
    }
    for(int j=0;j<x;j++)
    {
        sum+=num[j];
        
    }
    cout<<"The sum of elements is: "<<sum;
    avg=sum/x;
    cout<<"\nThe average of elements is: "<<avg;
}
/*
Output:
Enter the size of array: 5
Enter any 3 integer values: 10
20
30
40
50
The sum of elements is: 150
The average of elements is: 30
*/
