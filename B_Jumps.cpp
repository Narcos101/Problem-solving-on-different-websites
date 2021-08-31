#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		// 0 1 3 ..5.. 6 10 15 21
		int steps = 0;
		while (steps * (steps + 1) < 2 * x)
			steps++;
            cout << steps * (steps + 1)  << " ";
		
		if (steps * (steps + 1) / 2 == x + 1)
			steps++;
        cout << endl;
		// cout << steps << endl;
	}
}