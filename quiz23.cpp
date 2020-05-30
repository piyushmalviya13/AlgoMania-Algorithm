/*    Note:
        Quiz No: 23
        Deadline: June 1st, 14:00
*/

#include<bits/stdc++.h> 
using namespace std; 

int algo(vector <pair <int,int> > &v, int n) 
{ 
	vector <pair <int, int> > y(n * 2); 
	for (int i = 0; i < n; i++) 
	{ 
		y[i*2]	 = make_pair(v[i].first, 0); 
		y[i*2 + 1] = make_pair(v[i].second, 1); 
	} 

	sort(y.begin(), y.end()); 

	int result = 0; 

	int c = 0; 

	for (int i=0; i<n*2; i++) 
	{ 
		if (c)  result += (y[i].first - y[i-1].first); 
		y[i].second ? c-- : c++; 
	} 
	return result; 
} 

int main() 
{ 
	//n is the number of pair of points
	int n;
	cin>>n;

	vector< pair <int,int> > v; 

	/*each element in the input array is a line segment with a starting and ending point.
	all these line segments are along a same direction. */

	for(int i = 0;i<n;i++) {
		int x, y;
		cin>>x>>y;
		v.push_back(make_pair(x, y));
	}

	cout << algo(v, n) << endl; 
	return 0; 
} 

