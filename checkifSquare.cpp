#include <bits/stdc++.h>
using namespace std;

class Point{
	public:
	int x,y;
};

int dist(Point p1,Point p2)
{
    return (p2.x-p1.x)*(p2.x-p1.x)+
           (p2.y-p1.y)*(p2.y-p1.y);
}

bool isSquare(Point p1,Point p2,Point p3,Point p4)
{
    int d2=dist(p1,p2);
    int d3=dist(p1,p3);
    int d4=dist(p1,p4);
    	
    if(d2==d3&&2*d2==d4)
    {
        int d=dist(p2,p4);
        return (d==dist(p3,p4)&&d==d2);
    }
    
    if(d3==d4&&2*d3==d2)
    {
        int d=dist(p2,p3);
        return (d==dist(p2,p4)&&d==d3);
    }
    
    if(d4==d2&&2*d2==d3)
    {
        int d=dist(p3,p2);
        return (d==dist(p3,p4)&&d==d4);
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
		Point p1,p2,p3,p4;    
		cin>>p1.x>>p1.y;
		cin>>p2.x>>p2.y;
		cin>>p3.x>>p3.y;
		cin>>p4.x>>p4.y;
        isSquare(p1,p2,p3,p4)?cout<<1:cout<<0<<endl;
    }
}