#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,temp,c,sum = 0;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin >> arr[i];
	}
	
	for(int i = 0;i<n;i++){
		for(int j = 1;j<=n;j++){
			if(arr[i] > arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = arr [j];
				c = j - i;
				sum = sum + c;
			}
		}
	}
	cout << sum;
	
	return 0;
}
