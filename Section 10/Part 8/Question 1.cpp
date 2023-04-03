//
// Created by RetroHazard on 2023/04/01.
//
// learncpp.com/cpp-tutorial/struct-passing-and-miscellany/
/* Objective:
 * You are running a website, and you are trying to keep track of how much
 * money you make per day from advertising.
 *
 * Declare an advertising struct
 * that keeps track of how many ads you’ve shown to readers, what percentage
 * of ads were clicked on by users, and how much you earned on average from
 * each ad that was clicked.
 * Read in values for each of these fields from the user.
 * Pass the advertising struct to a function that prints each of the values,
 * and then calculates how much you made for that day (multiply all 3 fields
 * together).
 */
#include <iostream>

struct Advertising
{
    int ads_shown {};
    double pct_clicks {};
    double avg_earned {};
};

void calcAdvertising(const Advertising& campaign)
{
    std::cout << "Total Revenue for the Day: $" <<
        (campaign.avg_earned * (campaign.pct_clicks / 100) * campaign.avg_earned)
        << '\n';
}

int main()
{
    Advertising campaign;
    std::cout << "Please Enter the Following Values:\n";
    std::cout << "Total Ads Shown to Readers: ";
    std::cin >> campaign.ads_shown;
    std::cout << "Percentage of User Clicks: ";
    std::cin >> campaign.pct_clicks;
    std::cout << "Average Earnings Per Click: ";
    std::cin >> campaign.avg_earned;

    calcAdvertising(campaign);

    return 0;
}