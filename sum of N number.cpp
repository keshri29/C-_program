#include<iostream>
using namespace std;
int main(){
	int arr[5],sum=0;
cout<<"enter the elements"<<endl;

for(int i=0; i<5; i=i+1)	{
	cin>>arr[i];
}
 for(int i=0;  i<5; i=i+1){
 	sum=sum+arr[i];
 	cout<<arr[i];
 
 }
 cout<<"sum is:"<<sum<<endl;
}
