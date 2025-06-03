#include<stdio.h>
#include<stdint.h>




typedef struct{
    uint8_t roll_no;
    char name[50];
    uint8_t year;


} student_data;

student_data student_list[10];



void add_records(){
    uint8_t temp;
    for(int i=0;i<10;i++){
        if(student_list[i].roll_no==0){
            printf("enter the roll number \n");
            scanf("%u",&temp);
            for(int j=0;j<10;j++){
                if(temp==student_list[i].roll_no){
                    printf("This is a duplicate data,\n try again\n");
                    return;
                }
            }
            student_list[i].roll_no=temp;
            printf("enter the student name\n");
            scanf("%s",student_list[i].name);
            printf("enter the current year\n");
            scanf("%u",&student_list[i].year);
        }
        
    }

}

void display_records(){

}

void delete_records(){
    
}

uint8_t menu_display(){
    uint8_t input;
    printf("Display_records ----> 1\n");
    printf("Add_records ----> 2\n");
    printf("Delete_records ----> 3\n");
    printf("Exit ----> 4\n");
    printf("enter the option :");
    scanf("%u",&input);
    return input;

}

int main(){
    uint8_t user_input=0;
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