#include<stdio.h>

 int main()
 {
     float total_selling_price,total_profit,total_cost_per_item;
     float total_number_of_item=15;
     printf("Enter total selling price:");
     scanf("%f",&total_selling_price);
     printf("Enter total profit:");
     scanf("%f",&total_profit);
     total_cost_per_item=(total_selling_price-total_profit)/total_number_of_item;
     printf("Total cost per item:%f",total_cost_per_item);

     return 0;
 }
