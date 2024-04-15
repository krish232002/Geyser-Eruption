#include <bits/stdc++.h>
using namespace std;
void hack_code(int arr[], int n, int* x, int* y){

int X = arr[0] ;

int no;

int i;

*x = 0;

*y = 0;
for ( i = 1; i < n ;i++)
X ^= arr[i];

no= X & ~(X - 1);
for ( i = 0; i < n ;i++){
    if ( arr [i]& no)

*x =*x ^ arr[i];

else {
*y = *y ^ arr[i];

}

}

}

int main(){

int arr[]= {2, 5, 7, 9, 11, 2, 4, 11 };

int n = sizeof(arr) / sizeof(*arr);
int* x= new int[(sizeof(int))];
int* y = new int[(sizeof(int))];
hack_code(arr, n, x, y);
cout << *x << " and " << *y;
}



