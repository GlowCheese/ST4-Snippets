#include <bits/stdc++.h>
#ifndef LBM_LOCAL
#define debug(x...) 17
#endif

// libraries
using namespace std;
namespace {
	// macros
	#define fi first
	#define se second
	#define Gint getData<ll>()
	#define Gstr getData<str>()
	#define all(a)  (a).begin(),  (a).end()
	#define rall(a) (a).rbegin(), (a).rend()
	#define For(i, u, v) for (int i = (u), _n_ = (v); i < _n_; i++)
	#define Rof(i, u, v) for (int i = (u), _n_ = (v); --i >= _n_; )

	// typedefs
	using str  = string;            using ll  = long long;
	using chr  = char;              using ld  = long double;
	using pii  = pair<int, int>;    using pll = pair<ll, ll>;
	template<class T> using MaxHeap = priority_queue<T, vector<T>, less<T>>;
	template<class T> using MinHeap = priority_queue<T, vector<T>, greater<T>>;
	
	// constants
	constexpr ld  pi  = acos(-1),      eps = 1e-7;
	constexpr ll  md  = 1e9 + 1617,    mod = 1e9 + 7;
	constexpr ll  e30 = 1ll << 30,     e60 = 1ll << 60;

	// functions
	int hextoint(char c) { return 9 * (c >> 6) + c & 017; }
	int isvowel(char c) { return 2130466 >> (c & 31) & 1; }
	template<class A, class B> bool Maxz(A &a, B b) { return a < b && (a = b, true); }
	template<class A, class B> bool Minz(A &a, B b) { return b < a && (a = b, true); }
	template<class T> static T getData() { T x; return cin >> x, x; }
} // main template



/* -----------------[ MAIN CODE GOES HERE ]----------------- */
const short luv = 17 * 83;

int main() {
	cin.tie(nullptr) -> sync_with_stdio(false);
	
}

















// ------------------------------------------                    |\__/,|   (`\
// | author: dlbm1302 | created: 17.07.2021 |                  _.|o o  |_   ) )
// -----------------------------------------------------------(((---(((------------