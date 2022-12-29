class Solution {
    struct node {
        int no;
        int freq;
        node(int a,int b) // Constructor for value initialization for each node
        {
            no = a;
            freq = b;
        }
    };
    struct compare {    // Maintains MAX-HEAP based on frequency
        bool operator()(node const& a, node const& b)
        {
            return a.freq < b.freq;
        }
};

public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;   
        for(int ele : nums)
            m[ele]+=1;

        priority_queue<node,vector<node>,compare> heap;
        for(auto it : m)
            heap.push(node(it.first,it.second));
        
        vector<int> ans;
   
        while(k--)  
        {
            node temp = heap.top();
            heap.pop();
            ans.push_back(temp.no);
        }

        return ans;
    }
};