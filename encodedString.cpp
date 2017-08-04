#include <bits/stdc++.h>

using namespace std;

char *encode(char *src)
{     
  //Your code here
  char s;
  int length = strlen(src);
  int t=0,i=0;
  //cout<<length<<endl;
  char* temp = new char[(length*2)+1];
  for(t=0;t<length;t++)
  {
  	int count=1;
  	
  	temp[i++]=src[t];
  	while(t+1<length&&src[t]==src[t+1])
  	{	
  		count++;
  		t++;
  	}
  	
  	char integer[100];
  	sprintf(integer,"%d",count);
  	for(int k=0;*(integer+k);k++,i++)
  	{
  		temp[i]=integer[k];
  	}
  }
  //temp[i]='\0';
  //cout<<temp;
  //char *y=new char[encoded.size()];
  //strcpy(y,encoded);
  //return y;  
  cout<<temp;
}     

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		char* s=new char[100];
		fgets(s,100,stdin);
		char* d=encode(s);
		//cout<<d<<endl;
	}
}
