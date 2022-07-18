int main(void)
{
    Project1 project1; // Tell the compiler to build our object based on the class recipe.

    project1.Init(21, 30, 0); // To access a function in the object, we use the object_name.method_name

    while (1)
    {
        unsigned int choice = 0;

        project1.ClearScreen();
        project1.displayClocks();
        project1.printMenu();
        choice = project1.getMenuChoice(MAXCHOICE);  // Replace MAXCHOICE with the last menu choice
        // process choice
        if (choice == EXIT_CHOICE) // Replace EXIT_CHOICE with the menu entry for exit
            break;
    }
}
