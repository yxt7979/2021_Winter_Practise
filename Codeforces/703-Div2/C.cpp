//C1 C2
#include <bits/stdc++.h>
using namespace std;
int n;

int ask(int l, int r) {
	printf("? %d %d\n", l, r);
	fflush(stdout);
	int x;
	scanf("%d", &x);
	return x;
}

int main() {
	scanf("%d", &n);
	int p = ask(1, n);
	if (n == 2) {
	    printf("! %d\n", 3 - p);
	    fflush(stdout);
	    return 0;
    }
    if (p != 1 && ask(1, p) == p) {
	    int l = 1, r = p;
	    while (r - l > 1) {
		    int m = l + r >> 1;
		    if (ask(m, p) == p)
		        l = m;
		    else
		        r = m;
	    }
	    printf("! %d\n", l);
	} else {
	    int l = p, r = n;
	    while (r - l > 1) {
	      int m = l + r >> 1;
	      if (ask(p, m) == p)
	        r = m;
	      else
	        l = m;
	    }
	    printf("! %d\n", r);
	}
	fflush(stdout);
	return 0;
}
