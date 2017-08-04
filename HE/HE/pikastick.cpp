#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<int> vec(n);
    	for(int i=0;i<n;i++)
    		cin>>vec[i];
    		
    	if(n<4)
    		cout<<"-1"<<endl;
    	else
    	{
    		//sort(vec.begin(),vec.end(),greater<int>());
    		vector<int>::iterator it;
    		it=max_element(vec.begin(),vec.end());
    		int num1=*it;
    		vec.erase(remove(vec.begin(),vec.end(),*it),vec.end());
    		it=max_element(vec.begin(),vec.end());
    		int num2=*it;
    		vec.erase(remove(vec.begin(),vec.end(),*it),vec.end());
    		it=max_element(vec.begin(),vec.end());
    		int num3=*it;
    		if(num2==num3)
    		cout<<"-1"<<endl;
    		else
    		{
    			cout<<num1*num2<<endl;
    		}
    	}
    }
    return 0;
}

