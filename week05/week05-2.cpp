/// week05-2.cpp
/// ���x stringstream
#include <iostream>
#include <sstream> /// stringstream �ݭn�L
#include <string> /// �ڭ̪��r�� string
using namespace std;
int main(){
    cout << "�п�J�@�q�^��A�̭��i���Ů�: ";
    string s; /// �r�� s
    getline(cin, s); /// �@��Ū�J�@���A��JS
    cout << "Ū�J�Fs�r��: " << s << endl;

    stringstream ss(s); /// �N�r�� s �ܦ� ss
    string word; /// �r�� word
    while(ss >> word){
        cout << "��1�Ӧr: " << word << endl;
    }
}
