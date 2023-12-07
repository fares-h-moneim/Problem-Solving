class Solution {
public:
    int totalMoney(int n) {
      float sum = 0, i  = 0;
      for(; i<n/7; i++) sum += (float)(7.0/2)*(2*(i+1)+(7-1));
      if(n%7!=0) sum += (float)((n%7)/2.0)*(2*(i+1)+((n%7)-1)); 
      return sum;
    }
};
