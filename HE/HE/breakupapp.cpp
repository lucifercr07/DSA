#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	std::vector<int> vec(30,0);
	do
	{
		string s;
		getline(cin,s);
		int wt=0;
		if(s[0]=='G')
		{
			wt=2;
			int i=1;
			while(i<s.length())
			{
				if(isdigit(s[i])&&s[i+1]==' ')
				{
					int num=s[i]-'1';
					vec[num]+=wt;
					i++;
				}
				else if(isdigit(s[i])&&isdigit(s[i+1]))
				{
					int num=s[i]-'0';
					int num2=s[i+1]-'0';
					num=(num*10)+num2;
					vec[num-1]+=wt;
					i+=2;
				}
				else
				i++;
			}
		}
		
		if(s[0]=='M')
		{
			wt=1;
			int i=1;
			while(i<s.length())
			{
				if(isdigit(s[i])&&s[i+1]==' ')
				{
					int num=s[i]-'1';
					vec[num]+=wt;
					i++;
				}
				else if(isdigit(s[i])&&isdigit(s[i+1]))
				{
					int num=s[i]-'0';
					int num2=s[i+1]-'0';
					num=(num*10)+num2;
					vec[num-1]+=wt;
					i+=2;
				}
				else
					i++;
			}
		}		

	}while(n--);

	std::vector<int> v(vec);
	sort(v.begin(),v.end(),greater<int>());
	/*for(int i=0;i<30;i++)
		cout<<vec[i]<<" ";
	cout<<endl;
	for(int i=0;i<30;i++)
		cout<<v[i]<<" ";
	cout<<endl;
	*/
	if(v[0]==v[1])
	cout<<"NO DATE"<<endl;
	else
	{
		int date=0;
		for(int i=0;i<30;i++)
		{
			if(v[0]==vec[i])
			{
				date=i+1;
				break;
			}

		}
		if(date==19||date==20)
			cout<<"DATE"<<endl;
		else
			cout<<"NO DATE"<<endl;

	}	
	return 0;
}