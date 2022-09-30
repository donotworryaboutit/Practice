//
// Created by skl on 9/27/22.
//

#include <unistd.h>
int main(){
    int re=close("fifo_A");
    re=close("fifo_B");
    return 0;
}