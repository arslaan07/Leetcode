class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroid) {
        stack<int> s;
	for(int ast : asteroid) {
		if(ast < 0 && !s.empty() && s.top() > 0) {
			// collision
			bool flag = true; // assume current asteroid will not be destroyed
			while(!s.empty() && s.top() > 0) {
				if(s.top() < abs(ast)) {
					// asteroid on top of stack will be destroyed
					s.pop();
				}
				else if(s.top() > abs(ast)) {
					// current asteroid will be destroyed
					flag = false;
					break;
				}
				else {
					// asteroid on top of stack and current asteroid will be destroyed
					flag = false;
					s.pop();
					break;
				}
			}
			if(flag == true) {
				// current asteroid was not destroyed
				s.push(ast);
			}
		}
		else {
			// no collision
			s.push(ast);
		}
	}
	vector<int> out;
	while(!s.empty()) {
		out.push_back(s.top());
		s.pop();
	}
	reverse(out.begin(), out.end());
    return out;
    }
};