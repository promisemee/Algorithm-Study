#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
	string a, b;
    cin >> a >> b;
	int cnt = 0;
    if (a.length() == b.length()) {
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == b[i] && a[i] == '8')
                cnt++;
            else if (a[i] != b[i])
                break;
        }
    }
	cout << cnt << '\n';
	return 0;
}