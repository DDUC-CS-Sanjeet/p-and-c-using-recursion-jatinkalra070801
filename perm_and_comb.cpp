#include<iostream>
using namespace std;

int permutation(int n, int r)
{
    if(r==0)
	return 1;
	else
	return n*permutation(n-1,r-1);
}

int combination(int n, int r)
{
    if(r==0)
	return 1;
	else
	return 1.0*n*combination(n-1,r-1)/r;
}

int main()
{
  	int n,r,per,com;
	cout<<"enter value of n and r\n";
	cin>>n>>r;
	if(r<=n){
		try
		{
			if(n<0||r<0)
			throw n;
			else if(r==0)
			{
				per=1;com=1;
			}
			else
			{cout<<"permutation of the given input is\n"<<permutation(n,r);
			cout<<"combination of the given input is\n"<<combination(n,r);
			}
		}
		catch(int y)
		{
			cout<<"invalid";
		}
		
	}
	else
	{cout<<"invalid input from the user";
	}
  return 0;
}
