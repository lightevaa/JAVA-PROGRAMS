#include <iostream>
using namespace std; 
int main() {
    // Write C++ code here

    int n, i, arr[50], pos,value ;
    cout<<"enter the element you want"<<endl;
    cin>>n;

   cout<<"enter the value"<<endl;
    for(i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
    for(i=0;i<n;i++)
        {
            cout<<arr[i]<< " "<<endl;
        }
      cout<<"Enter the Position for new elemnet :"<<endl;
    cin>>pos;
    cout<<"enter the value for new element "<<endl;
    cin>>value;
    for(i=n;i>pos;i--)
        
        {
        arr[i]=arr[i-1];
            
        }
    arr[pos]= value;
    n++;
    for(i=0;i<n;i++)
        {
            cout<<arr[i]<< " "<<endl;
        }
    cout<<"which position elment you want to delete "<<endl;
    cin>>pos;

    for(i=pos;i<n;i++)
        {
            arr[i]=arr[i+1];
            
        }n--;
    cout<<"After delete elment value"<<endl;
     for(i=0;i<n;i++)
        {
            
            cout<<arr[i]<< " ";
        }
    
    
    
    return 0;
    
}


//delete













