class RandomizedSet {
public:
    std::unordered_map<int,int>hash;
    RandomizedSet() {
        hash.clear();
    }
    
    bool insert(int val) {
        if(hash.find(val)!=hash.end())return false;
        hash[val]=1;
        return true;
    }
    
    bool remove(int val) {
         if(hash.find(val)!=hash.end()){
            hash.erase(hash.find(val));
            return true;
         }
         return false;
    }
    
    int getRandom() {
        int r = rand() % hash.size();
auto it = hash.begin();
std::advance(it, r);  // ⛔ this is O(r), not O(1)
return it->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */