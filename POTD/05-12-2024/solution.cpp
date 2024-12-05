----BRUTE FORCE------
  class Solution {
public:
    bool solve(string &start, string &target, unordered_map<string, bool> &mp) {
        int n = start.length();
        if (start == target) return true;
        
        // memo
        if (mp.count(start)) {
            return mp[start];
        }

        for (int i = 0; i < n; i++) {
            if (start[i] == 'L' && i > 0 && start[i - 1] == '_') {
                swap(start[i], start[i - 1]);
                if (solve(start, target, mp)) {
                    return true;
                }
                swap(start[i], start[i - 1]);
            }
            else if (start[i] == 'R' && i < n - 1 && start[i + 1] == '_') {
                swap(start[i], start[i + 1]);
                if (solve(start, target, mp)) {
                    return true;
                }
                swap(start[i], start[i + 1]);
            }
        }
        
        return mp[start] = false;
        
    }

    bool canChange(string start, string target) {
        int n = start.length();
        unordered_map<string, bool> mp;
        return solve(start, target, mp);
    }
};
  
--OPTIMAL SOLUTION---
  class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.length();
        int i=0,j=0;
        while(i<n ||j<n){
            while(i<n && start[i]=='_'){
                i++;
            }
            while(j<n && target[j]=='_'){
                j++;
            }
            // anyone outof bound case
            if(i==n ||j==n){
                return i==n &&j==n;
            }
            if(start[i]!=target[j])return false;
            if(start[i]=='L'&&i<j)return false;
            if(start[i]=='R'&&i>j)return false;
            i++;
            j++;

        }
        return true;
    }
};
