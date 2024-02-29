#include<iostream>
using namespace std;


 int main(){
     long long m,n,missingNum, sumofArray=0,totallSum=0;
     cin>>m;
     totallSum = (m*(m+1)/2);

     for (int i=0;i<m-1;i++){
        cin>>n;
        sumofArray += n;
     }
      missingNum = totallSum - sumofArray;
     cout<< missingNum;

 return 0;
 }
