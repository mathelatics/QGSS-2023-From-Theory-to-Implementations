#include<stdio.h>
#include<stdlib.h>

#include<time.h>

#define HEADS 0
#define TAILS 1

#define GAMES 1000



int main()
{
    
    srand(time(NULL)); 

    int heads = 0;


    for(int i = 0; i < GAMES; i++)
    {
        int coin = HEADS;
   
        
        // Computer Coices ?
        if(rand() % 2)
        {
            coin = rand() % 2;

        }

        // User's Choice of Flip ?
        if(rand() % 2)
        {
            coin = rand() % 2;
    
        }

        // Computer Flips the coin ?
        if(rand() % 2)
        {
            coin = rand() % 2;
    
        }

        // Check the outcome
        if(coin == HEADS)
        {
            heads++;
        }


    }
    printf("Heads %d out of the %d games of coin toss.\n", heads, GAMES);

    return 0;
}

/*
 1.Intialize the random number generator and keep tracks of the coins , number of times being head 
 2. Two random events are happening (1) Computer Whether flip the coin or not (2) if Computer Flip the coin then outcome itself random 
 3. 
 4. 
 5. */