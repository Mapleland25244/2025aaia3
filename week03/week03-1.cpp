/// week03-1.cpp 學習 C++ 陣列 vector<int> a;
/// File-Save As 存檔時，要把檔名寫齊
#include <iostream> /// C++ 的 cin cout
#include <vector> /// C++ 的 陣列 vector
using namespace std;
int main(){
    vector<int> a(2); /// 有個陣列，裡面有2樓 (陣列的size 大小是 2 )
    for(int i=0;i<a.size();i++){
        cout << a[i] << ' ';
    }
    cout << endl; /// 跳行

    a.push_back(95); /// 把 99 推到陣列 a 的更後面
    a.push_back(77); /// 把 77 推到陣列 a 的更後面

    for(int i=0;i<a.size();i++){
        cout << a[i] << ' '; /// 印出陣列
    }
    cout << endl; /// 跳行
}
