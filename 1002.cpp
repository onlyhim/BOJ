#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
#define INF 1e9+7
#define MAX 1
int main() {
	int t, x1, y1, r1, x2, y2, r2;
	cin >> t;
	while (t--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		double dist = sqrt((pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2)));
		if (!dist) {
			if (r1 == r2)	puts("-1");
			else puts("0");
		}
		else {
			if (abs(r1 + r2) > dist && dist > abs(r1 - r2))	puts("2");
			else if (max(r1, r2) == min(r1, r2) + dist || r1 + r2 == dist) puts("1");
			else puts("0");
		}
	}
}

