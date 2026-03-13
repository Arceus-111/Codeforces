#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
// typedef tree<long long, null_type, less_equal<>, rb_tree_tag, tree_order_statistics_node_update> indexed_multiset; using " less_equal<> " makes it a multiset
template<typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long>vll;
typedef vector<vector<long long>>vvll;
typedef pair<long long,long long>pll;
typedef pair<int,int> pii; 
template <typename T> using vc = vector<T>;
template <typename T> using vvc = vector<vc<T>>;
template <typename T> using vvvc = vector<vvc<T>>;
using vi = vc<int>;
using vl = vc<ll>;
using vpi = vc<pii>;
using vpl = vc<pll>;
template <class T> using pq = priority_queue<T>;
template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
template <typename T> int si(const T &x) { return x.size(); }
#define overload5(a, b, c, d, e, name, ...) name
#define overload4(a, b, c, d, name, ...) name
#define fore(...) overload5(__VA_ARGS__, fore4, fore3, fore2, fore1, fore0)(__VA_ARGS__)
#define overload2(_1, _2, name, ...) name
#define endl "\n"
#define sq(x) (long long)sqrt(x)
#define REP0(n) for(ll jidlsjf = 0; jidlsjf < n; ++jidlsjf)
#define REP1(i, n) for(ll i = 0; i < (n); ++i)
#define REP2(i, a, b) for(ll i = (a); i < (b); ++i)
#define REP3(i, a, b, c) for(ll i = (a); i < (b); i += (c))
#define per0(n) for(int jidlsjf = 0; jidlsjf < (n); ++jidlsjf)
#define per1(i, n) for(ll i = (n)-1; i >= 0; --i)
#define per2(i, a, b) for(ll i = (a)-1; i >= b; --i)
#define per3(i, a, b, c) for(ll i = (a)-1; i >= (b); i -= (c))
#define fore1(i, a) for(auto &&i : a)
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define eb emplace_back
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define rng(v, l, r) v.begin() + (l), v.begin() + (r)
#define all(c) begin(c), end(c)
#define rall(c) rbegin(c), rend(c)
#define SORT(v) sort(all(v))
#define REV(v) reverse(all(v))
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define UNIQUE(x) SORT(x), x.erase(unique(all(x)), x.end())
template <typename T = ll, typename S> T SUM(const S &v) { return accumulate(all(v), T(0)); }
void scan(int &a) { cin >> a; }
void scan(long long &a) { cin >> a; }
void scan(char &a) { cin >> a; }
void scan(double &a) { cin >> a; }
void scan(string &a) { cin >> a; }
template <class T, class S> void scan(pair<T, S> &p) { scan(p.first), scan(p.second); }
template <class T> void scan(vector<T> &);
template <class T> void scan(vector<T> &a) {
    for(auto &i : a) scan(i);
}
template<class T, class U> inline bool chmin(T& a, const U& b) { if (a > b) { a = b; return true; } return false; }
template<class T, class U> inline bool chmax(T& a, const U& b) { if (a < b) { a = b; return true; } return false; }
template <class T, class S> pair<T, S> operator-(const pair<T, S> &x) { return pair<T, S>(-x.first, -x.second); }
template <class T, class S> pair<T, S> operator-(const pair<T, S> &x, const pair<T, S> &y) { return pair<T, S>(x.fi - y.fi, x.se - y.se); }
template <class T, class S> pair<T, S> operator+(const pair<T, S> &x, const pair<T, S> &y) { return pair<T, S>(x.fi + y.fi, x.se + y.se); }
template <class T> pair<T, T> operator&(const pair<T, T> &l, const pair<T, T> &r) { return pair<T, T>(max(l.fi, r.fi), min(l.se, r.se)); }
template <class T, class S> pair<T, S> operator+=(pair<T, S> &l, const pair<T, S> &r) { return l = l + r; }
template <class T, class S> pair<T, S> operator-=(pair<T, S> &l, const pair<T, S> &r) { return l = l - r; }
template <class T> bool intersect(const pair<T, T> &l, const pair<T, T> &r) { return (l.se < r.se ? r.fi < l.se : l.fi < r.se); }

template <class T> vector<T> &operator++(vector<T> &v) {
    fore(e, v) e++;
    return v;
}
template <class T> vector<T> operator++(vector<T> &v, int) {
    auto res = v;
    fore(e, v) e++;
    return res;
}
template <class T> vector<T> &operator--(vector<T> &v) {
    fore(e, v) e--;
    return v;
}
template <class T> vector<T> operator--(vector<T> &v, int) {
    auto res = v;
    fore(e, v) e--;
    return res;
}
template <class T> vector<T> &operator+=(vector<T> &l, const vector<T> &r) {
    fore(e, r) l.eb(e);
    return l;
}
template <class T> void scan(T &a) { cin >> a; }
template <typename T, typename S> T ceil(T x, S y) {
    assert(y);
    return (y < 0 ? ceil(-x, -y) : (x > 0 ? (x + y - 1) / y : x / y));
}
 
