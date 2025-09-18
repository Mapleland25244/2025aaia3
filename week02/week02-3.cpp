/// week02-3.cpp 使用 C++ 11 的新版的字串 stoi()功能
/// 在CodeBlocks裡，必須開啟Settings-Compiler...把C++11 開啟
/// SOIT106_ADVANCE_001 Using C++
#include <iostream> /// cin cout 讀入資料、印出資料
#include <String> /// string 字串的功能
using namespace std; /// 使用「命名空間」 標準的 std

int main(){
	string a; /// 宣告字串 a
	string ans; /// 讀入字串 a

	cin >> a; /// 宣告字串 ans 放答案的
	int N = a.length(); /// 字串a長度
	for(int i=N-1;i>=0;i--){ /// 倒過來的迴圈
		ans += a[i]; /// 在迴圈裡，把 a[i] 塞到 ans 的後面
	}

	cout << stoi(a) << '+' << stoi(ans) << '='
	<< stoi(a)+stoi(ans) << endl;
	/// stoi() string to integer
}
