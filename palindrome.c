bool isPalindrome(int x) {
 {
    long int  r,sum=0,temp=x; // sum for revesed 
        ;
        while(temp>0)
        {
            r=temp%10;  //last digit 
            sum=sum*10+r; // add last digit to rvsed num 
            temp=temp/10; //delete last digit from og num 
        }
        if(x==sum)
            return true;
        else
            return false;
}
}