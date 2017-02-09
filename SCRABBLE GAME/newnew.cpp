#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{

	vector<int>v;

	int i,num;
	for(i=0;i<10;i++)
	{
	cin>>num;
	v.push_back(num);
	
	}
	sort(v.begin(),v.end());

	for(i=0;i<10;i++)
	{
	cout<<v[i]<<endl;
	}

	return 0;
	

}