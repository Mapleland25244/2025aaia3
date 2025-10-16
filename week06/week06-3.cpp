// week06-3.cpp
// LeetCode 學習計畫 Simulation 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
            vector<int> a;
            for(string op : operations){ // for-each 迴圈
                // cout << op << endl; 試試看，會印啥
                if(op == "+"){ // 把末兩數相加，再塞回去
                    int temp = a.back(); // 先記下最後一項
                    a.pop_back(); // 暫時吐掉它
                    int temp2 = a.back(); // 再下最後第二項
                    a.push_back(temp); // 把剛剛最後一項塞回去
                    a.push_back(temp+temp2); // 兩數相加，再塞回去
                } else if(op == "D") { // 複製最後1位，再乘 2 倍，再塞回去
                    a.push_back(a.back()*2);
                } else if(op == "C") { // 吐掉最後一位
                    a.pop_back();
                } else{ // 把stoi(op) 整數，塞回去
                    a.push_back(stoi(op));
                }
            } // 最後，用 for 迴圈，把陣列 a 的值，全部加起來
            int ans = 0;
            for(int now : a){ // for-each 迴圈 等價於 for(int i=0;i<a.size();i++)
                ans += now;
            }
            return ans; // 先隨便 return 0　等等改
    }
};
