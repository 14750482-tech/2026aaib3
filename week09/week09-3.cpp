//week09-3學習計畫第4題
//leetcode 73. Set Matrix Zeroes
//遇到0把行直條都改成0
class Solution {
public:
    //沒有reture 因為inplace直接改matrix
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        vector<int>left(M);
        vector<int>up(N);
        //兩個步驟1打勾勾2在汙染整條
        for(int i=0;i<M;i++){//左手i對應M
            for(int j=0;j<N;j++){//右手j對應N
                if(matrix[i][j]==0){//遇到0要打勾勾
                    left[i]=1;//打勾勾
                    up[j]=1;//打勾勾
                }
            }
        }
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(left[i]==1||up[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
