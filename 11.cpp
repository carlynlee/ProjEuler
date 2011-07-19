#include<iostream>
using namespace std;
#include<fstream>


int main()
{
int x[20][20];
ifstream infile;
infile.open("11.txt");
unsigned long int prod, max;
max=0;
for (int i = 0; i < 20; i++) 
	{
	  for (int j = 0; j < 20; j++)
	  {
	   infile>>x[i][j];
	   cout<<x[i][j]<<",";
	  }
	cout<<endl;
	}

/*rows*/
for (int i = 0; i < 20; i++)
	{
	for(int j=0; j<=16;j++)
	{ 
         prod=1;
                cout<<x[i][j]<<"*";
         prod*=x[i][j];
                cout<<x[i][j+1]<<"*";
         prod*=x[i][j+1];
                cout<<x[i][j+2]<<"*";
         prod*=x[i][j+2];
                cout<<x[i][j+3]<<"=";
         prod*=x[i][j+3];
                cout<<prod<<endl;
         if (prod > max)
                max = prod;
	 }
	cout<<"*********"<<endl;
	}

prod=1;
/*columns*/
for (int i = 0; i <=16;  i++)
	{
	for(int j=0; j<20;j++)
	{ 
         prod=1;
                cout<<x[i][j]<<"*";
         prod*=x[i][j];
                cout<<x[i+1][j]<<"*";
         prod*=x[i+1][j];
                cout<<x[i+2][j]<<"*";
         prod*=x[i+2][j];
                cout<<x[i+3][j]<<"=";
         prod*=x[i+3][j];
                cout<<prod<<endl;
         if (prod > max)
                max = prod;
	 }
	cout<<"*********"<<endl;
	}

prod=1;
/*check diagonals left to right*/
for (int i = 0; i <= 16; i++)
	{
	for(int j=0; j<=16;j++)
	{ 
	 prod=1;
		cout<<x[i][j]<<"*"; 
	 prod*=x[i][j];
		cout<<x[i+1][j+1]<<"*";
	 prod*=x[i+1][j+1];
		cout<<x[i+2][j+2]<<"*";
	 prod*=x[i+2][j+2];
		cout<<x[i+3][j+3]<<"=";
	 prod*=x[i+3][j+3];
		cout<<prod<<endl;
	 if (prod > max)
		max = prod;
	
	}
	cout<<"***********"<<endl;
	}
/*check right to to left*/
for (int i = 0; i <=16; i++)
	{
	for(int j=19; j>=3;j--)
	{ 
	 prod=1;
		cout<<x[i][j]<<"*"; 
	 prod*=x[i][j];
		cout<<x[i+1][j-1]<<"*";
	 prod*=x[i+1][j-1];
		cout<<x[i+2][j-2]<<"*";
	 prod*=x[i+2][j-2];
		cout<<x[i+3][j-3]<<"=";
	 prod*=x[i+3][j-3];
		cout<<prod<<endl;
	 if (prod > max)
		max = prod;
	
	}
	cout<<"***********"<<endl;
	}
cout<<max<<endl;


return 0;

}
