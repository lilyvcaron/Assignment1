#include <iostream>

using namespace std;
int main()
{
    int capacity;
    int numAttendees;

    cout << "Enter the maximum room capacity." << endl;
    cin >> capacity;

    cout << "Enter the number of people planning to attend the event." << endl;
    cin >> numAttendees;

    if (numAttendees <= capacity)
    {

        cout << "The meeting is legal to hold." << endl;
        cout << (capacity - numAttendees) << " additional people may legally attend.";
    }
    else if (numAttendees > capacity)
    {
        cout << "WARNING: The meeting is not legal to hold due to fire regulations." << endl;
        cout << (numAttendees - capacity) << " attendees must be excluded to hold the meeting.";
    }

    return 0;
}
