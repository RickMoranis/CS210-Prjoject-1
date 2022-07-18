#include <string>

class Project1 // A recipe used to tell the compiler how to build our object.
{
private:                // Private data can only be accessed by the methods in the class.
    unsigned int h;        // This is the data, the purpose of the class.
    unsigned int m;        // The class encapsulates the data and the methods to access
    unsigned int s;        // the data in a single unit.

    std::string formatTime12(void)      //Function to format user input into a 12 hour clock
    {
        std::string result = "";
        if (h < 11) {   //Format clock to properly display first half of the day       
            if (h == 0) {   // 0 hour would be midnight so clock must be adjusted to outpout 12 for the hour
                h = 12;
                result = twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " A M";

            }
            else {
                result = twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " A M";
            }
        }
        else {  //Format clock to properly display afternoon hours properly
            h = h - 12;
            if (h == 0) {   //When subracting 12 hours from noon you end up with 0 for the hour and must set h = 12
                h = 12;
                result = twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " P M";
            }
            else {
                result = twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s) + " P M";
            }


        }
        return result;

    }

    std::string formatTime24(void)  //Function to output 24 hour clock format properly
    {
        std::string result = "";
        result = twoDigitString(h) + ":" + twoDigitString(m) + ":" + twoDigitString(s);
        return result;

    }

    void addOneSecond(void)
    {
        s = s + 1;
        if (s >= 60) {
            s = 0;
            addOneMinute();
        }

    }

    void addOneMinute(void)
    {
        m = m + 1;
        if (m >= 60) {
            m = 0;
            addOneHour();
        }

    }

    void addOneHour(void)
    {
        h = h + 1;
        if (h >= 23) {
            h = 0;
        }
    }

public: // Interface (API) - These methods can be accessed using object_name.function()
    void ClearScreen(void)
    {
        // your code here 
    }    // object_name.ClearScreen() 

    void displayClocks(void)
    {
        // your code here 
    }  // object_name.displayClocks()

    void printMenu(void)
    {
        // your code here 
    }

    unsigned int getMenuChoice(unsigned int maxChoice)
    {
        // your code here 
    };

    void Init(unsigned int Hour, unsigned int Minute, unsigned int Second) // Used to init the data
    {
        h = Hour;
        m = Minute;
        s = Second;
    }
};
