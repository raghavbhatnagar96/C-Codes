#include<stdio.h>
#include<string.h>

void print(char* argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size, date;
    char name[300], actor[100];
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        printf("%s %s %d %d\n", name, actor, size, date);
    }
}
void shortest_movie(char* argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size , date,date1, size1 = 100000;
    char name[300], actor[100], name1[300], actor1[100];
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if(size <= size1)
        {
            size1 = size;
            strcpy(name1, name);
			strcpy(actor1, actor);
			date1 = date;
        }
    }
    fclose(in);
    in = fopen(argv, "r + w");
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if(size1 == size)
        {
           printf("%s %s %d %d\n", name, actor, size, date);
        }
    }
}
void longest_movie(char* argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size , date, date1, size1 = 0;
    char name[300], actor[100], name1[300], actor1[100];
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if(size >= size1)
        {
            size1 = size;
        }
    }
    fclose(in);
    in = fopen(argv, "r + w");
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if(size1 == size)
        {
           printf("%s %s %d %d\n", name, actor, size, date);
        }
    }
}
void older_movies(char* argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size , date, size1 = 0, older_than;
    char name[300], actor[100], name1[300];
    printf("Display movies older than what year? ");
    scanf("%d", &older_than);
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if(date <= older_than)
        {
            printf("%s %s %d %d\n", name, actor, size, date);
        }
    }
}
void newer_movies(char* argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size , date, size1 = 0, newer_than;
    char name[300], actor[100], name1[300];
    printf("Display movies newer than what year? ");
    scanf("%d", &newer_than);
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if(date >= newer_than)
        {
            printf("%s %s %d %d\n", name, actor, size, date);
        }
    }
}
void movies_in_between(char* argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size , date, size1 = 0, newer_than, older_than;
    char name[300], actor[100], name1[300];
    printf("Display movies in between what years? ");
    scanf("%d %d", &newer_than, &older_than);
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if((date >= newer_than)&&(date<= older_than))
        {
            printf("%s %s %d %d\n", name, actor, size, date);
        }
    }
}
void same_actor_movies(char* argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size , date;
    char name[300], actor[100], actor1[300];
    printf("Display movies of which actor? ");
    scanf("%s", actor1);
    actor1[0] = toupper(actor1[0]);
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if(strcasecmp(actor1, actor) == 0)
        {
            printf("%s %s %d %d\n", name, actor, size, date);
        }
    }
    fclose(in);
}
void same_year_movies(char* argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size , date, date1;
    char name[300], actor[100], actor1[300];
    printf("Display movies of what year? ");
    scanf("%d", &date1);
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if (date1 == date)
        {
            printf("%s %s %d %d\n", name, actor, size, date);
        }
    }
}
void same_length_movies(char * argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    int size , date, size1;
    char name[300], actor[100], actor1[300];
    printf("Display movies of what length? ");
    scanf("%d", &size1);
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if (size1 == size)
        {
            printf("%s %s %d %d\n", name, actor, size, date);
        }
    }
}
void add_movie(char * argv)
{
    FILE * in;
    in = fopen(argv, "a+");
    int size , date;
    char name[300], actor[300];
    printf("Adding movie...\n");
    printf("    Title: ");
    scanf("%s", name);
    printf("    Main actors: ");
    scanf("%s", actor);
    printf("    Length in minutes: ");
    scanf("%d", &size);
    printf("    Year: ");
    scanf("%d", &date);
    fprintf(in, "%s %s %d %d", name, actor, size, date);
	fclose(in);
}
void delete_movie(char * argv)
{
    FILE * in;
    in = fopen(argv, "r + w");
    FILE * out;
    out = fopen("output.dat", "w");
    int size , date;
    char name[300], actor[100], actor1[300], name1[300];
    printf("Display movie name? ");
    scanf("%s", name1);
    while(!feof(in))
    {
        fscanf(in, "%s\n", name);
        fscanf(in, "%s\n", actor);
        fscanf(in, "%d\n", &size);
        fscanf(in, "%d\n", &date);
        if (strcmp(name1, name))
        {
            fprintf(out, "%s ", name);
            fprintf(out, "%s ", actor);
            fprintf(out, "%d ", size);
            fprintf(out, "%d\n", date);
        }
    }
    fclose(out);
    rename("output.dat", argv);
}
