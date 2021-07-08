#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	
ll count = 0, dif = 0;
 
	for (ll j = 0; j < n - 1; j++)
	{
		dif = 0;
		if (arr[j + 1] < arr[j])
		{
			dif = arr[j] - arr[j + 1];
			arr[j + 1] = arr[j ] ;
			count = count + dif;
		}
 
	}
	cout <<  count << endl;
	
	return 0;
}
