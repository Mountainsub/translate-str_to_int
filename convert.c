#include <stdio.h>
int main(void){
    // Your code here!
    int num[3];
    scanf("%d %d %d", &num[0] ,&num[1] ,&num[2]);
    char str[10];
    for(int i = 0; i < 3;i++){
        int n[i];
        n[i]= num[i] % 3;
        
        if(n[i] == 0){
            str[i] = 'R';//3で割って余りが0ならばRed
        }
        else if(n[i] == 1){
            str[i] = 'G';//3で割って余りが1ならばGreen
        }
        else{
            str[i] = 'B';//3で割って余りが2ならばBlue
        }
    }
    printf("%s", str);
    return 0;
}
