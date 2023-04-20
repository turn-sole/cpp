//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int N = 110;
//int a[N];
//
//int main()
//{
//    int n, m;
//    cin >> m >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    sort(a, a + n);
//
//    if (a[0] != 1) cout << -1 << endl;
//    else
//    {
//        while (n > 0 && a[n - 1] > m) n--;
//        a[n] = m + 1;
//        int res = 0;
//        for (int i = 0, s = 0; i < n; i++)
//        {
//            int k = (a[i + 1] - 1 - s + (a[i] - 1)) / a[i];
//            res += k;
//            s += k * a[i];
//        }
//
//        cout << res << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
stack<int > s;
int main() {
    int n;
    string str;
    cin >> n >> str;
    for (auto i : str) {
        if (s.empty()) {
            s.push(i - '0');
        }
        else {
            if (i - '0' != s.top()) {
                s.pop();
            }
            else {
                s.push(i - '0');
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}
