#include <iostream>

using namespace std;

int main()
{
    int arr[]={3,-1,8,-2,-3};
    int A[5];
    int b=1;
    for(int i=0;i<5;i++){
        A[i]=arr[i]-1;

    }
    for(int i=0;i<5;i++){
     for(int j=i+1;j<5;i++){
        if(abs(A[i])==abs(A[j])){
          /*  if(A[i]>A[j]){
                arr[i]=arr[i]-A[i];

            }
            else{
                arr[j]=arr[j]+A[j];

            }*/

        }
     }
    }
    for(int k=0;k<5;k++){
        cout<<A[k]<<"fad"<<endl;
    }
    return 0;
}
