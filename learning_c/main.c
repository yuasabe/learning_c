//
//  main.c
//  learning_c
//
//  Created by Yu Asabe on 2018/05/20.
//  Copyright © 2018 Yu Asabe. All rights reserved.
//

#include <stdio.h>

int main() {
    int test1;
    printf("Enter a number: ");
    scanf("%d",&test1);
    if(test1 < 0) {
        printf("The number is less than 0\n");
    } else {
        printf("hehe %d\n", test1);
    }
    return 0;
}
