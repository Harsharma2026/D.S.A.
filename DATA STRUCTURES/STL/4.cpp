#include<iostream>
#include<algorithm> 
#include<vector> 
using namespace std;
int main()
{
	// Initializing vector
	vector<int> vect = { 2, 1, 5, 6, 8, 7 };
	
	is_partitioned(vect.begin(), vect.end(), [](int x)
	{
		return x%2==0;
		
	})?
	
	cout << "Vector is partitioned":
	cout << "Vector is not partitioned";
	cout << endl;
	
	// partitioning vector using partition()
	partition(vect.begin(), vect.end(), [](int x)
	{
		return x%2==0;
		
	});
	
	is_partitioned(vect.begin(), vect.end(), [](int x)
	{
		return x%2==0;
		
	})?
	
	cout << "Now, vector is partitioned after partition operation":
	cout << "Vector is still not partitioned after partition operation";
	
    cout << endl;
	cout << "The partitioned vector is : ";
	for (int &x : vect) cout << x << " ";
	
	return 0;
	
}
