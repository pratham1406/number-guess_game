#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int  a,b,c=1,d=1,e=1,f=1,g=1;
printf("how many playerss:\n");
scanf("%d",&d);
if(d>5){
    printf("playere upto 4\n");
    system("pause");
}
 
switch(d) {
case 1:
srand(time(0));
a=rand()%100+1;
for(a,b;a!=b;c++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",c);
}
}
break;
case 2:
printf("for player 1\n");
 
srand(time(0));
a=rand()%100+1;

for(a,b;a!=b;c++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",c);
}
}
printf("for player 2\n");
  
srand(time(0));
a=rand()%100+1;


for(a,b;a!=b;e++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",e);
}
}
break;
case 3:
printf("for player 1\n");
 
srand(time(0));
a=rand()%100+1;

for(a,b;a!=b;c++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",c);
}
}
printf("for player 2\n");
 
srand(time(0));
a=rand()%100+1;

for(a,b;a!=b;e++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",e);
}
}
printf("for player 3\n");
 
srand(time(0));
a=rand()%100+1;

for(a,b;a!=b;f++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",f);
}
}
break;
case 4:
 srand(time(0));
a=rand()%100+1;

for(a,b;a!=b;c++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",c);
}
}
printf("for player 2\n");
  srand(time(0));
a=rand()%100+1;

for(a,b;a!=b;e++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",e);
}
}
printf("for player 3\n");
 srand(time(0));
a=rand()%100+1;

for(a,b;a!=b;f++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",f);
}
}
printf("for player 4\n");
 srand(time(0));
a=rand()%100+1;

for(a,b;a!=b;g++){
    printf("guess number\n");
scanf("%d",&b);
if(a<b){
    printf("lower number plz\n");
}
else if(a>b){
printf("higher number plz\n");
}
else{
    printf("your guesses %d\n",g);
}
}
break;
}
return 0;
}
