#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,count=0;
	cin>>T;
	while(T--)
	{
	    int N,Z;
	    cin>>N>>Z;
	    vector<int> v1(N);
	    for(int i=0;i<N;i++)
	    {
	        int value;
	        cin>>value;
	        v1.push_back(value);
	    }
	    while(v1[0]!=0 && Z>0)
	    {
	        sort(v1.begin(), v1.end(), greater<int>());
	        int temp=v1[0];
	        Z=Z-temp;
	        v1[0]=temp/2;
	        count++;
	        
	    }
	    cout<<count;
	}
	return 0;
}
