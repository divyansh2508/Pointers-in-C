// A C program to recieve and print student details using dynamic memory allocation and pointers.
#include <stdio.h>

//malloc() int *x = (int *) malloc (10*sizeof(int))
//calloc() 
//free() 
//realloc x = (int *) realloc (x,20*sizeof(int))

struct S_details {
	char fname[25];
	char lname[30];
	char Sap_ID[10];
	char En_no[11];
};

struct date {
	int dd , mm , yyyy;	
};

void main() {
	int n , i;
	printf("Enter number of students: ");
	scanf("%d",&n);
	
	struct S_details *s;
	s = (struct s*) malloc (n*sizeof(int));
	
	struct date *d;
	d = (struct d*) calloc (n,sizeof(int));
	
	for (i=0; i<n; i++) {
		printf("\nEnter students first name: ");
		scanf("%s",&(s+i)->fname);
		printf("Enter students last name: ");
		scanf("%s",&(s+i)->lname);
		printf("Enter students SAP ID: ");
		scanf("%s",&(s+i)->Sap_ID);
		printf("Enter students Enrollment number: ");
		scanf("%s",&(s+i)->En_no);
		printf("Enter Date of registration(DD): ");
		scanf("%d",&(d+i)->dd);
		printf("Enter month of registration(MM): ");
		scanf("%d",&(d+i)->mm);
		printf("Enter year of registration(YYYY): ");
		scanf("%d",&(d+i)->yyyy);
	}
	
	printf("\n****Students Details****\n");
	
	for (i=0; i<n; i++) {
		printf("\nStudents name: %s %s\n",(s+i)->fname,(s+i)->lname);
		printf("Students SAP ID: %s \n",(s+i)->Sap_ID);
		printf("Students Enrollment number: %s\n",(s+i)->En_no);
		printf("Date of registration: %d/%d/%d\n",(d+i)->dd,(d+i)->mm,(d+i)->yyyy);
	}
	
	free(s);
	free(d);
}
