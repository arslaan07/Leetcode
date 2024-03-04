class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    stack<pair<int, int>> s;
	int n = heights.size();
	vector<int> rightAreas(n, 0);
	int width = 0;
	for(int i=n-1; i>=0; i--) {
		int x = heights[i];
		while(!s.empty() && s.top().first >= x) {
			s.pop();
		}
		if(s.empty()) {
			width = n-i;
		}
		else {
			width = s.top().second - i;
		}
		rightAreas[i] = x * width;
		s.push({x, i});
	}
    while(!s.empty()) {
		s.pop();
	}
	vector<int> leftAreas(n, 0);
	for(int i=0; i<=n-1; i++) {
		int x = heights[i];
		while(!s.empty() && s.top().first >= x) {
			s.pop();
		}
		if(s.empty()) {
			width = i-(-1)-1;
		}
		else {
			width = i-s.top().second-1;
		}
		leftAreas[i] = x * width;
		s.push({x, i});
	}
	for(int i=0; i<n; i++) {
		if(leftAreas[i] > 0) {
			rightAreas[i] += leftAreas[i];
		}
	}
	int maxArea = INT_MIN;
	for(auto area : rightAreas) {
		maxArea = max(area, maxArea);
	}
	return maxArea;
    }
};