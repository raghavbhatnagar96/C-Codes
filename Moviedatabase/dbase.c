#include<stdio.h>
#include<string.h>
int main(int argc, char*argv[])
{
    if(argc != 2)
        {
            printf("usage: ./dbase <input file>");
        }
    else if(fopen(argv[1], "r") == NULL)
        {
            printf("File doesnt exist\n");
        }
    else
        {
        void print(char * argv);
        void shortest_movie(char * argv);
        void longest_movie(char * argv);
        void older_movies(char * argv);
        void newer_movies(char * argv);
        void movies_in_between(char * argv);
        void same_actor_movies(char * argv);
        void same_length_movies(char * argv);
        void add_movies(char * argv);
        void same_year_movies(char * argv);
        void add_movie(char * argv);
        void delete_movie(char * argv);
        int input = 1;
        while (input != 0 )
            {
                 printf("Welcome to the C Movie Database!\n    Main menu:\n    1: display all movies\n    2: display shortest movie\n    3: display longest movie\n    4: display older movies\n    5: display newer movies\n    6: display movies in the region specified\n    7: display all movies of same acton\n    8: display all movies released in same year\n    9: display all movies of same length\n    10: add movie\n    0: quit the program\nEnter option number: ");
                 scanf("%d", &input);

                 else if(input == 1)
                  {
                      print(argv[1]);
                  }
                  else if(input == 2)
                  {
                      shortest_movie(argv[1]);
                  }
                  else if(input == 3)
                  {
                      longest_movie(argv[1]);
                  }
                  else if(input == 4)
                  {
                       older_movies(argv[1]);
                  }
                  else if(input == 5)
                  {
                       newer_movies(argv[1]);
      }
      else if(input == 6)
      {
          movies_in_between(argv[1]);
      }

      else if(input == 7)
      {
          same_actor_movies(argv[1]);
      }
      else if(input == 8)
      {
          same_year_movies(argv[1]);
      }
      else if(input == 9)
      {
          same_length_movies(argv[1]);
      }
      else if(input == 10)
      {
          add_movie(argv[1]);
      }
      else if(input == 11)
      {
          delete_movie(argv[1]);
      }
      else
      }
        printf("Enter the correct option!!");
      }
      return 0;
  }
}
