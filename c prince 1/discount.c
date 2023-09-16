/*4. A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user*/

#include<stdio.h>
int main(){
    int num,quan;
    float price,tot_cost=0,discount,amt;

    printf("Enter the no. of kind of products you shopped");
    scanf("%d",&num);

    for(int i=0;i<num;i++){
        printf("Enter the price of the product");
        scanf("%f",&price);
        printf("Enter the number of products shopped");
        scanf("%d",&quan);
        tot_cost =(tot_cost+ (price*quan));

    }

    if (tot_cost>1000){
        printf("You are eligibe for discount\n");
        printf("The total amount spent is %f \n",tot_cost);
        discount=((0.1)*tot_cost);
        amt=(tot_cost-discount);
        printf("The amount payable is %f",amt);

    }

    else{

        printf("You are not eligibe for discount\n");
        printf("The total amount spent is %f \n",tot_cost);

    }

    return 0;
    
}
