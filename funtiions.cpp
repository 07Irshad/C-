#include <iostream>
using namespace std;
bool prime(int n);
int main() 
{
    int n,i;
    bool flag=false;
    cout << "Enter a positive  integer: ";
    cin >> n;
    for(i=2;i<=n/2;++i) 
	{
		if (prime(i)) 
		{
			if (prime(n-i)) 
			{
				cout << n << " = " << i << " + " << n-i << endl;
                                flag = true;
                        }
                }
        }

    if (!flag)
    cout << n << "Not possible";
    return 0;
}


bool prime(int n)
{
    int i;
    bool p = true;
    if (n==0||n==1) 
	{
        p = false;
    }
    else 
	{
		for(i=2;i<=n/2;++i) 
		{
            if(n%i==0) 
			{
                p = false;
                break;
            }
        }
    }
    return p;
}
