#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fstate, *fcity, *fout;
    char states[5][20] = {"Tamil Nadu", "Karnataka", "Maharashtra", "Gujarat", "Punjab"};
    char cities[5][20] = {"Chennai", "Bengaluru", "Mumbai", "Gandhinagar", "Chandigarh"};

    // Step 1: Write states to State.txt
    fstate = fopen("State.txt", "w");
    if (fstate == NULL) {
        printf("Could not create State.txt\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        fprintf(fstate, "%s\n", states[i]);
    }
    fclose(fstate);

    // Step 2: Write capitals to City.txt
    fcity = fopen("City.txt", "w");
    if (fcity == NULL) {
        printf("Could not create City.txt\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        fprintf(fcity, "%s\n", cities[i]);
    }
    fclose(fcity);

    // Step 3: Read both files and write to State Capital.txt
    fstate = fopen("State.txt", "r");
    fcity = fopen("City.txt", "r");
    fout = fopen("State Capital.txt", "w");

    if (fstate == NULL || fcity == NULL || fout == NULL) {
        printf("Error opening one of the files.\n");
        return 1;
    }

    char state[50], city[50];
    while (fgets(state, sizeof(state), fstate) && fgets(city, sizeof(city), fcity)) {
        // Remove newline characters
        state[strcspn(state, "\n")] = 0;
        city[strcspn(city, "\n")] = 0;
        fprintf(fout, "The capital of the state %s is %s.\n", state, city);
    }

    printf("State Capital.txt has been created successfully!\n");

    fclose(fstate);
    fclose(fcity);
    fclose(fout);

    return 0;
}
