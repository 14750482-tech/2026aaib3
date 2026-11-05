//week09-1b.cpp學習計畫地2題
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N=mat.size();
        int ans=0;
        //迴圈 把矩陣的對角線加起來 方法1
        for(int i=0;i<N;i++){//左上右下對角線
           for(int j=0;j<N;j++){
                if(i==j||i+j==N-1)ans+=mat[i][j];
           }
        }
        return ans;
    }
};
