#include <bits/stdc++.h>
using namespace std;
string Int_to_String(int n) {
    ostringstream stream;
    stream << n;
    return stream.str();
}
string An(int n, int iter = 1) {
    if (iter == n)
        return Int_to_String(iter - 1) + (n % 2 == 0 ? "-" : "+") + "sin(" + Int_to_String(iter) + ")";
    return Int_to_String(iter - 1) + (iter % 2 == 0 ? "-" : "+") + "sin(" + An(n, iter + 1) + ")";
}
string Sn(int n, int iter = 1) {
    if (n == 1)
        return "(" + An(1).substr(2) + "+" + Int_to_String(iter) + ")";
    return "(" + Sn(n - 1, iter + 1) + An(n).substr(2) + "+" + Int_to_String(iter) + ")";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    string s = Sn(N);
    cout << s.substr(1, s.length() - 2) << '\n';
    return 0;
}
