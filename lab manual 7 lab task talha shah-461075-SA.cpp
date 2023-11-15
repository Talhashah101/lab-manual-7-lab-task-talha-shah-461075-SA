#include<iostream>
using namespace std;
int main()
{
	//task:01
	
	int arr[10];
	cout<<"enter  integer values "<<endl;
	
	for(int i=0;i<10;i++){
	   cin>>arr[i]; }
		for(int i=0;i<10;i++){
  	   cout<<arr[i]<<" "; }
	return 0;
	
	
	
	
	
	//task:02
 
	int arr[5],s(0),p(1);
	cout<<"Enter the integers: ";
	for(int i=0;i<5;i++) {
		cin>>arr[i];
	}
	for(int i=0;i<5;i++) {
		s+=arr[i];
		p*=arr[i];
	}
	cout<<"The sum is: "<<s<<endl;
	cout<<"The product is: "<<p<<endl;
	return 0;






//    task:03
    
    int r;
	cout<<"Please enter the number of rows"<<endl;
	cin>>r;	
	
{
		char b[r];
		int h = r/2;
	
		for(int i=0; i<=r; i+=1){b[i]=' ';}
		for(int j=0; j<=h; j+=1){
			b[h-j]='*';
			b[h+j]='*';
			for(int k=0; k<r; k+=1){cout<<b[k];}
			cout<<endl;
		}
	
		for(int m=0; m<h; m+=1){
			b[r-1-m]=' ';
			b[m]=' ';
			for(int s=0; s<r; s+=1){cout<<b[s];}
			cout<<endl;
		}
	}
	return 0;
    
}


