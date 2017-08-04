//Given two rectangles, find if the given two rectangles overlap or not. 
//A rectangle is denoted by providing the x and y co-ordinates of two points:
// the left top corner and the right bottom corner of the rectangle.

#include <bits/stdc++.h>

using namespace std;

struct Point
{
	int x,y;
};

bool check(Point l1, Point r1, Point l2, Point r2)
{
	if(l2.x>=r1.x||l1.x>=r2.x)
		return false;
	if(l1.y<=r2.y||l2.y<=r1.y)
		return false;
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Point l1,l2,r1,r2;
		cin>>l1.x>>l1.y>>r1.x>>r1.y;
		cin>>l2.x>>l2.y>>r2.x>>r2.y;
		check(l1,r1,l2,r2)?cout<<1<<endl:cout<<0<<endl;
	}
}