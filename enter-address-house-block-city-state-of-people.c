#include<stdio.h>
#include<string.h>
struct address {
int houseNo;
int block;
char city[100];
char state[100];
};
void printAdd(struct address add);
int main(){
struct address adds[5];
printf("enter info for person");
scanf("%d",&adds[4].houseNo);
scanf("%d",&adds[4].block);
scanf("%s",adds[4].city);
scanf("%s",adds[4].state);
printAdd(adds[4]);
return 0;
}
void printAdd(struct address add){
printf("address is %d,%d,%s,%s\n",add.houseNo,add.block,add.city,add.state);
}