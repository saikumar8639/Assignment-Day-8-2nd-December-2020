#include<iostream>
using namespace std;

int main()
{
	int arr[1000],size,i,top=-1,choice,element,min;
	cout<<"enter size of stack\n";
	cin>>size;
	while(1)
	{
		cout<<"\nSTACK MENU\n";
		cout<<" 1.push \n 2.pop\n 3.display\n 4.exit\n5.minimum element\nenter your choice";
	    cin>>choice;
		switch(choice)
		{
			case 1: cout<<"enter an element to push\n";
			        cin>>element;
			        if(size-1==top)
					{
						cout<<"STACK IS FULL\n";
						break;
					}
					else
					{
						top=top+1;
						arr[top]=element;
						cout<<"\n element is inserted :"<<element<<endl;
					}
			        break;
			case 2:		
					if(top==-1)
					{
						cout<<"stack is empty\n";
						break;
					}
					else
					{
						top=top-1;
						cout<<"element is popped out\n";
					}
	
			      break;
			case 3: 
			     if(top==-1)
			     {
			     	cout<<"stack is empty\n";
			     	break;
				 }
					cout<<"\nstack elements are:";
					for(i=top;i>=0;i--)
					cout<<"\t"<<arr[i];
			       break;
			case 4: exit (0);
					break;
			case 5:
					min=arr[0];
					for(i=1;i<top;i++)
					if(arr[i]<min)
					min=arr[i];
					cout<<"minimum is:"<<min;
					break;
					
					
			
			default:cout<<"\nmatch not found\n";
		 } 
	}	
	return 0;
}
