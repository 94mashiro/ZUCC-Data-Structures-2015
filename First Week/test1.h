//
//  test1.h
//  CPP_01
//
//  Created by Smoogle Wong on 15/3/12.
//  Copyright (c) 2015年 Smoogle Wong. All rights reserved.
//


bool isprime(int a){
    int n = sqrt(a);
    if(a == 1) return false;
    for(int i = 2; i <= n; i++){
        if(!(a%i)) return false;
    }
    return true;
}

void aMAX_MIN_AVE(int *a, int n, int &max, int &min, int &aver)
{
    int sum=min=max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
        sum += a[i];
    }
    aver=sum/n;
}

int prime_SUM(int *a, int n) {
    int i,sum = 0;
    for(i = 0; i < n; i++)
        if(isprime(a[i])) sum += a[i];
    return sum;
}

void aSORT(int *a, int n)
{
    int temp;
    for (int i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}