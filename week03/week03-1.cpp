/// week03-1.cpp �ǲ� C++ �}�C vector<int> a;
/// File-Save As �s�ɮɡA�n���ɦW�g��
#include <iostream> /// C++ �� cin cout
#include <vector> /// C++ �� �}�C vector
using namespace std;
int main(){
    vector<int> a(2); /// ���Ӱ}�C�A�̭���2�� (�}�C��size �j�p�O 2 )
    for(int i=0;i<a.size();i++){
        cout << a[i] << ' ';
    }
    cout << endl; /// ����

    a.push_back(95); /// �� 99 ����}�C a ����᭱
    a.push_back(77); /// �� 77 ����}�C a ����᭱

    for(int i=0;i<a.size();i++){
        cout << a[i] << ' '; /// �L�X�}�C
    }
    cout << endl; /// ����
}
