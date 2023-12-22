//
//  main.cpp
//  Assignment 3 Part 2
//
//  Created by Darrick  on 12/5/23.
//

#include <iostream>
#include <string>
using namespace std;
// Function prototypes
string getMonthMeaning(int month);
string getDayMeaning(int day);
string getYearMeaning(int year);
string getOrdinalSuffix(int day);
int main() {
    int month, day, year;
    char choice;
    do {
        cout << "Welcome to Birthday Date Meaning Generator!"<< '\n';
        cout << endl;
        // Get month
        cout << "Please enter the month of your birthday (1-12): ";
        cin >> month;
        // Add input validation if needed
        // Get day
        cout << "Please enter the day of your birthday (1-31): ";
        cin >> day;
        // Add input validation if needed
        // Get year
        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> year;
        // Add input validation if needed
        // Display meanings
        cout << "The month of " << getMonthMeaning(month) << endl;
        cout << "The " << day << getOrdinalSuffix(day) << " of the month means " << getDayMeaning(day) << endl;
        cout << "The year " << year << " means " << getYearMeaning(year) << endl;
        // Ask to try again
        cout << "Would you like to try another one? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    cout << "Thanks for using the Birthday Date Meaning Generator!" << endl;
    return 0;
}
string getMonthMeaning(int month) {
    switch(month) {
        case 1: return "Janus, the protector of the doorways";
        case 2: return "Derived from the word Februalia, a time for sacrifice and atonement of sins";
        case 3: return "Mars, the god of war";
        case 4: return "Derived from the word aperire, meaning to open buds";
        case 5: return "Maia, the goddess of all plant growth";
        case 6: return "Youth";
        case 7: return "Julius Caesar";
        case 8: return "Augustus Caesar";
        case 9: return "Seven";
        case 10: return "Eight";
        case 11: return "Nine";
        case 12: return "Ten";
        default: return "Unknown Month";
    }
}
string getDayMeaning(int day) {
    switch(day) {
        case 1: return "Self-starter with very innovative ways of creating opportunity.";
        case 2: return "Great talent for finding solutions.";
        case 3: return "Skilled at communicating thoughts through conversation and creative pursuits.";
        case 4: return "Brings stability and rationality to any situation.";
        case 5: return "Flexibility is your forte, easily adapt to new circumstances.";
        case 6: return "Natural-born nurturer, great talent for helping and healing others.";
        case 7: return "Possesses a very refined mind and a deep urge to uncover life's mysteries.";
        case 8: return "Story of success, talent for setting and reaching goals.";
        case 9: return "Compassion makes you shine, devoted to helping the greater good.";
        case 10: return "Blessed with great leadership skills.";
        case 11: return "Keen awareness of what's happening around you.";
        case 12: return "Creativity is a driving force in your life.";
        case 13: return "Conscientious worker with a knack for creative ideas.";
        case 14: return "Open-minded and always up to try something new.";
        case 15: return "Powerful love for others, able to spread your gift of support.";
        case 16: return "Inquisitive mind that allows you to uncover important truths.";
        case 17: return "Quality of work produced when going it alone is almost unbelievable.";
        case 18: return "Open-minded and open-hearted, ambition to leave this world better.";
        case 19: return "Independence and self-sufficiency are necessities to you.";
        case 20: return "Relate to others on an almost cosmic level.";
        case 21: return "Thrive in active social settings, great value in connecting with people.";
        case 22: return "Power to create great things, determined and hardworking.";
        case 23: return "Real zest for life, eager to experience anything and everything possible.";
        case 24: return "Heart of gold, skilled at maintaining balanced, stable relationships.";
        case 25: return "Great ability to take in and process information on both conscious and subconscious levels.";
        case 26: return "Desire to succeed and feel accomplished when work benefits others.";
        case 27: return "Mind is wide open, tolerant and compassionate toward all ways of life.";
        case 28: return "Recognize the value of working with others, make a capable and compassionate leader.";
        case 29: return "Amazing ability to bring things together, receive powerful subconscious insights.";
        case 30: return "Original, innovative thinker and excellent communicator.";
        case 31: return "Effective mix of both practicality and imagination.";
        default: return "Unknown Day";
    }
}
string getYearMeaning(int year) {
    switch(year) {
        case 2000: return "Moody and Overconfident";
        case 2001: return "Energy and Passionate";
        case 2002: return "Rebel and Center of Attention";
        case 2003: return "Worried, Shy, and caring. Deep Spiritually";
        case 2004: return "Strong-Willed intelligent, Creative, and Natural Born Leader";
        case 2005: return "Honest, Intelligent, Ambitious, Blunt, and Self-Reliant";
        case 2006: return "Straightforward in thought and speech, Secret-Keeper, and Loyal";
        case 2007: return "Honest, Great Friend, Optimistic, and Moody";
        case 2008: return "Easygoing, Adaptable, Curious, and Life Seeker";
        case 2009: return "Silent, Hardworking, Lowkey, and Self-Accountable";
        case 2010: return "Resist Authority, Emotional, and Artistic";
        case 2011: return "Sensitive, Bored Easily, and Funny";
        case 2012: return "Impatient, Energetic, Smart, and Persistent";
        case 2013: return "Energetic, Self-Driven, Persistent, and Polite";
        case 2014: return "High-Profile Career, Idea Ready, and Trend Setter";
        case 2015: return "Strong Faith, Honest, Patient, and Family Oriented";
        case 2016: return "Caring, Gentle, Warm, Trustworthy, and Romantic";
        case 2017: return "Strength in Character, Faithful, and Brave";
        case 2018: return "Honest, Romantic, and Loyal";
        case 2019: return "Innovative, Loving, and Religious";
        case 2020: return "Soft Spoken, Athletic, and Driven";
        case 2021: return "Impatient, Intelligent, and Moody";
        case 2022: return "Shy, Adaptable, Curious, and Caring";
        case 2023: return "Not even a year old yet lol";
        default: return "Unknown Year";
    }
}
string getOrdinalSuffix(int day) {
    if (day % 10 == 1 && day != 11) {
        return "st";
    } else if (day % 10 == 2 && day != 12) {
        return "nd";
    } else if (day % 10 == 3 && day != 13) {
        return "rd";
    } else {
        return "th";
    }
}














