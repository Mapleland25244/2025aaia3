/*
week04-3.cpp
LeetCode �ǲ߭p�e 66. Plus One
1 2 3
    4 �̥k��}�l�A +1 ����
4 3 2 1
      2 �̥k��}�l�A +1 ����
9 4 9
    0 ���i��A����? ���i�H return �~��
  5 �̥k�� +1 ����
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); // �}�C�j�p
        for(int i=N-1;i>=0;i--){ // �˹L�Ӫ��j��
            if(digits[i] == 9){ // �n�i��A�·ФF(���൲��)
                digits[i] = 0; // �]�� 0 �A�~�򰵡A������
            }else{ // ���ζi�쪺�ܡA����+1
                digits[i]++; // +1
                return digits; // ���� return �^�h
            }
        }
        digits.insert(digits.begin(), 1); //��9�i�짹����̫ᥪ�� + 1
        return digits;
    }
};
