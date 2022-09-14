#include<stdio.h>

int main(){
    // int n_students = 3;
    // int n_subjects = 5;
    int students , subject;
    printf("enter no of students\n");
    scanf("%d", &students);
     printf("enter no of subject\n");
    scanf("%d", &subject);

    int marks[students][subject];
    for(int i=0; i<students; i++){
        for(int j=0; j<subject; j++){
            printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    for(int i=0; i<students; i++){
        for(int j=0; j<subject; j++){
            printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, marks[i][j]);
        }
    }

    return 0;
}