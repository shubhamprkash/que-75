class Solution {
public:
    int maxArea(vector<int>& h) {
        int water=0, max_water=0;
        int s=0, e=h.size()-1;
        while(s<e){
            int dist=e-s;
             int min_height = min(h[e], h[s]);
                     water = dist * min_height;
                  max_water = max(water, max_water);
            if(h[s]<h[e])
                s++;
            else
                e--;
        }
        return max_water;
    }
};
