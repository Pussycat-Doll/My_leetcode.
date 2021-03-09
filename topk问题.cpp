class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        map<string,int> countmap;
        for(auto e: words)
        {
            ++countmap[e];
        }
        multimap<int,string,greater<int>> sortmap;
        for(auto e:countmap)
        {
            sortmap.insert(make_pair(e.second,e.first));
        }
        auto it = sortmap.begin();
        vector<string> res;
        while(it != sortmap.end() && k--)
        {
            res.push_back(it->second);
            ++it;
        }
        return res;
    }
};
