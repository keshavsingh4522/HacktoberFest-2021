//Problem: https://leetcode.com/problems/task-scheduler/
//Level: Medium 

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int N = tasks.size();
        int A[26]={0};
        for(int i=0;i<N;i++){
            A[tasks[i]-'A']++;
        }
        int maxi=INT_MIN;
        int maxc;
        for(int i=0;i<26;i++){
            if(A[i]>maxi){
                maxi = A[i];
                maxc = i;
            }
        }
        int count = maxi;
        int sameFreq =0;
        for(int i=0;i<26;i++){
            if(A[i]==maxi){
                sameFreq++;
            }
        }
        
        int partCount = A[maxc]-1;
        int emptySlots = partCount*(n-(sameFreq-1));
        int availableTasks = N-(A[maxc]*sameFreq);
        int idles = max(0, emptySlots - availableTasks);
        int result = N + idles;
        return result;
    }
};
