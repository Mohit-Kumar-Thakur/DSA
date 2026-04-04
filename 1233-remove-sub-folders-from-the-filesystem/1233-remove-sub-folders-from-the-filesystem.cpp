class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string> res;
        res.push_back(folder[0]);
        for(int i =1;i<folder.size();i++){
            string last = res.back();

            if(folder[i].substr(0,last.size()) == last && folder[i][last.size()] == '/') continue;
            res.push_back(folder[i]);
        }
        return res;
    }
};