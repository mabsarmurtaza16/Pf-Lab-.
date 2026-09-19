#include<stdio.h>
int main()
{
    int a;
    char b;
    printf("Enter C For Computer Science and E for Electrical Engineering and B for Business (input should be in uppercase)");
    scanf(" %c", &b);
    printf("Enter your semester number(1-3)");
    scanf("%d", &a);
    switch(b)
    {
        case 'C':
            printf("You have selected Computer Science");
            switch(a)
            {
                case 1:
                    printf("FAST-NUCES BS CS - Semester 1 Courses:\n1. Programming Fundamentals 3 CH\n2. Programming Fundamentals Lab 1 CH\n3. Calculus and Analytical Geometry 3 CH\n4. Applied Physics 3 CH\n5. Applied Physics Lab 1 CH\n6. Functional English 3 CH\n7. Islamic Studies / Ethics 2 CH\n");
                    break;
                case 2:
                    printf("FAST-NUCES BS CS - Semester 2 Courses:\n1. Object Oriented Programming 3 CH\n2. Object Oriented Programming Lab 1 CH\n3. Discrete Structures 3 CH\n4. Linear Algebra 3 CH\n5. Communication and Presentation Skills 3 CH\n6. Pakistan Studies 2 CH\n");
                    break;
                case 3:
                    printf("FAST-NUCES BS CS - Semester 3 Courses:\n1. Data Structures 3 CH\n2. Data Structures Lab 1 CH\n3. Digital Logic Design 3 CH\n4. Digital Logic Design Lab 1 CH\n5. Computer Organization and Assembly Language 3 CH\n6. Computer Organization and Assembly Language Lab 1 CH\n7. Differential Equations 3 CH\n");
                    break;
                default:
                    printf("Invalid input");
                    break;
            }
            break;
        case 'E':
            printf("You have selected Electrical Engineering");
            switch(a)
            {
                case 1:
                    printf("FAST-NUCES BS EE - Semester 1 Courses:\n1. Linear Circuit Analysis 3 CH\n2. Linear Circuit Analysis Lab 1 CH\n3. Calculus and Analytical Geometry 3 CH\n4. Applied Physics 3 CH\n5. Applied Physics Lab 1 CH\n6. Functional English 3 CH\n7. Islamic Studies / Ethics 2 CH\n");
                    break;
                case 2:
                    printf("FAST-NUCES BS EE - Semester 2 Courses:\n1. Electrical Network Analysis 3 CH\n2. Electrical Network Analysis Lab 1 CH\n3. Programming Fundamentals 3 CH\n4. Programming Fundamentals Lab 1 CH\n5. Differential Equations 3 CH\n6. Communication and Presentation Skills 3 CH\n7. Pakistan Studies 2 CH\n");
                    break;
                case 3:
                    printf("FAST-NUCES BS EE - Semester 3 Courses:\n1. Electronic Devices and Circuits 3 CH\n2. Electronic Devices and Circuits Lab 1 CH\n3. Digital Logic Design 3 CH\n4. Digital Logic Design Lab 1 CH\n5. Multivariable Calculus 3 CH\n6. Signals and Systems 3 CH\n7. Signals and Systems Lab 1 CH\n");
                    break;
                default:
                    printf("Invalid input");
                    break;
            }
            break;
        case 'B':
            printf("You have selected Business");
            switch(a)
            {
                case 1:
                    printf("FAST-NUCES BS Business - Semester 1 Courses:\n1. Principles of Management 3 CH\n2. Principles of Management Lab 1 CH\n3. Calculus and Analytical Geometry 3 CH\n4. Applied Physics 3 CH\n5. Applied Physics Lab 1 CH\n6. Functional English 3 CH\n7. Islamic Studies / Ethics 2 CH\n");
                    break;
                case 2:
                    printf("FAST-NUCES BS Business - Semester 2 Courses:\n1. Financial Accounting 3 CH\n2. Financial Accounting Lab 1 CH\n3. Programming Fundamentals 3 CH\n4. Programming Fundamentals Lab 1 CH\n5. Differential Equations 3 CH\n6. Communication and Presentation Skills 3 CH\n7. Pakistan Studies 2 CH\n");
                    break;
                case 3:
                    printf("FAST-NUCES BS Business - Semester 3 Courses:\n1. Marketing Management 3 CH\n2. Marketing Management Lab 1 CH\n3. Digital Logic Design 3 CH\n4. Digital Logic Design Lab 1 CH\n5. Multivariable Calculus 3 CH\n6. Signals and Systems 3 CH\n7. Signals and Systems Lab 1 CH\n");
                    break;
                default:
                    printf("Invalid input");
                    break;
            }
            break;
        default:
            printf("Invalid input");
            break;
    }
    return 0;
}