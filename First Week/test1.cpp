//
//  main.cpp
//  CPP_01
//
//  Created by Smoogle Wong on 15/3/12.
//  Copyright (c) 2015年 Smoogle Wong. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include "test1.h"
using namespace std;

int main()
{
    int c,n,a[1000],min,max,aver;
    int flag = 1;
    cout<<"请输入数据数量: ";
    cin>>n;
    cout<<"请依次输入数据: "<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    while(flag){
        cout<<"请选择功能: 1.求数据中最小值最大值和平均值 2.求数据中所有素数之和 3.输出从小到大排序的数据 4.退出 "<<endl;
        cin>>c;
        switch (c) {
            case 1: {
                aMAX_MIN_AVE(a, n, max,min,aver);
                cout<<"最小值: "<<min<<" 最大值: "<<max<<" 平均值: "<<aver<<endl;
                break;
            }
            case 2: {
                cout<<"数据中素数之和为: "<<prime_SUM(a, n)<<endl;
                break;
            }
            case 3: {
                aSORT(a, n);
                cout<<"排序后的数据为: ";
                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                break;
            }
            case 4: {
                flag = 0;
                cout<<"谢谢使用！"<<endl;
                break;
            }
            default: {
                cout<<"输入错误，请重新输入！";
                break;
            }
        }
    }
    return 0;
}