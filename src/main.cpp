#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	const auto& b = static_cast<int>(sqrt(m)) - 1;

	auto ct = int{ 0 };
	auto mn = int{ n };
	auto s = ll{ 0 };
	for (auto i = b; i * i <= n; ++i) {
		const auto& q = i * i;
		if (m <= q) {
			if (q < mn) {
				mn = q;
			}

			s += q;

			++ct;
		}
	}

	if (0 == ct) {
		cout << -1;
		return 0;
	}

	cout << s << '\n' << mn;
	return 0;
}