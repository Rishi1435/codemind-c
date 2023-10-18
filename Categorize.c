#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    printf("%s", x <= 150 ? "The person is Dwarf." : x >= 150 && x <= 165 ? "The person is average heighted." : x >= 165 && x <= 195 ? "The person is taller." : "Abnormal height.");
}
