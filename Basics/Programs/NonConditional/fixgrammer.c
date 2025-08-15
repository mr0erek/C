#include<stdio.h>
#include<string.h> 
/* 
This time we'll use gets and puts function just to compare fgets and gets
BTW : its recalling my old school British-english Grammar, still I'm bad at it!!
*/

int main(){
    char noun[50] = "";
    char verb[50] = "";
    char adjectiveA[50] = "";
    char adjectiveB[50] = "";
    char adjectiveC[50] = "";
    printf("Enter an adjective (description): ");
    fgets(adjectiveA, sizeof(adjectiveA), stdin); adjectiveA[strlen(adjectiveA) - 1] = '\0'; 
    // gets(adjectiveA);
    
    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin); noun[strlen(noun) - 1] = '\0'; 
    // gets(noun);
    
    printf("Enter an adjective (description): ");
    fgets(adjectiveB, sizeof(adjectiveB), stdin); adjectiveB[strlen(adjectiveB) - 1] = '\0'; 
    // gets(adjectiveB);
    
    printf("Enter an verb (ending w/ -ing etc.): ");
    fgets(verb, sizeof(verb), stdin); verb[strlen(verb) - 1] = '\0'; 
    // gets(verb);
    
    printf("Enter an adjective (description): ");
    fgets(adjectiveC, sizeof(adjectiveC), stdin); adjectiveC[strlen(adjectiveC) - 1] = '\0';
    // gets(adjectiveC);


    printf("\n\nToday I got %s,\nWhere it mentioned about %s,\n%s that I had submitted %s,\nIt was the easiest CSRF for %s X worth amt.", adjectiveA, noun, adjectiveB, adjectiveC, verb);
    return 0;
}
