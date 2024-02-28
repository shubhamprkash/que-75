class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) 
    {
        vector<int> b;
        b.push_back(a[0]);
           for (int i=0;i<a.size();i++)
           {
            if(a[i+1]>a[i])
            b.push_back(a[i+1]);
            else if(a[i+1]<a[i])
            b.pop_back();
            else if(a[i+1]==(-a[i]));
            b.pop_back();
           }
           return b;
    }
};
