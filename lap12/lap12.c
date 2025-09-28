#include <stdio.h>
#include <string.h>

typedef struct Student {
    char Name[50];
    char ID[10];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} S;

const char* getGrade(float score);
void inputStudents(S students[], int size);
void printStudents(S students[], int size);

int main() {
    S students[3];

    inputStudents(students, 3);
    printStudents(students, 3);

    return 0;
}

const char* getGrade(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

void inputStudents(S students[], int size) {
    printf("Enter the details of %d students:\n", size);

    for (int i = 0; i < size; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: \n");
        getchar();
        fgets(students[i].Name, sizeof(students[i].Name), stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = '\0';

        printf("ID: \n");
        fgets(students[i].ID, sizeof(students[i].ID), stdin);
        students[i].ID[strcspn(students[i].ID, "\n")] = '\0';

        printf("Scores in Subject 1: \n");
        scanf("%f", &students[i].ScoreSub1);
        printf("Scores in Subject 2: \n");
        scanf("%f", &students[i].ScoreSub2);
        printf("Scores in Subject 3: \n");
        scanf("%f", &students[i].ScoreSub3);
        printf("Scores in Subject 4: \n");
        scanf("%f", &students[i].ScoreSub4);
        printf("Scores in Subject 5: \n");
        scanf("%f", &students[i].ScoreSub5);
    }
}

void printStudents(S students[], int size) {
    printf("\n");

    for (int i = 0; i < size; i++) {
        float avg = (students[i].ScoreSub1 + students[i].ScoreSub2 +
                     students[i].ScoreSub3 + students[i].ScoreSub4 +
                     students[i].ScoreSub5) / 5.0;

        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n",
            students[i].ScoreSub1, students[i].ScoreSub2, students[i].ScoreSub3,
            students[i].ScoreSub4, students[i].ScoreSub5);

        printf("Grades: %s %s %s %s %s\n",
            getGrade(students[i].ScoreSub1), getGrade(students[i].ScoreSub2),
            getGrade(students[i].ScoreSub3), getGrade(students[i].ScoreSub4),
            getGrade(students[i].ScoreSub5));

        printf("Average Scores: %.1f\n\n", avg);
    }
}
