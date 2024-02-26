class Solution {
public:
    string predictPartyVictory(string senate) {
            queue<int> rq, dq;
        for(int i=0; i<senate.size(); i++)
        {
            if(senate[i]=='R')
                rq.push(i);
            else
                dq.push(i);
        }

        while(!rq.empty() && !dq.empty())
        {
            int ri=rq.front();
            rq.pop();
            int di=dq.front();

            dq.pop();

            if(di<ri)
            {
                dq.push(di+senate.size());
            }
            else  rq.push(ri+senate.size());
        }

        return dq.empty()?"Radiant" : "Dire";
        
    }
};
