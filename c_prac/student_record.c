#include<stdio.h>
#include<stdint.h>




typedef struct{
    int roll_no;
    char name[50];
    int year;


} student_data;

student_data student_list[10];



void add_records(){
    int temp;
    for(int i=0;i<10;i++){
        if(student_list[i].roll_no==0){
            printf("enter the roll number \n");
            scanf("%u",&temp);
            for(int j=0;j<10;j++){
                if(temp==student_list[j].roll_no){
                    printf("This is a duplicate data,\n****************\n");
                    return;
                }
            }
            student_list[i].roll_no=temp;
            printf("enter the student name\n");
            scanf("%s",student_list[i].name);
            printf("enter the current year\n");
            scanf("%u",&student_list[i].year);
            printf("data logged sucessfully \n ****************\n");
            return;
        }
        
    }

}

void display_records(){

    for(int i=0;i<10;i++){
        if(student_list[i].roll_no==0){
            if(i==0){
                printf("no data to display \n ****************\n");
            }
            
            
        
        else{
            printf("roll_number:%d\n",student_list[i].roll_no);
            printf("student_name:%s\n",student_list[i].name);
            printf("current_year:%d\n",student_list[i].year);

        }
    }
    }
    return;

}

void delete_records(){
    int roll_number;
    printf("enter the roll number of student to remove data\n");
    scanf("%d",roll_number);
    for(int i=0;i<10;i++){
        if(student_list[i].roll_no==roll_number){
            student_list[i]=student_list[i+1];

        }
        
        
    }
    student_list[9].name[0]="\0";
    student_list[9].roll_no=0;
    student_list[9].year=0;
    return;

    
}

uint8_t menu_display(){
    int input;
    printf("Display_records ----> 1\n");
    printf("Add_records ----> 2\n");
    printf("Delete_records ----> 3\n");
    printf("Exit ----> 4\n");
    printf("enter the option :");
    scanf("%d",&input);
    return input;

}

int main(){
    int user_input=0;
    printf("Student Record Management Program \n");
    while(1){
        user_input=menu_display();
        switch (user_input)
        {
        case 1:
            display_records();
            break;
        
        case 2:
            add_records();
            break;

        case 3:
            delete_records();
            break;
        
        case 4:
            return 0;

        default:
            printf("enter a valid input \n");
            break;
        }
        



    }




}