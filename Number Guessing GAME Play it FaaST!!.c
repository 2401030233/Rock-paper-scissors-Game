# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main() {
int number[3], num[3], sum[3], min, r, i;
for (i=0; i<3; i++) {
    sum[i]=0;
}
for (i=0; i<2; i++) {
printf("PLAYER %d CHANCE\n", i+1);
srand(time(0));
number[i]=rand()%100+101; //generates a random number between 101 and 200
printf("input num b/w 100, 200\n");
scanf("%d", &num[i]);
while (num[i]!=number[i]) {
    if (num[i]>number[i]) {
        sum[i]+=1;
        printf("Lower number please\n");
    }
    else if (num[i]<number[i]) {
        sum[i]+=1;
        printf("Higher number please\n");
    }
    scanf("%d", &num[i]);
}
if (num[i]==number[i]) printf("You guessed it right\nNEXT PLAYER\n\n");
}
min=sum[0];
for (i=0; i<2; i++) {
    if (sum[i]<=min) {
        min=sum[i];
        r=i;
    }
}
printf("Congrats to--PLAYER %d WINS!!\n", r+1);
return 0;
}
