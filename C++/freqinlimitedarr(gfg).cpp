/*void frequencyCount(vector<int>& arr,int N, int P)
    {  
        vector<int> hashmap(N + 1, 0);
        
        for(int i = 0; i < N; i++) {
            if(arr[i] <= N) {
                hashmap[arr[i]]++;
            }
        }
        
        for(int i = 0; i < N; i++) {
            arr[i] = hashmap[i + 1];
        }
    }*/