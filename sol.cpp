#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		char a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		for(int i=n-1; i>=n-k; --i)
			if(a[i]=='H')
				for(int j=0; j<n; ++j) {
					if(a[j]=='H')
						a[j]='T';
					else
						a[j]='H';
				}
		int cnt=0;
		for(int i=0; i<n-k; ++i)
			if(a[i]=='H')
				cnt++;
		cout << cnt << "\n";
	}
}
