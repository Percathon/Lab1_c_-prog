#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 50

// Global variable for the database name
char database_name[MAX_LENGTH];

// Function declarations
void print_records();
void add_record();
void delete_record();
void print_number_of_records();
void print_database_size();
int print_number_of_changes(int print);

// Static variable for tracking the number of changes
static int changes_count = 0;

// Main function accepting command-line arguments
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: You must provide a database name to continue.\n");
        return 1;
    }

    // Set the global database name
    strncpy(database_name, argv[1], MAX_LENGTH - 1);
    database_name[MAX_LENGTH - 1] = '\0';

    int choice;
    
    while (1) {
        // Display the menu
        printf("\nMenu for Database: %s\n", database_name);
        printf("1) Print all records\n");
        printf("2) Add record\n");
        printf("3) Delete the last record\n");
        printf("4) Print number of records\n");
        printf("5) Print database size\n");
        printf("6) Print number of changes\n");
        printf("7) Exit\n");
        printf("Please enter your selection > ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                print_records();
                break;
            case 2:
                add_record();
                break;
            case 3:
                delete_record();
                break;
            case 4:
                print_number_of_records();
                break;
            case 5:
                print_database_size();
                break;
            case 6:
                print_number_of_changes(1); 
                break;
            case 7:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid selection, please choose a number between 1 and 7.\n");
        }
    }

    return 0;
}

// Function to print all records (placeholder)
void print_records() {
    printf("You have entered the Print all records function.\n");
}

void add_record() {
    int part_number;
    char part_name[MAX_LENGTH];
    float part_size;
    char part_metric[MAX_LENGTH];
    float part_cost;

    printf("Enter part number: ");
    scanf("%d", &part_number);
    printf("Enter part name: ");
    scanf("%s", part_name);
    printf("Enter part size: ");
    scanf("%f", &part_size);
    printf("Enter part size metric: ");
    scanf("%s", part_metric);
    printf("Enter part cost: ");
    scanf("%f", &part_cost);


    printf("You entered:\n");
    printf("Part number = %d\n", part_number);
    printf("Part name = \"%s\"\n", part_name);
    printf("Part size = %.2f\n", part_size);
    printf("Part size metric = \"%s\"\n", part_metric);
    printf("Part cost = $%.2f\n", part_cost);

    print_number_of_changes(0); 
}


void delete_record() {
    printf("You have entered the delete last record function.\n");
    print_number_of_changes(0); 
}

void print_number_of_records() {
    printf("You have entered the Print number of records function.\n");
}

void print_database_size() {
    printf("You have entered the Print database size function.\n");
}


int print_number_of_changes(int print) {
    if (print) {
        printf("You have modified the database %d times.\n", changes_count);
    } else {
        changes_count++;
        printf("Database modified. %d modifications so far.\n", changes_count);
    }
    return changes_count;
}
