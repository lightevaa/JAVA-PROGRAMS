
#include <iostream>
using namespace std;

int main()
{
    int stack[5], value, top = -1, i;

   
    for (i = 0; i < 5; i++)
    {
        if (top == 4)
        {cout << "Stack is overflow" << endl;}
        
        
        else{ cout << "Enter stack element: ";
        cin >> value;  top++;
        stack[top] = value;
    }
}


    if (top == -1)
    {
        cout << "\nStack is empty" << endl;
    }
    else
    {
        cout << "\nStack elements is:"<<endl;

        for (i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    } 
	if (top == -1)
	{
        cout << "Stack is underflow" << endl;
    }else
    {
    	
    	cout<<"deleted:"<<stack[top]<<endl;
    	top--;
    	
    	
	}
	cout<<"\nStack element after pop operation" <<endl;
	if(top ==-1)
	{
		
		cout<<"\nstack empty";
		
	}else
	{
	
	for(i=top; i>=0; i--)
	{
		cout<<stack[i] <<endl;
	}
}
	if(top ==-1)
	{
		
		cout<<"\nstack empty";
		
	}else
	{
	   cout<<"\nStack peek element is:"<<endl;
		cout<<stack[i] <<endl;
	}



    return 0;
}