template <typename T, typename S> T floor(T x, S y) {
    assert(y);
    return (y < 0 ? floor(-x, -y) : (x > 0 ? x / y : x / y - (x % y == 0 ? 0 : 1)));
}
template <class T> T POW(T x, int n) {
    T res = 1;
    for(; n; n >>= 1, x *= x)
        if(n & 1) res *= x;
    return res;
}
template <class T, class S> T POW(T x, S n, const ll &mod) {
    T res = 1;
    x %= mod;
    for(; n; n >>= 1, x = x * x % mod)
        if(n & 1) res = res * x % mod;
    return res;
}
vector<pll> factor(ll x) {
    vector<pll> ans;
    for(ll i = 2; i * i <= x; i++)
        if(x % i == 0) {
            ans.push_back({i, 1});
            while((x /= i) % i == 0) ans.back().second++;
        }
    if(x != 1) ans.push_back({x, 1});
    return ans;
}
template <class T> vector<T> divisor(T x) {
    vector<T> ans;
    for(T i = 1; i * i <= x; i++)
        if(x % i == 0) {
            ans.pb(i);
            if(i * i != x) ans.pb(x / i);
        }
    return ans;
}
template <class T> bool is_prime(T x) {
    if(x<2) return false;
    for(T i = 2; i * i <= x; i++)
        if(x % i == 0) {
            return false;
        }
    return true;
}
template <class T> vector<T> prime_factors(T x) {
    vector<T> ans;
    for(T i = 2; i * i <= x; i++){
        while(x % i == 0) {
            ans.pb(i);
            x/=i;
        }
    }
    if(x>1) ans.pb(x);
    return ans;
}
template <class T> vector<char> sieve_prime(T l,T r) {
    vector<char> ans(r-l+1,true);
    ll lim=sqrt(r);
    for(T i = 2; i <= lim; i++){
        for(T j=max(i*i,(l+i-1/(i*i)));j<=r;j+=i){
            ans[j-l]=false;
        }
    }
    if(l==1) ans[0]=false;
    return ans;
}
template <class T> vector<T> sieve_prime(T x) {
    vector<bool> ans(x+1,true);
    ans[0]=ans[1]=false;
    for(T i = 2; i * i <= x; i++){
        if(ans[i]){
            for(T j=i*i;j<=x;j+=i){
                ans[j]=false;
            }
        }
    }
    return ans;
}
ll max(int x, ll y) { return max((ll)x, y); }
ll max(ll x, int y) { return max(x, (ll)y); }
int min(int x, ll y) { return min((ll)x, y); }
int min(ll x, int y) { return min(x, (ll)y); }
ll pow2(int i) { return 1LL << i; }
int topbit(signed t) { return t == 0 ? -1 : 31 - __builtin_clz(t); }
int topbit(ll t) { return t == 0 ? -1 : 63 - __builtin_clzll(t); }
int lowbit(signed a) { return a == 0 ? 32 : __builtin_ctz(a); }
int lowbit(ll a) { return a == 0 ? 64 : __builtin_ctzll(a); }
int popcount(uint64_t t) { return __builtin_popcountll(t); }
static inline uint64_t popcount64(uint64_t x) {
    uint64_t m1 = 0x5555555555555555ll;
    uint64_t m2 = 0x3333333333333333ll;
    uint64_t m4 = 0x0F0F0F0F0F0F0F0Fll;
    uint64_t h01 = 0x0101010101010101ll;
 
    x -= (x >> 1) & m1;
    x = (x & m2) + ((x >> 2) & m2);
    x = (x + (x >> 4)) & m4;
 
    return (x * h01) >> 56;
}
bool ispow2(int i) { return i && (i & -i) == i; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
istream& operator >> (istream &is, T_container &v) { 
   for(T &x : v) is >> x; return is;
}
#ifdef __SIZEOF_INT128__
ostream& operator << (ostream &os, __int128 const& value){
    static char buffer[64];
    int index = 0;
    __uint128_t T = (value < 0) ? (-(value + 1)) + __uint128_t(1) : value;
    if (value < 0) 
        os << '-';
    else if (T == 0)
        return os << '0';
    for(; T > 0; ++index){
        buffer[index] = static_cast<char>('0' + (T % 10));
        T /= 10;
    }    
    while(index > 0)
        os << buffer[--index];
    return os;
}
istream& operator >> (istream& is, __int128& T){
    static char buffer[64];
    is >> buffer;
    size_t len = strlen(buffer), index = 0;
    T = 0; int mul = 1;
    if (buffer[index] == '-')
        ++index, mul *= -1;
    for(; index < len; ++index)
        T = T * 10 + static_cast<int>(buffer[index] - '0');
    T *= mul;    
    return is;
}
#endif
 
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) { 
   return os << '(' << p.first << ", " << p.second << ')'; 
}
 
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> 
ostream& operator << (ostream &os, const T_container &v) { 
   os << '{'; string sep; 
   for (const T &x : v) os << sep << x, sep = ", "; 
   return os << '}'; 
}
template<class P, class Q = vector<P>, class R = less<P> > ostream& operator << (ostream& out, priority_queue<P, Q, R> const& M){
    static priority_queue<P, Q, R> U;
    U = M;
    out << "{ ";
    while(!U.empty())
        out << U.top() << " ", U.pop();
    return (out << "}");
}
template<class P> ostream& operator << (ostream& out, queue<P> const& M){
    static queue<P> U;
    U = M;
    out << "{"; string sep;
    while(!U.empty()){
        out << sep << U.front(); sep = ", "; U.pop();
    }
    return (out << "}");
}
ll gcdex(ll a,ll b,ll &x,ll &y){
    // ax+by=gcd(a,b)
    if(b==0){
        y=0;
        x=1;
        return a;
    }
    ll x1,y1;
    ll d=gcdex(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
ll gcd(ll a , ll b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
const ll inf=1e18;
// 1) Solutions are simple.

// 2) Proofs are simple.

// 3) Implementations are simple.
// [a1 a2 a3] [b1 b2 b3 b4] 
// alice (x,y) st x | y 
// bob (x,y) st x donot divide y 
// array a is fixed (no change at all) 
// each time |b| decreases by 1
// from the set of B , these must exist atleast one bi 
// such that aj | bi or aj donot divide bi 
// each one is making their own job difficult 
// there are red and green element in array  B
// green elements have a divisor in [a] 
// alice must always choose a green element or orange element
// some element are painted oragne which is divisible by all ai 
// bob can can choose a non-orange element 
// set of orange , red and green 
// bob can select red and green 
// alice can select orange and green 
// alice cannot select red 
// bob cannot select orange
// red for bob and orange for alice (specific) 
// green is common to both 
// if no red => alice wins 
// if no orange => bob wins 
// else depends of cnt .. red > orange => bob
// if orange > red => alice
// need the cnt of red , orange and green elements 
// ai < = (n+m) <= 2*10^6
    // bi <= 2*10^6
    // for each ai , j*ai <= MAX(b) 
    // j <= MAX(b)/ai 
    // (i=1 to i=n)sigma(MAX(b)/ai)
    // go with unique ais
    // MAX(b)*sigma(1/ai) 
    // should be fine 
    // red (0) , green ( 1) ,ornage(2)
// 
void solve()
{
    //your code
    int n,m;
    cin>>n>>m;
    vc<int> a(n),b(m);
    cin>>a>>b;

    sort(all(a));
    sort(all(b)) ;
    
    vc<pll>A;
    REP1(i,n){
        ll j = i ;
        while(j+1<n && a[j+1]==a[j]) j++;
        A.pb({a[i],j-i+1}) ;
        i = j;
    }
    // map<ll,ll>mp,cnt;
    vc<int>mp(b[m-1]+1);
    vc<int>cnt(b[m-1]+1);
    REP1(i,m) mp[b[i]] = 1;
    REP1(i,A.size()){
        for(int j=A[i].fi;j<=b[m-1];j+=A[i].fi){
            if(mp[j]){
                cnt[j] += A[i].se;
            }
        }
    }
    vc<int> c(m) ;
    REP1(i,m){
        if(cnt[b[i]]){
            if(cnt[b[i]]==n) c[i] = 2;
            else c[i] = 1;
        }
    }
    ll red=0,green=0,orange=0;
    REP1(i,m){
        if(c[i]==0) red++;
        else if(c[i]==1) green++;
        else orange++;
    }
    // cout<<"red"<<" "<<"orange"<<" "<<"green"<<endl;
    // cout<<red<<" "<<orange<<" "<<green<<endl;
    if(green & 1){
        if(red > orange){
            cout<<"Bob"<<endl;
        }
        else if(red < orange){
            cout<<"Alice"<<endl;
        }
        else cout<<"Alice"<<endl; 
    }
    else{
        if(red > orange){
            cout<<"Bob"<<endl;
        }
        else if(red < orange){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl; 
    }
    // if(red > orange){
    //         cout<<"Bob"<<endl;
    //     }
    //     else if(red < orange){
    //         cout<<"Alice"<<endl;
    //     }
    //     else cout<<"Bob"<<endl;  
    


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}