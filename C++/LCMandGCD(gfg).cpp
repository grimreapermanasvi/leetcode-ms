/*Class Solution {
  public:
  int calculateGCD(int a, int b){
      while(b!=0){
      int temp=b;
      b=a%b;
      a=temp;
      }
  }
    vector<int> lcmAndGcd(int a, int b) {
        if(a==0||b==0){
            return{0,(a,b)};
        }
        int gcd=calculateGCD(a,b);
        int lcm= (a/gcd)*b;
        return{lcm,gcd};
    }*/