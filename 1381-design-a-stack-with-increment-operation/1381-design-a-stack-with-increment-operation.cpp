class CustomStack {
    vector<int> stackk,inc;
    int n;
public:
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(n>stackk.size()){
            stackk.push_back(x);
            inc.push_back(0);
        }
    }
    
    int pop() {
        int i = stackk.size() - 1;
        if (i < 0) return -1;
        if (i > 0) inc[i - 1] += inc[i];
        int res = stackk[i] + inc[i];
        stackk.pop_back();
        inc.pop_back();
        return res;
    }
    
    void increment(int k, int val) {
        int i = min(k, (int)stackk.size()) - 1;
        if (i >= 0) inc[i] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */