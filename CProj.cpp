#include<stdio.h>
#include<string.h>

void home()

{

 printf("======================================================================================================================\n");
 printf("                                                NAME: MRIGAKSH DASANI\n"                                   );
 printf("                                                BRANCH:CSE\n"                                            );
 printf("                                                ER-NO.:CSE12\n"                                          );
 printf("                                                ESFP-1 PROJECT\n"                                        );
 printf("                                                School Dropout Ratio\n"                                           );
 printf("                                               For year 2022-2023\n"                                           );
 printf("=======================================================================================================================\n");
}
 
char username[10], password[10];

//functions declaration
void login();
void print_menu();
void table();
void statistics();
void solutions();

 
int main()
{
	home();
    login();
    print_menu();
    
    return 0;
}

//login function
void login()
{
	printf("\n*******************");
    printf("\nEnter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    printf("\n*******************");
    scanf("%s", password);
 
    if(strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0)
    {
        printf("\nLogin Successful!\n\n");
    }
    else
    {
        printf("\nWrong username or password!\n\n");
        login();
    }
}

//menu function
void print_menu()
{
    int choice;
 
    printf("\n-----Menu-----\n");
    printf("1. Reasons for School Dropout\n");
    printf("2. State Statistics\n");
    printf("3. Effective Solutions\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
 
    switch(choice)
    {
        case 1:
            printf("\nReasons for school dropout\n");
            table();
            break;
        case 2:
            printf("\nState Statistics\n");
            statistics();
            break;
        case 3:
            printf("\nEffective Solutions\n");
            solutions();
        	break;
        default:
            printf("\nInvalid Choice!\n");
    }
}


void table() 
{
    int value;
    printf("Enter how many reasons to display");
    scanf("%d",&value);

    printf("\nReasons for school dropout\n");
    printf("-------------------------------\n");
    printf("| SNO.   | Reasons   |\n");
    printf("-------------------------------\n");

    int i, j;
    for(i=0;i<value;i++)
	{
        for(j=0;j<value;j++)
        {
            if(i==0 && j==0)
            {
                printf("| 1   |  Economic instability |\n");
            }
            else if(i==0 && j==1)
            {
                printf("| 2  |  Family Constraints |\n");
            }
            else if(i==0 && j==2)
            {
                printf("| 3  |  Domestic Work|\n");
            }
            else if(i==0 && j==3)
            {
                printf("| 4  |  Child Marraige |\n");
            }
            else if(i==0 && j==4)
            {
                printf("| 5  |  Others |\n");
            }
        }
    }
    printf("-------------------------------\n");
}



void statistics() 
{
    int stats;
    printf("Enter the number of states with highest dropout(top 5)");
    scanf("%d",&stats);

    printf("\nReasons for school dropout\n");
    printf("-------------------------------\n");
    printf("| SNO.   | 	  States	|  Percentage  |\n");
    printf("-------------------------------\n");

    int i, j;
    for(i=0;i<stats;i++)
	{
        for(j=0;j<stats;j++)
        {
            if(i==0 && j==0)
            {
                printf("|1|Tripura|26.6% |\n");
            }
            else if(i==0 && j==1)
            {
                printf("|2|M.P.|23.8%|\n");
            }
            else if(i==0 && j==2)
            {
                printf("|3|Gujarat|23.3%|\n");
            }
            else if(i==0 && j==3)
            {
                printf("|4 |Bihar|21%|\n");
            }
            else if(i==0 && j==4)
            {
                printf("|5|Jharkhand|16.6%|\n");
            }
        }
    }
    printf("-------------------------------\n");
}


void solutions()
{
   printf("Following solutions may help! \n");
   printf("1. Efficient and sophisticated infrastructure \n");
   printf("2. Innovative Education Sections \n");
   printf("3. Interactive Learning\n");
   printf("4. Learn through Games \n");
   
   
}
