/*int getSecondLargest(vector<int> &arr) {
        if(arr.size()<2){
            return -1;
        }
        int largest =arr[0],secondlargest=INT_MIN;
        for (int num :arr){
            if(num>largest){
                secondlargest=largest;
                largest=num;
            }
            else if (num > secondlargest && num < largest) {
            secondlargest = num; }
        }
        if(secondlargest==INT_MIN){
            return -1;
        }
        return secondlargest ;
    }*/