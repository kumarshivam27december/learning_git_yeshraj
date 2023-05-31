#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 10
#define MAX_MATCHES 45

void generateMatches(int numTeams, char teams[MAX_TEAMS][30], int numMatches) {
    int matchCount = 1;
    printf("\n======================*************************=============================\n");
    printf("============================IPL Schedule====================================\n");
    printf("============================================================================\n");

    for (int i = 0; i < numTeams; i++) {
        for (int j = i + 1; j < numTeams; j++) {
            if (matchCount > numMatches) {
                break;
            }
            printf("Match %d: %s vs %s\n", matchCount, teams[i], teams[j]);
            matchCount++;
        }
    }
}

void deleteTeam(int *numTeams, char teams[MAX_TEAMS][30]) {
    int teamIndex;
    char teamName[30];
    printf("Enter the name of the team to be deleted: ");
    scanf("%s", teamName);

    for (int i = 0; i < *numTeams; i++) {
        if (strcmp(teams[i], teamName) == 0) {
            teamIndex = i;
            for (int j = teamIndex; j < *numTeams - 1; j++) {
                strcpy(teams[j], teams[j + 1]);
            }
            (*numTeams)--;
            printf("Team '%s' has been deleted from the schedule.\n", teamName);
            return;
        }
    }
    printf("Team '%s' not found in the schedule.\n", teamName);
}

void insertTeam(int *numTeams, char teams[MAX_TEAMS][30]) {
    if (*numTeams == MAX_TEAMS) {
        printf("Maximum number of teams reached. No more teams can be added.\n");
        return;
    }

    char teamName[30];
    printf("Enter the name of the team to be inserted: ");
    scanf("%s", teamName);

    strcpy(teams[*numTeams], teamName);
    (*numTeams)++;
    printf("Team '%s' has been added to the schedule.\n", teamName);
}

int main() {
    int numTeams, numMatches;
    char teams[MAX_TEAMS][30];

    printf("Enter the number of teams (maximum %d): ", MAX_TEAMS);
    scanf("%d", &numTeams);
    if (numTeams > MAX_TEAMS || numTeams < 2) {
        printf("Invalid number of teams. Please enter a number between 2 and %d.\n", MAX_TEAMS);
        return 1;
    }

    printf("Enter the number of matches (maximum %d): ", MAX_MATCHES);
    scanf("%d", &numMatches);
    if (numMatches > MAX_MATCHES || numMatches < numTeams - 1) {
        printf("Invalid number of matches. Please enter a number between %d and %d.\n", numTeams - 1, MAX_MATCHES);
        return 1;
    }

    for (int i = 0; i < numTeams; i++) {
        printf("Enter name of team %d: ", i + 1);
        scanf("%s", teams[i]);
    }

    generateMatches(numTeams, teams, numMatches);

    int choice;
    while (1) {
        printf("\n=======================\n");
        printf("         MENU\n");
        printf("=======================\n");
        printf("1. Delete a team\n");
        printf("2. Insert a team\n");
        printf("3. Generate Matches\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deleteTeam(&numTeams, teams);
                break;
            case 2:
                insertTeam(&numTeams, teams);
                break;
            case 3:
                generateMatches(numTeams, teams, numMatches);
                break;
            case 4:
                printf("Thank you for using the IPL scheduler. Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
