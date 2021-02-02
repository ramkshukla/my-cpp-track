// Block swap algorithm for array rotation

#include <iostream>
using namespace std;

void swaparr(int arr[], int fi, int si, int d){
    int i, temp;
    for (i=0; i<d; i++){
        temp = arr[fi+i];
        arr[fi+i] = arr[si+i];
        arr[si+i] = temp;
    }
}
void leftrotate(int arr[], int d, int n){
    if (d==0 || d==n)
        return;
    if (n-d==d){
        swaparr(arr, 0, n-d, d);
        return;
    }
    if (d<n-d){
        swaparr(arr, 0, n-d, d);
        leftrotate(arr, d, n-d);
    }
    else{
        swaparr(arr, 0, d, n-d);
        leftrotate(arr+n-d, 2*d-n, d);
    }
}
void print(int arr[], int n){
    int i;
    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;

    leftrotate(arr, d, n);
    print(arr, n);

    return 0;
}