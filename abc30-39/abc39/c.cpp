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

int main(){

    string s;
    cin >> s;
    int check1 = 0;
    int check2 = 0;
    int kenban = 0;

    int Do = 0;
    int Re = 2;
    int Mi = 4;
    int Fa = 5;
    int So = 7;
    int Ra = 9;
    int Si = 11;

    //最初の白鍵の連続を確認
    for(int i=1; i<s.size(); i++){
        if(s[i] == 'W' && s[i-1] == 'W') {
            check1 = i-1;
            break;
        }
    }

    //次の白鍵の連続をチェック
    for(int j=1; j<s.size(); j++){
        if(j == check1+1) continue;
        if(s[j] == 'W' && s[j-1] == 'W'){
            check2 = j-1;
            break;
        }
    }

    //二回目の白鍵の連続-1回目の白鍵の連続で自分がいる鍵盤を特定する
    if(check2-check1 == 7){
        kenban = Mi - check1;
    }else if(check2-check1 == 5){
        kenban = Si - check1;
    }

    if(kenban == 0) cout << "Do" << endl;
    else if(kenban == 2) cout << "Re" << endl;
    else if(kenban == 4) cout << "Mi" << endl;
    else if(kenban == 5) cout << "Fa" << endl;
    else if(kenban == 7) cout << "So" << endl;
    else if(kenban == 9) cout << "La" << endl;
    else if(kenban == 11) cout << "Si" << endl;


}