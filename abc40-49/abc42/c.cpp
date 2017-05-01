#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <deque>
#include <ctime>

using namespace std;

#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define pb push_back
#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second
#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7;
double EPS = 1e-8;
const double PI = acos(-1);

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int can[10];

int main(){

    int n, k;
    cin >> n >> k;
    int d[30];
    vector<int> v;
    string s, s2;

    for(int i=0; i<k; i++){
        cin >> d[i];
        can[d[i]] = 1;
    }

    //使用可能のものがvectorにはいっている
    for(int j=0; j<10; j++){
        if(can[j] != 1) v.pb(j);
    }

    //一番大きい数字を作成する
    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        s += to_string(v[i]);
    }

    if(stoi(s) < n){
        //最小の数値+けたふやし

        string first;

        for(int i=0; i<v.size(); i++){
            s2 += to_string(v[i]);
        }

        if(s2[0] == '0'){
            //0をうしろにまわす
            s2.erase(s2.begin());
            s2.push_back('0');
            first = '0';
        }else{
            //先頭要素
            first = s2[0];
        }

        int pay = 0;

        while(n-pay > 0){

            string ns = s2 + first;
            pay = stoi(ns);
        }

        cout << pay << endl;
    }else{

        int pay = stoi(s);

        while(pay-n > 0){



        }

    }



}