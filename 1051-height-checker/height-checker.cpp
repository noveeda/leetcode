class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // 원본 벡터 복사
        vector<int> origin_height;
        for(int i = 0; i < heights.size(); i++) origin_height.push_back(heights[i]);

        // 벡터 버블 정렬
        for(int i = 0; i < heights.size() - 1; i++){
            for(int j = i+1; j < heights.size(); j++){
                if(heights[i] > heights[j]) {
                    int temp = heights[i];
                    heights[i] = heights[j];
                    heights[j] = temp;
                }
            }
        }


        // 비교 후 반환
        int cnt = 0;
        for(int i = 0; i < heights.size(); i++){
            if(origin_height[i] != heights[i]) ++cnt;
        }

        return cnt;
    }
};