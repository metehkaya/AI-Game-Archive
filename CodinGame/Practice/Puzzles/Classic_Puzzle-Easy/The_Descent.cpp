#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main() {
	while(1) {
		vector<int> h;
		for( int i = 0 ; i < 8 ; i++ ) {
			int mountainH;
			cin >> mountainH; cin.ignore();
			h.pb(mountainH);
		}
		int highest = 0;
		for( int i = 1 ; i < 8 ; i++ )
			if(h[i] > h[highest])
				highest = i;
		cout << (char) ('0' + highest) << endl;
    }
}
