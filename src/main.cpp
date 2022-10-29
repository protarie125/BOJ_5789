#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		string s;
		cin >> s;

		const auto& len = s.length();
		const auto& i = len / 2;
		if (s[i - 1] == s[i]) {
			cout << "Do-it\n";
		}
		else {
			cout << "Do-it-Not\n";
		}
	}

	return 0;
}