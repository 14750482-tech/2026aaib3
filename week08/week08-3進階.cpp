// week08-3進階.cpp 學習計畫Matrix第3題有點難
// leetcode 54. Spiral Matrix旋轉矩陣 繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size(); // 長 寬
        vector<int> ans;
        int left = 0, right = N - 1, up = 0, down = M - 1; // 四個變數
        // 中間要繞圈圈 4個方向 往右下左上
        while (ans.size() < M * N) { //

            for (int j = left; j <= right; j++) ans.push_back(matrix[up][j]);
            up++;

            for (int i = up; i <= down; i++)ans.push_back(matrix[i][right]);
            right--;  // 走完了最右邊這條，整條刪掉

            if(ans.size()==M*N)break;//湊齊了

            for (int j = right; j >= left; j--) ans.push_back(matrix[down][j]);
            down--;   // 走完了最下面這條，整條刪掉

            for (int i = down; i >= up; i--) ans.push_back(matrix[i][left]);
            left++; // 走完了最左邊這條，整條刪掉

        }
            return ans;
    }
};
