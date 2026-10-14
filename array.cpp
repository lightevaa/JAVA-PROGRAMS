#include <iostream>
using namespace std;
int main ()
{
    int arr [50];
    int n,i,pos,value,search;
    cout<<"How manarray element you want:"<<endl;
cin>>n;
    cout<<"Enter Array Element :"<<endl;
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    cout<<"Array Element :"<<endl;
    
    for(i=0;i<n;i++)
        {
        cout<<arr[i]<<"\t";
        
        }
        

cout<<"Enter new element position:"<<endl;
cin>>pos;
cout<<"Enter new element value:"<<endl;
cin>>value;
for(i=n;i>pos;i--)
{ 
arr[i]=arr[i-1];

}
arr[pos]=value;
n++;
for (i=0;i<n;i++)
{ cout<<arr[i]<<"\t";

}
cout<<"Enter element position for deletion:"<<endl;
cin>>pos;
for(i=pos;i<n;i++)
{
	arr[i]=arr[i+1];
	
}
n--;
cout<<"Array element after deletion:"<<endl;
for(i=0;i<n;i++)
{
	cout<<arr[i]<<"\t";
	
}
cout<<"Enter element position for search:"<<endl;
cin>>search;
for(i=0;i<n;i++)
{
	if(arr[i]==search)
	{
		cout<<"Element found at index"<<i;
		
		
	}
}
return 0;
}
