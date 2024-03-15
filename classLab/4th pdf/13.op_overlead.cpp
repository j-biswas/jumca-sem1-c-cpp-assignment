#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
   
    friend istream& operator>>(istream& input, Time& t);

    Time operator+(const Time& other) const;

    friend ostream& operator<<(ostream& output, const Time& t);

    bool operator==(const Time& other) const;
};

istream& operator>>(istream& input, Time& t) {
    cout << "Enter time (hours:minutes:seconds): ";
    input >> t.hours >> t.minutes >> t.seconds;
    return input;
}

Time Time::operator+(const Time& other) const {
    Time result;
    result.seconds = seconds + other.seconds;
    result.minutes = minutes + other.minutes + result.seconds / 60;
    result.hours = hours + other.hours + result.minutes / 60;

    result.seconds %= 60;
    result.minutes %= 60;

    return result;
}


ostream& operator<<(ostream& output, const Time& t) {
    output << t.hours << " hours " << t.minutes << " minutes " << t.seconds << " seconds";
    return output;
}


bool Time::operator==(const Time& other) const {
    return (hours == other.hours) && (minutes == other.minutes) && (seconds == other.seconds);
}

int main() {
    Time time1, time2, sum;

    
    cout << "Enter the first time:\n";
    cin >> time1;

    cout << "Enter the second time:\n";
    cin >> time2;

    sum = time1 + time2;
    cout << "\nSum of the two times:\n" << sum << endl;

    if (time1 == time2) {
        cout << "The two times are equal.\n";
    } else {
        cout << "The two times are not equal.\n";
    }

    return 0;
}
