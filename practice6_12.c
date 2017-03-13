//
//  main.c
//  practice6_12
//
//  Created by 余言 on 2017/1/29.
//  Copyright © 2017年 fisher. All rights reserved.
//

#include <stdio.h>

double firstCal(int i);
double secondCal(int i);
int main(int argc, const char * argv[]) {
    int input;
    printf("please input the round?\n");
    scanf("%d",&input);
    
    while(input >0){
        printf("the first cal is %lf\n",firstCal(input));
        printf("the second cal is %lf\n",secondCal(input));
        scanf("%d",&input);
    }
    return 0;
}

double firstCal(int i){
    double sum=0;
    for (int j=1;j<=i;j++)
        sum += 1.0/j;
    return sum;
}

double secondCal(int i){
    double sum=0;
    int sign=1;
    for (int j=1;j<=i;j++){
        sum += sign*1.0/j;
        sign *= -1;
    }
    return sum;
}
