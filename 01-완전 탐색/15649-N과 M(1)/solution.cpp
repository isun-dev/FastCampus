#include <iostream>
typedef long long int ll;
using namespace std;

int N, M, selected[10], used[10];
void input() {
	cin >> N >> M;
}

void rec_func(int k) {
	if (k == M + 1) {
		for (int i = 1; i <= M; i++)
			cout << selected[i] << " ";
		cout << "\n";
		return;
	}
	for (int cand = 1; cand <= N; cand++) {
		if (used[cand]) continue;
		used[cand] = 1;
		selected[k] = cand;
		rec_func(k + 1);
		used[cand] = 0;
		selected[k] = 0;
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	input();
	rec_func(1);
	return 0;
}