class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
    int n = h.size();
	stack<pair<int, int>> s;
	vector<int> r(n, 0);
	for(int i=n-1; i>=0; i--) {
		while(!s.empty() && s.top().first >= h[i]) {
			s.pop();
		}
		if(s.empty()) {
			r[i] = n;
		}
		else {
			r[i] = s.top().second;
		}
		s.push({h[i], i});
	}
	while(!s.empty()) {
		s.pop();
	}
	vector<int> l(n, 0);
	for(int i=0; i<n; i++) {
		while(!s.empty() && s.top().first >= h[i]) {
			s.pop();
		}
		if(s.empty()) {
			l[i] = -1;
		}
		else {
			l[i] = s.top().second;
		}
		s.push({h[i], i});
	}
	int maxArea = INT_MIN;
	for(int i=0; i<n; i++) {
		int width = r[i]-l[i]-1;
		int area = h[i]*width;
		maxArea = max(area, maxArea);
	}
	return maxArea;
    }
};