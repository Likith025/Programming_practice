#include<stdio.h>
#include<stdint.h>


#define  MAX_STUDENTS   10

typedef struct{
    int roll_no;
    char name[50];
    int year;


} student_data;

student_data student_list[MAX_STUDENTS];



void add_records(){
    int temp;
    for(int i=0;i<MAX_STUDENTS;i++){
        if(student_list[i].roll_no==0){
            printf("enter the roll number \n");
            scanf("%d",&temp);
            for(int j=0;j<MAX_STUDENTS;j++){
                if(temp==student_list[j].roll_no){
                    printf("This is a duplicate data,\n****************\n");
                    return;
                }
            }
            student_list[i].roll_no=temp;
            printf("enter the student name\n");
            scanf("%s",student_list[i].name);
            printf("enter the current year\n");
            scanf("%d",&student_list[i].year);
            printf("data logged sucessfully \n ****************\n");
            return;
        }
        
    }

}

void display_records() {
    int found = 0; // flag to check if any data is found

    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (student_list[i].roll_no != 0) {
            found = 1;
            printf("roll_number: %d\n", student_list[i].roll_no);
            printf("student_name: %s\n", student_list[i].name);
            printf("current_year: %d\n", student_list[i].year);
            printf("****************\n");
        }
    }

    if (!found) {
        printf("No data to display.\n****************\n");
    }
}

void delete_records() {
    int removed = 0;
    int roll_number;
    printf("enter the roll number of student to remove data\n");
    if (scanf("%d", &roll_number) != 1) {
        while(getchar() != '\n'); // clear buffer
        printf("Invalid input.\n");
        return;
    }
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (student_list[i].roll_no == roll_number) {
            // Shift all records up to fill the gap
            for (int j = i; j < MAX_STUDENTS - 1; j++) {
                student_list[j] = student_list[j + 1];
            }
            // Clear the last record
            student_list[MAX_STUDENTS - 1].roll_no = 0;
            student_list[MAX_STUDENTS - 1].name[0] = '\0';
            student_list[MAX_STUDENTS - 1].year = 0;
            removed = 1;
            printf("Record deleted successfully.\n");
            break;
        }
    }
    if (!removed) {
        printf("data to remove not found \n");
    }
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