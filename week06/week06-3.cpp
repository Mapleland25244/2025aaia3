// week06-3.cpp
// LeetCode �ǲ߭p�e Simulation 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
            vector<int> a;
            for(string op : operations){ // for-each �j��
                // cout << op << endl; �ոլݡA�|�Lԣ
                if(op == "+"){ // �⥽��Ƭۥ[�A�A��^�h
                    int temp = a.back(); // ���O�U�̫�@��
                    a.pop_back(); // �ȮɦR����
                    int temp2 = a.back(); // �A�U�̫�ĤG��
                    a.push_back(temp); // ����̫�@����^�h
                    a.push_back(temp+temp2); // ��Ƭۥ[�A�A��^�h
                } else if(op == "D") { // �ƻs�̫�1��A�A�� 2 ���A�A��^�h
                    a.push_back(a.back()*2);
                } else if(op == "C") { // �R���̫�@��
                    a.pop_back();
                } else{ // ��stoi(op) ��ơA��^�h
                    a.push_back(stoi(op));
                }
            } // �̫�A�� for �j��A��}�C a ���ȡA�����[�_��
            int ans = 0;
            for(int now : a){ // for-each �j�� ������ for(int i=0;i<a.size();i++)
                ans += now;
            }
            return ans; // ���H�K return 0�@������
    }
};
