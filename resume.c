#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 50
#define MAX_PHONE_LENGTH 15
#define MAX_ADDRESS_LENGTH 100
#define MAX_SUMMARY_LENGTH 200
#define MAX_EXPERIENCE_LENGTH 200
#define MAX_SKILLS_LENGTH 200

typedef struct {
    char name[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char phone[MAX_PHONE_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    char summary[MAX_SUMMARY_LENGTH];
    char experience[MAX_EXPERIENCE_LENGTH];
    char skills[MAX_SKILLS_LENGTH];
} Resume;

void createResume(Resume *resume) {
    printf("Enter your name: ");
    fgets(resume->name, MAX_NAME_LENGTH, stdin);

    printf("Enter your email: ");
    fgets(resume->email, MAX_EMAIL_LENGTH, stdin);

    printf("Enter your phone number: ");
    fgets(resume->phone, MAX_PHONE_LENGTH, stdin);

    printf("Enter your address: ");
    fgets(resume->address, MAX_ADDRESS_LENGTH, stdin);

    printf("Enter a summary of your profile: ");
    fgets(resume->summary, MAX_SUMMARY_LENGTH, stdin);

    printf("Enter your work experience: ");
    fgets(resume->experience, MAX_EXPERIENCE_LENGTH, stdin);

    printf("Enter your skills: ");
    fgets(resume->skills, MAX_SKILLS_LENGTH, stdin);
}

void displayResume(const Resume *resume) {
    printf("\n--- Resume ---\n");
    printf("Name: %s", resume->name);
    printf("Email: %s", resume->email);
    printf("Phone: %s", resume->phone);
    printf("Address: %s", resume->address);
    printf("Summary: %s", resume->summary);
    printf("Experience: %s", resume->experience);
    printf("Skills: %s", resume->skills);
    printf("----------------\n");
}

int main() {
    Resume myResume;
    createResume(&myResume);
    displayResume(&myResume);

    return 0;
}
