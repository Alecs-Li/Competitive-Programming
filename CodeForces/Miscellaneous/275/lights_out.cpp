#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <map>
#include <cmath>

using namespace std;

typedef long double ld;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll,ll> pll;
typedef pair<char, char> pc;
typedef pair<string, string> ps;

typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<pi> vpi;
typedef vector<ps> vps;
typedef vector<pll> vpll;
typedef vector<pc> vpc;

template<class T> using ms = multiset<T>;
template<class T> using tup = tuple<T, T, T>;
template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;

#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define FOR(a, b, c) for (int a=(b); a<(c); a++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define F1R(i, a) for (int i=1; i<(a); i++)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define mp make_pair
#define mt make_tuple
#define pb push_back
#define f first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define all(x) x.begin(), x.end()

const char nl = '\n';
const int MAXN = 1e9;


void solve(){
    int arr[3][3];
    int n = 3;
    F0R(a, n){
        F0R(b, n){
            cin >> arr[a][b];
        }
    }
    bool ans[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}};
    F0R(a, n){
        F0R(b, n){
            int dx[] = {0, 0, -1, 1};
            int dy[] = {-1, 1, 0, 0};
            if(arr[a][b] % 2 != 0){
                if(!ans[a][b]){
                    ans[a][b] = true;
                } else {
                    ans[a][b] = false;
                }
                F0R(c, 4){
                    int x = a + dx[c];
                    int y = b + dy[c];
                    if(x > -1 && x < 3 && y > -1 && y < 3 && ans[x][y] == false){
                        ans[x][y] = true;
                    } else if (x > -1 && x < 3 && y > -1 && y < 3){
                        ans[x][y] = false;
                    }
                }
            }
        }
    }
    F0R(a, n){
        F0R(b, n){
            cout << ans[a][b];
        } cout << nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1; 
    //cin >> t;
    while(t--){
        solve();
    }
}