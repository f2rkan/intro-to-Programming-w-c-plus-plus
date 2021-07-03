#include<iostream>
struct travel_time
{
    int hours;
    int mins;
};
const int Mins_per_hr = 60;
travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main(void)
{
    using namespace std;
    travel_time day1 = {4, 12};
    travel_time day2 = {1, 30};
    travel_time trip = sum(day1, day2);
    
    cout << "two-day total: ";
    show_time(trip);

    travel_time day3 = {4, 55};
    cout << "three-day total: ";
    show_time(sum(trip, day3));

    cout << "done.\n";
    return 0;
}
travel_time sum(travel_time t1, travel_time t2)
{
    travel_time total;
    total.mins = (t1.mins + t2.mins) % Mins_per_hr;
    total.hours = (t1.hours + t2.hours) + (t1.mins + t2.mins) / Mins_per_hr;

    return total;
}
void show_time(travel_time t)
{
    using namespace std;
    cout << t.hours << " hours, " << t.mins << " mns." << endl;
}