 //Given the coordinates of the end points of two line segments 
 //and you have to check if they intersect or not.

#include <bits/stdc++.h>

using namespace std;

struct Point
{
	int x,y;
};

bool check(Point p1,Point q1, Point p2,Point q2)
{
	int o1=orientation(p1,q1,p2);

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Point p1,q1,p2,q2;
		cin>>p1.x>>p1.y>>q1.x>>q1.y;
		cin>>p2.x>>p2.y>>q2.x>>q2.y;
		check(p1,q1,p2,q2)?cout<<1<<endl:cout<<0<<endl;
	}
}