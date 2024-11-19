#pragma once

#define MAX_NAME_LEN 20

typedef struct r{
    char name[MAX_NAME_LEN];//用户名
    int time;//完成游戏所花费的时间
    char play_time[100];//游玩日期
    bool finish = false;//是否完成
    int mine_num;//扫出来的雷数
    struct r* nxet;//用于构建以链表为依托的数据库的nxet指针
    int seed;//游戏生成的种子(具体问徐昌明，我也不太懂)
}result,*resultptr;
//由于技术限制，不同难度的数据应该分别存储在不同的链表中，便于排序；当然具体排序的逻辑可以由负责该部分的同学自行选择，言之有理即可。