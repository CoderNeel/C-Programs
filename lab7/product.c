#include<stdio.h>
struct date {
	int d, m, y;
};
struct student_record {
	char name[50];
	int sap, enr;
	struct date dob, dor;
};
int main()
{
	int n, i=0, j=0;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		struct student_record s[i];
		printf("Enter student name: ");
		scanf("%s", &s[i].name[50]);
		printf("Enter SAP ID: ");
        	scanf("%d", &s[i].sap);
		printf("Enter student enr: ");
        	scanf("%d", &s[i].enr);
		printf("Enter Date of Birth: ");
        	scanf("%d", &s[i].dob.d);
		printf("Enter Month of Birth: ");
        	scanf("%d", &s[i].dob.m);
		printf("Enter Year of Birth: ");
        	scanf("%d", &s[i].dob.y);
        	printf("Enter Date of Enrollment: ");
        	scanf("%d", &s[i].dor.d);
        	printf("Enter Month of Enrollment: ");
        	scanf("%d", &s[i].dor.m);
        	printf("Enter Year of Enrollment: ");
       		scanf("%d", &s[i].dor.y);
		printf("Name: %s\nSAP ID: %d\nEnrollment Number: %d\nDate of Birth: %d\nDate of Enrollment: %d", s[i].name[50], s[i].sap, s[i].enr, s[i].dob.d, s[i].dob.m, s[i].dob.y, s[i].dor.d, s[i].dor.m, s[i].dor.y);
	}
}
