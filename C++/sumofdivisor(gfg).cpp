/*class Solution {
  public:
    int sumOfDivisors(int n) {
        vector<int>sum_divisor(n + 1 ,0);
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                sum_divisor[j] += i;
            }
        }
        int total_sum=0;
        for(int i=1;i<=n;i++){
            total_sum += sum_divisor[i];
        }
        return total_sum;
    }*/