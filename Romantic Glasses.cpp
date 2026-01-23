#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n; // Read the number of glasses
	vector<int> v(n); // Vector to store the amount of juice in each glass
	for (int i = 0; i < n; i++)
		cin >> v[i]; // Read the juice amounts

	// Vectors to store prefix sums for odd and even indexed glasses
	vector<long long int> prefixEven(n, 0), prefixOdd(n, 0);

	// Initialize prefix sums
	prefixEven[0] = v[0];
	int flag = 0; // Flag to check if a valid subarray is found
	map<long long int, int> mp; // Map to store the differences of prefix sums

	// Initialize the map with the difference of the first element
	mp[prefixOdd[0] - prefixEven[0]]++;

	for (int i = 1; i < n; i++)
	{
		// Carry forward the old values
		prefixOdd[i] += prefixOdd[i - 1];
		prefixEven[i] += prefixEven[i - 1];

		// Update prefix sums based on the index parity
		if (i % 2)
			prefixOdd[i] += v[i];
		else
			prefixEven[i] += v[i];

		// Update the map with the current difference
		mp[prefixOdd[i] - prefixEven[i]]++;

		// Check if the current difference has been seen before or is zero
		if (mp[prefixOdd[i] - prefixEven[i]] == 2 || prefixOdd[i] - prefixEven[i] == 0)
		{
			flag = 1;
			break;
		}
	}

	// Output the result based on the flag
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

// Time Complexity (TC): O(n log n)
// Space Complexity (SC): O(n)

int32_t main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		solve(); // Solve each test case
	}
	return 0;
}
