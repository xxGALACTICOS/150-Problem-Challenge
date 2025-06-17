class Solution {
public:
    int largestRectangleArea(vector<int>& bars) {
            // NOTE: you just need to detect the bars that you can make rectangle
    // start count these rects from the heighest bar in the stack
    stack<int>st;
    bars.push_back(0); // sentinal value
    int maxArea = 0;
    for(int i = 0;i < bars.size();i++){
        // move through the rect that after heighest bar
        while(!st.empty() && bars[i] < bars[st.top()]){
            int height = bars[st.top()];
            st.pop();
            // NOTE: if the stack is empty that means you don't have small rects can make rectangle with heighest so you make rect with itself
            int width = st.empty()? i : i - st.top() - 1;
            maxArea = max(maxArea , height * width);
        }
        st.push(i);
    }
    return maxArea;

    }
};
