#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct course {
   const char *courseName[50];
   char registeredStudents[1][25];

} course;

int main(void)
{
	char userChoice = '-';
	char userCourse = '-';
	const char *studentName;
	int i;
	int j;
	int numberOfSpots = 25;
	
	struct course ProgrammingI;
	struct course ProgrammingII;
	struct course ObjectOrientedProgrammingI;
	struct course ObjectOrientedProgrammingII;
	
	strncpy(*ProgrammingI.courseName, "Programming I", 50);
    strncpy(*ProgrammingII.courseName, "Programming II", 50);
    strncpy(*ObjectOrientedProgrammingI.courseName, "Object Oriented Programming I", 50);
    strncpy(*ObjectOrientedProgrammingII.courseName, "Object Oriented Programming II", 50);
	
	for (i = 0; i < 25; i++)
		{
			strncpy(ProgrammingI.registeredStudents[i], "empty", 50);
		}
		
	for (i = 0; i < 25; i++)
		{
			strncpy(ProgrammingII.registeredStudents[i], "empty", 50);
		}
		
	for (i = 0; i < 25; i++)
		{
			strncpy(ObjectOrientedProgrammingI.registeredStudents[i], "empty", 50);
		}
		
	for (i = 0; i < 25; i++)
		{
			strncpy(ObjectOrientedProgrammingII.registeredStudents[i], "empty", 50);
		}
	
	while (userChoice != 'q')
	{
		
		
		
		printf("Select what you wish to do:\n");
		printf("Type l to list courses\n");
		printf("Type r to register for a course\n");
		printf("Type s to list registered students in a course\n");
		printf("Type q to quit the program\n");
		scanf("%c", &userChoice);
	
		if (userChoice == 'l')
		{
			printf("%s\n", ProgrammingI.courseName);
			printf("%s\n", ProgrammingII.courseName);
			printf("%s\n", ObjectOrientedProgrammingI.courseName);
			printf("%s\n", ObjectOrientedProgrammingII.courseName);
		}
			else if (userChoice == 'r')
			{
				printf("Please indicate the course you wish to register for.\n");
				printf("Type 1 for Programming I.\n");
				printf("Type 2 for Programming II.\n");
				printf("Type 3 for Object Oriented Programming I.\n");
				printf("Type 4 for Object Oriented Programming II.\n");
				scanf("%c", &userCourse);
				
				printf("Please type the name of the student being registered for the course.");
				scanf("%c", &studentName);
				
				if (userCourse == 1)
				{
					for (j = 0; j < numberOfSpots; j++)
					{
						if (ProgrammingI.registeredStudents[i] != "empty")
						{
							strncpy(ProgrammingI.registeredStudents[i], studentName, 50);
							break;
						}
					}
				}
					else if (userCourse == 2)
					{
						for (j = 0; j < numberOfSpots; j++)
						{
							if (ProgrammingII.registeredStudents[i] != "empty")
							{
								strncpy(ProgrammingII.registeredStudents[i], studentName, 50);
								break;
							}
						}
					}
						else if (userCourse == 3)
						{
							for (j = 0; j < numberOfSpots; j++)
							{
								if (ObjectOrientedProgrammingI.registeredStudents[i] != "empty", 50)
								{
									strncpy(ObjectOrientedProgrammingI.registeredStudents[i], studentName, 50);
									break;
								}
							}
						}
							else if (userCourse == 4)
							{
								for (j = 0; j < numberOfSpots; j++)
								{
									if (ObjectOrientedProgrammingII.registeredStudents[i] != "empty", 50)
									{
										strncpy(ObjectOrientedProgrammingII.registeredStudents[i], studentName, 50);
										break;
									}
								}
							}	
			} // END OF USER CHOICE l
				else if (userChoice == 's')
				{
					printf("Please indicate the course for which you wish to view the registered students.\n");
					printf("Type 1 for Programming I.\n");
					printf("Type 2 for Programming II.\n");
					printf("Type 3 for Object Oriented Programming I.\n");
					printf("Type 4 for Object Oriented Programming II.\n");
					scanf("%c", &userCourse);
					
					if (userCourse == 1)
					{
						for (j = 0; j < numberOfSpots; j++)
						{
							printf("%c", ProgrammingI.registeredStudents[i]);
						}
					}
						else if (userCourse == 2)
						{
							for (j = 0; j < numberOfSpots; j++)
							{
								printf("%c", ProgrammingII.registeredStudents[i]);
							}
						}
							else if (userCourse == 3)
							{
								for (j = 0; j < numberOfSpots; j++)
								{
									printf("%c", ObjectOrientedProgrammingI.registeredStudents[i]);
								}
							}
								else if (userCourse == 4)
								{
									for (j = 0; j < numberOfSpots; j++)
									{
										printf("%c", ObjectOrientedProgrammingII.registeredStudents[i]);
									}
								}			
				} // END OF USER CHOICE s
					else if (userChoice == 'q')
					{
						printf("Quitting.\n");
					}
						else
						{
							printf("Invalid command.\n");
						}
	
	}
	
	return 0;
	
}
