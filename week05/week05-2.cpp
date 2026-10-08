//week05-2.cpp 學習計畫Bulit-in Function第二題
//LeetCode 709. To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        //week02教過字串s的長度.length()
        for(int i=0;i<s.length();i++){//竹字母處理
            if(isupper(s[i])) s[i]= s[i]-'A'+'a';
        }//s[0]='h';//先試試看吧看起來就是錯的教你s[i]
        return s;//竟然直接送出去
    }
};
