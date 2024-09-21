/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 #include<bits/stdc++.h>
int solve(int* A, int n1, int B) {
    int xr =0;
    map<int,int>mpp;
    mpp[xr]++;
    int cnt =0;
    for(int i =0;i<n1;i++){
        xr =xr ^ A[i];
        int x = xr^B;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
