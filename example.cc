#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

#define FOREACH(i, c)	for(typeof((v).begin()) i=(v).begin();i!=(v).end();i++)
#define FOR(I,A,B)	for(int I = (A); I < (B); ++I)
#define REP(I,N)	FOR(I,0,N)
#define ALL(A)		(A).begin(), (A).end()
#define pb 		push_back
#define mp		make_pair
#define X 		first
#define Y 		second
#define all(s)		(s).begin(), (s).end()
#define SORT(s)		sort(all(s))
#define MAX(s)		*max_element(all(s))

using namespace std;

typedef string S;
typedef long long ll;
typedef vector<int> VI;
typedef vector<string> VS;

// end boilerplate
// hack hard, hack strong
int main(int argc, char* argv[]) {
	VI v;
	int n[12] = {0, 3, 9, 1, 3, 4, 10, 312, 1, 203, 30, 3};
	v.assign(n, n+12);
	printf("Max value in vector: %d\n", MAX(v));
}
