//week07-2.cpp 學習計畫 第一題
//leetcode 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;//我們的資料結構(陣列)
        for(string s:operations){
            if(s=="+"){//把前兩筆相加塞到後面
                int now=a[a.size()-1]+a[a.size()-2];
                a.push_back(now);
            }else if(s=="D"){//把錢一筆變兩倍塞到後面
                int now=a[a.size()-1]*2;
                a.push_back(now);
            }else if(s=="C"){//把最後一筆 移除
                a.pop_back();//吐掉最後一筆
            }else{//把字串便整數，塞爆後面
                int now=stoi(s);//(把字串s便整數)
                a.push_back(now);
            }
        }
        //把陣列的所有資料 加起來
        int ans=0;
        for(int now:a)ans+=now;
        return ans;
    }
};
