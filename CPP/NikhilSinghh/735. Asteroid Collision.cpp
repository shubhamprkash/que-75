class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;
        vector<int> ans;
        if(asteroids.size()<1)return {};    
        for(int i=0;i<asteroids.size();i++){
            s.push(asteroids[i]);
            while(s.size()>=2){
                int temp=s.top();
                s.pop();
                if(temp>=0 && s.top()<0){
                    s.push(temp);
                    break;
                }
                else if(temp<=0 && s.top()>0){
                    if(abs(temp)>s.top()){
                        s.pop();
                        s.push(temp);

                    }
                    else if(abs(temp)==abs(s.top())){
                        s.pop();
                    }
                }
                else{
                    s.push(temp);
                    break;
                }
            }
        }
        while(!s.empty()){
            int a=s.top();
            s.pop();
            ans.push_back(a);
        }
        reverse(ans.begin(),ans.end());

        return ans;  
    }
};
