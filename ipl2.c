#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MATCHES 100
#define MAX_TEAM_LEN 50

// structure to hold match information
struct Match {
    char team1[MAX_TEAM_LEN];
    char team2[MAX_TEAM_LEN];
    char venue[MAX_TEAM_LEN];
    char date[MAX_TEAM_LEN];
};

int main() {
    struct Match matches[MAX_MATCHES];
    int num_matches = 0;

    // read matches from file
    FILE *file = fopen("matches.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
    while (fscanf(file, "%s %s %s %s", matches[num_matches].team1, matches[num_matches].team2,
                  matches[num_matches].venue, matches[num_matches].date) != EOF) {
        num_matches++;
    }
    fclose(file);

    // display matches
    printf("IPL Matches:\n");
    for (int i = 0; i < num_matches; i++) {
        printf("%s vs %s, %s, %s\n", matches[i].team1, matches[i].team2, matches[i].venue, matches[i].date);
    }

    return 0;
}