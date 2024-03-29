﻿/////////////////////////////////////////////////////////////////////////////////////
//                                                //                               //
//          ███ █  █ ████ █  █ ███ ██ ██          //                               //
//          █   ██ █ █  █ █ █  █    ███           //                               //
//          ███ █ ██ ████ ██   ███   █            //   ####################        //
//            █ █  █ █  █ █ █  █     █            //   ##                ##        //
//          ███ █  █ █  █ █  █ ███   █            //   ##                ##        //
//                                                //   ##                ##        //
////////////////////////////////////////////////////   ##                ##        //
//                                                //   ##                ##        //
//          ███ ███ ███ ███                       //   ##     WHEN       ##        //
//           █  █   █    █                        //   ##     OUR        ##        //
//           █  ███ ███  █                        //   ##     TEAM       ##        //
//           █  █     █  █                        //   ##     TRYING     ##        //
//           █  ███ ███  █                        //   ##     TO         ##        //
//                                                //   ##     SOLVE      ##        //
//          ███ ███ ████ █   █                    //   ##     SOME       ##        //
//           █  █   █  █ ██ ██                    //   ##     PROBLEM    ##        //
//           █  ███ ████ █ █ █                    //   ##                ##        //
//           █  █   █  █ █   █                    //   ##                ##        //
//           █  ███ █  █ █   █                    //   ##                ##        //
//                                                //   ##            \########/    //
//          ████ █   ███ ████ ███ ███             //   ##             \######/     //
//          █  █ █   █   █  █ █   █               //   ##              \####/      //
//          ████ █   ███ ████ ███ ███             //   ##               \##/       //
//          █    █   █   █  █   █ █               //   ##                \/        //
//          █    ███ ███ █  █ ███ ███             //   ##            _________     //
//                                                //   ##           |WRONG    |    //
//         ███ ████ █  █ ████ ████ ███            //   ##           |ANSWER   |    //
//          █  █    ██ █ █  █ █  █ █              //   ############ |ON TEST 2|    //
//          █  █ ██ █ ██ █  █ ████ ███            //                               //
//          █  █  █ █  █ █  █ █ █  █              //                               //
//         ███ ████ █  █ ████ █ █  ███            //                               //
//                                                //                               //
/////////////////////////////////////////////////////////////////////////////////////

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <stack>
#include <iomanip> // setprecision(10)
#include <chrono>  // time of exec
#include <regex>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef short int si;
typedef unsigned short int usi;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<ull> vull;
typedef vector<vull> vvull;
#define vi2d(NAME, STRINGS, COLUMNS, SYMBOLS) vvi NAME(STRINGS, vi(COLUMNS, SYMBOLS))
#define vc2d(NAME, STRINGS, COLUMNS, SYMBOLS) vvc NAME(STRINGS, vc(COLUMNS, SYMBOLS))
#define vb2d(NAME, STRINGS, COLUMNS, SYMBOLS) vvb NAME(STRINGS, vb(COLUMNS, SYMBOLS))
#define fori(START, END) for(ll i = START; i < END; i++)
#define forj(START, END) for(ll j = START; j < END; j++)
#define fordij(START, END) for(ll dij = START; dij > END; dij--)
#define endl '\n'

const long double PI = 3.1415926535897932384626433832;

ll gcd(ll a, ll b) {
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}

bool sortbysec(const pair<int, int>& a,
	const pair<int, int>& b)
{
	return (a.second < b.second);
}

//#define GET_DURATION_TIME
//#define DEBUG

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifdef GET_DURATION_TIME
	auto get_duration_time_start = chrono::high_resolution_clock::now();
#endif // GET_DURATION_TIME	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
//--------------------------------------[S T A R T]--------------------------------------
	cout << "Hello world";
//----------------------------------------[E N D]----------------------------------------
#ifdef GET_DURATION_TIME
	auto get_duration_time_end = chrono::high_resolution_clock::now();
	chrono::duration<float> get_duration_time_duration = get_duration_time_end - get_duration_time_start;
	cout << endl << "Duration: " << get_duration_time_duration.count() << " sec" << endl;
#endif // GET_DURATION_TIME	
	return 0;
}