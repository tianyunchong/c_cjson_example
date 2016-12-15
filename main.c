/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: zyh
 *
 * Created on 2016年12月13日, 下午4:28
 */

#include <stdio.h>
#include <stdlib.h>
#include <cjson/cJSON.h>
/*
 * 
 */
int main(int argc, char** argv) {
    char * str = "{\"test\":{\"aaa\":11,\"bbb\":21},\"ccc\":223}";
    cJSON * root = cJSON_Parse(str);
    //cJSON *format = cJSON_GetObjectItem(root, "format");
    int ccc = cJSON_GetObjectItem(root, "ccc")->valueint;
    printf("%d\n", ccc);
    return (EXIT_SUCCESS);
}

