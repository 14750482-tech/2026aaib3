//week01-3.cpp 學習計畫 Basic 第3題
//Leetcode 28. Find the Index of the First Occurrence in a String
//大海撈針(在一堆稻草裡 找到一支針)
//寫程式 只要會3個東西:if判斷 for迴圈 函式

class Solution {
public:
    int strStr(string haystack, string needle) {
        //找到字串的長度.leagth()函式
        int N1=haystack.length(),N2= needle.length();
        for(int i=0; i<=N1-N2;i++){
            if(haystack.substr(i,N2)==needle) return i;
            //字串的小字串.substr(i開始,長度)vs.needle 相同,找到答案!
        }
        return -1;//找不到答案,return-1
    }
};
