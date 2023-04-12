#include <bits/stdc++.h>
using namespace std;

int main() {
	int W, H, N;
	cin >> W >> H; cin.ignore();
	cin >> N; cin.ignore();
	int x;
	int y;
	cin >> x >> y; cin.ignore();
	int xmin = 0 , xmax = W-1;
	int ymin = 0 , ymax = H-1;
	while(1) {
		string dir;
		cin >> dir; cin.ignore();
		if(dir == "U") {
			xmin = xmax = x;
			ymax = y-1;
		}
		else if(dir == "UR") {
			xmin = x+1;
			ymax = y-1;
		}
		else if(dir == "R") {
			xmin = x+1;
			ymin = ymax = y;
		}
		else if(dir == "DR") {
			xmin = x+1;
			ymin = y+1;
		}
		else if(dir == "D") {
			xmin = xmax = x;
			ymin = y+1;
		}
		else if(dir == "DL") {
			xmax = x-1;
			ymin = y+1;
		}
		else if(dir == "L") {
			xmax = x-1;
			ymin = ymax = y;
		}
		else if(dir == "UL") {
			xmax = x-1;
			ymax = y-1;
		}
		x = (xmin + xmax) / 2;
		y = (ymin + ymax) / 2;
		cout << x << " " << y << endl;
    }
}
