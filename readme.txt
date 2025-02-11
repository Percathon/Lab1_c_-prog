Authors: write name 
Program Description:
    The C code implements a basic menu-controlled database system which functions as a database management program. Users can operate part records by creating new entries and deleting the final item and printing record counts as well as monitoring database modifications using this system. As the command-line input accepts database names the application relies on a continually updated static counter for monitoring database modifications.

Menu Definition:
    1)Print all records - Calls print_records()
    2)Add record - Calls add_record()
    3)Delete the last record - Calls delete_record()
    4)The function print_number_of_records() will be used to execute this action.
    5)Print database size - Calls print_database_size()
    6)Print number of changes - Calls print_number_of_changes(1)
    7)Exit - Ends the program 

Function Definitions:

    print_records():
        Input: None
        Output: Prints a message
        The program uses a specific sequence of steps called algorithm to display this entry message.
    
    add_record():
        Input: Prompts for part details
        The program displays the user-entered part details to the screen.
        The program guides users to provide information about part number along with name and size together with metric and cost specifications before showing a printed report. 
   
    print_number_of_records():
        Input: None
        Output: Prints a message
        The code produces a notification to show when the function start its operation.

    print_database_size():
        Input: None
        Output: Prints a message
        The function uses an algorithm to display an entry message to the user.

    print_number_of_changes(print):
        Input: bool print
        The function will display the number of changes or increments to the user interface when print is set to true.
        The procedure requires print as input to display the change count when it evaluates to true. When print is not true it increments the static change count. Otherwise, increments the static change count.

    Files Required:
    main.c - Contains the C code for the program
