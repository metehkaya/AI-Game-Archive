#include <bits/stdc++.h>
using namespace std;

int main() {
	int speed;
	cin >> speed; cin.ignore();
	int lightCount;
	cin >> lightCount; cin.ignore();
	int distance[lightCount];
	int duration[lightCount];
	for( int i = 0 ; i < lightCount ; i++ ) {
		cin >> distance[i] >> duration[i]; cin.ignore();
	}
	for( int s = speed ; s >= 1 ; s-- ) {
		bool ok = true;
		for( int i = 0 ; i < lightCount ; i++ ) {
			int q = 3.6 * distance[i] / (s * duration[i]);
			if(q % 2)
			ok = false;
		}
		if(ok) {
			cout << s << endl;
			break;
		}
	}
}
