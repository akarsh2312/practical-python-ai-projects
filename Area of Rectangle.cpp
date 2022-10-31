#include<iostream>
using namespace std;
 
	    int circle(int a)
		{
			float x;
		cout<<"Enter the radius : ";
		cin>>a;
		x=3.14*a*a;
		cout<<"The required area is : "<<x;
	}
	
      int ellipse(int a, int b)
	{
		float x;
		cout<<"Enter the length of semi-major and semi-minor axis : ";
		cin>>a>>b;
		x=3.14*a*b;
	cout<<"The required area is : "<<x;
	}
	int triangle(int a ,int b)
	{
		float x;
		cout<<"Enter the height and base : ";
		cin>>a>>b;
		x=a*b/2;
		cout<<"The required area is : "<<x;
	}
	int square(int a)
	{
		int x;
		cout<<"Enter the side of square : ";
		cin>>a;
		x=a*a;
		cout<<"The required area is : "<<x;
		
	}
	int reactangle(int a,int b)
	{
		int x;
		cout<<"Enter the length and breadth : ";
		cin>>a>>b;
		x=a*b;
		cout<<"The required area is : "<<x;
	}
    
    

	



int main()
{
	int n,a,b;
	float area;
	cout<<"Choose the figure to calcute the area : "<<endl<<" 1. Circle "<<endl<<" 2. Ellipse "<<endl<<" 3. Triangle "<<endl<<" 4. Square "<<endl<<" 5. Rectangle "<<endl<<endl<<" ";
	cin>>n;
	switch(n)
	{
		case 1: circle(a);
		break;
		case 2: ellipse(a,b);
		break;
		case 3: triangle(a,b);
		break;
		case 4: square(a);
		break;
		case 5: reactangle(a,b);
		break;
		default : cout<<endl<<"    Aankho ka ilaaj krayee !!!";
	}


}

