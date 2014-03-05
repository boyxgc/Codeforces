#include <iostream>
using namespace std;
#define MAXN 100
#define ll long long

int main(void) {
	int n;
	char colors[MAXN];
	while(cin >> n){
		cin >> colors;
		ll ret = 0;
		for(int i = 0; i < n; ++i){
			if(colors[i] == 'B')
				ret += ((long long)(1) << i);
		}
		cout << ret << endl;
	}	

    return 0;
}