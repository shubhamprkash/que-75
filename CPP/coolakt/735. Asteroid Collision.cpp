class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;
        for(int x : asteroids){
            bool survive = true;
            if(x > 0)
                stack.push(x);
            else{
                while(!stack.empty()){
                    int y = stack.top();
                    if(y < 0) break;
                    else if(x + y == 0){
                        survive = false;
                        stack.pop();
                        break;
                    }
                    else if(x + y < 0){
                        stack.pop();
                    }
                    else{
                        survive = false;
                        break;
                    }
                }
                if(survive){
                    stack.push(x);
                }
            }
        }
        int n = stack.size();
        vector<int> ans(n); 
        for(int i = n - 1; i >= 0; i--){
            ans[i] = stack.top(); 
            stack.pop();
        }
        return ans;
    }
};
