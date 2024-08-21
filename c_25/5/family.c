// •	Create a "Family" structure containing members such as the family head's name (head_ name), the total number of members (tot_mem), the family total income (tot_income), and the family total expenditure (tot_exp). Create an array of structures of type “Family”.Then create an array of pointers to point to each structure. Perform the following action:
// •	Display the details of the family that earns the maximum income
// •	Sort the family based on money spent. [To access the members of the structure, use pointers]

# include <stdio.h>
#include <conio.h>
struct family{
    char head_name[100];
    int tot_mem;
    float tot_income;
    float tot_expend;
};

void gather_info(struct family* f){
    printf("Enter the head of the family");
    scanf(" %[^\n]%*c", &f->head_name);
    printf("Enter the total members in family");
    scanf("%d",&f->tot_mem);
    printf("Enter the total income generated");
    scanf("%f",&f->tot_income);
    printf("The total amount spent is");
    scanf("%f",&f->tot_expend);
}

void display(struct family*f){
    printf("head name: %s\n",f->head_name);
    printf("total_num_of members %d\n",f->tot_mem);
    printf("The total income generated is %f\n",f->tot_income);
    printf("The total expenditure is %f\n",f->tot_expend);
}

int main()
{
    int num;
    printf("Enter the total number of families to be considered");
    scanf("%d",&num);
    struct family* arr1 = malloc(num* sizeof(struct family));
    for (int i=0;i<num;i++){
        struct family f1;
        gather_info(&f1);
        arr1[i]=f1;
    }
        //we got the array now;
    for(int i=1;i<num;i++){
        struct family key_val=arr1[i];
        float key=arr1[i].tot_income;
        int j=i-1;
        //the highest possible vlue j guy can take
        while(j>=0 && arr1[j].tot_income>key){
            arr1[j+1]=arr1[j];
            j=j-1;
        }

        arr1[j+1]=key_val;//.tot_income=key;
    }
    for (int i=0;i<num;i++){
        display(&arr1[i]);

    }
    for(int i=1;i<num;i++){
        int key=arr1[i].tot_expend;
        struct family key_val=arr1[i];
        int j=i-1;
        //the highest possible vlue j guy can take
        while(j>=0 && arr1[j].tot_expend<key){
            arr1[j+1]=arr1[j];
            j=j-1;
        }

        arr1[j+1]=key_val;//.tot_expend=key;
    }
    for (int i=0;i<num;i++){
        display(&arr1[i]);
    }
}
