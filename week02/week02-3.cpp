/// week02-3.cpp �ϥ� C++ 11 ���s�����r�� stoi()�\��
/// �bCodeBlocks�̡A�����}��Settings-Compiler...��C++11 �}��
/// SOIT106_ADVANCE_001 Using C++
#include <iostream> /// cin cout Ū�J��ơB�L�X���
#include <String> /// string �r�ꪺ�\��
using namespace std; /// �ϥΡu�R�W�Ŷ��v �зǪ� std

int main(){
	string a; /// �ŧi�r�� a
	string ans; /// Ū�J�r�� a

	cin >> a; /// �ŧi�r�� ans �񵪮ת�
	int N = a.length(); /// �r��a����
	for(int i=N-1;i>=0;i--){ /// �˹L�Ӫ��j��
		ans += a[i]; /// �b�j��̡A�� a[i] ��� ans ���᭱
	}

	cout << stoi(a) << '+' << stoi(ans) << '='
	<< stoi(a)+stoi(ans) << endl;
	/// stoi() string to integer
}
