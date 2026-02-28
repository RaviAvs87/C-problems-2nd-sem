#include<stdio.h>
/*in the starting this age calculator seems me very complicated and confusing
but by giving some time and connecting every possible dot, its look more clear
*/
void main(){
    int cd,cm,cy,bd,bm,by,date,month,year;
    
    printf("Enter current date\t");
    scanf("%d",&cd);
    printf("Enter current month\t");
    scanf("%d",&cm);
    printf("Enter current year\t");
    scanf("%d",&cy);
    
    printf("Enter birthday date\t");
    scanf("%d",&bd);
    printf("Enter birthday month\t");
    scanf("%d",&bm);
    printf("Enter birthday year\t");
    scanf("%d",&by);
    
   switch(cm){
       case 1: if(cd<bd){
           date = (cd+31)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 2: if(cd<bd){
           date = (cd+28)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 3: if(cd<bd){
           date = (cd+31)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 4: if(cd<bd){
           date = (cd+30)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 5: if(cd<bd){
           date = (cd+31)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 6: if(cd<bd){
           date = (cd+30)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 7: if(cd<bd){
           date = (cd+31)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 8: if(cd<bd){
           date = (cd+31)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 9: if(cd<bd){
           date = (cd+30)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 10: if(cd<bd){
           date = (cd+31)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 11: if(cd<bd){
           date = (cd+30)-bd;
       }else{
           date = bd - cd;
       }
       break;
       case 12: if(cd<bd){
           date = (cd+31)-bd;
       }else{
           date = bd - cd;
       }
       break;
   }
   
   //calculating month
   
   if(cd<bd){
       month = (cm + 12) - bm;
       month--;
   } else{
       month = bm - cm;
   }
   
   //calculating year
   
   if(cm<bm){
       year = cy - by;
       year--;
   }else{
       year = cy - by;
   }
  
  printf("You are %d days %d month %d year old",date,month,year);
  
   }
