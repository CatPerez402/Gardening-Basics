#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <vector>
using namespace std;
char design_Dots(int numDots) {
    for (int i = 0; i < numDots; i++) {
        cout << ". ";
    }
    cout << endl;
    return 0;}
class Plants {
public:
    string name;
    string bestmonth;
    string germination;
    string type;
    string harvest;

    Plants(string name, string type, string bestmonth, string germination, string harvest) : name(name),type(type),
                                                                                             bestmonth(bestmonth),
                                                                                             germination(germination),
                                                                                             harvest(harvest) {}

    string getName() const {
        return name;
    }

    string getBestMonth() const {
        return bestmonth;
    }

    string getGerm() const {
        return germination;
    }

    string getType() const {
        return type;
    }

    string getHarvest() const {
        return harvest;
    }};




    int main() {
        vector<Plants> plants;
        plants.emplace_back("Arugula", "Greens", "Sept-Dec and Jan-Mar", "5-7", "25-45"),
        plants.emplace_back("Basil", "Herd", "Whole Year", "5-10", "30-60"),
        plants.emplace_back("Beets", "Root Vegetable", "Jan-Feb and Sept-Dec", "7-14", "50-70"),
        plants.emplace_back("Bitter Melon", "Vegetable", "Jan-Aug", "7-14", "60-90"),
        plants.emplace_back("Celery", "Vegetable", "Jan-Feb and Sept-Dec", "10-20", "85-120"),
        plants.emplace_back("Chicory", "Greens", "Whole Year", "7-14", "60-90"),
        plants.emplace_back("Cilantro", "Herb", "Jan-Mar and Sept-Dec", "7-10", "45-70"),
        plants.emplace_back("Cucumber", "Vegetable", "Jan-Mar and Sept-Dec", "7-14", "50-70"),
        plants.emplace_back("Dill", "Herb", "Jan-Apr and Sept-Dec", "7-14", "60-90"),
        plants.emplace_back("Eggplant", "Vegetable", "Jan-May and Aug-Dec", "7-14", "70-90"),
        plants.emplace_back("Fennel", "Herb", "Jan-May and Sept-Dec", "7-14", "90-115"),
        plants.emplace_back("Ginger", "Herb", "Apr-Aug", "28+", "608-669"),
        plants.emplace_back("Kale", "Greens", "Jan-Mar and Sept-Dec", "5-10", "50-70"),
        plants.emplace_back("Lalo", "Vegetable", "Jun-Aug", "7-14", "30-60"),
        plants.emplace_back("Lettuce", "Greens", "Jan-Mar and Sept-Dec", "5-10", "50-70"),
        plants.emplace_back("Luffah", "Vegetable", "Jan-Jun", "5-10", "100-120"),
        plants.emplace_back("Miami Spinach", "Greens", "Jan-July", "7-14", "30-60"),
        plants.emplace_back("Okra", "Vegetable", "Jan-Mar and Jun-Oct", "7-14", "50-70"),
        plants.emplace_back("Parsley", "Herb", "Jan-Mar and Sept-Dec", "14-21", "70-90"),
        plants.emplace_back("Potatoes", "Root Vegetable", "Oct-Dec", "DNA", "90-120"),
        plants.emplace_back("Pumpkin", "Vegetable", "Jan-Apr and Jul-Dec", "7-14", "90-120"),
        plants.emplace_back("Sage", "Herb", "Whole Year", "14-21", "90-120"),
        plants.emplace_back("Sweet Potatoes", "Root Vegetable", "Whole Year", "DNA", "90-120"),
        plants.emplace_back("Tomatoes", "Fruit", "Jan-Feb and Sept-Dec", "7-14", "60-80");
        int title_choice, begin_choice, month;

        string jan[] = {"Peas", "Tomatoes", "Sweet Potatoes", "Cucumber", "Potatoes", "Kale", "Lettuce", "Basil", "Cilantro", "Sage", "Broccoli", "Celery"},
                feb[] = {"Cucumbers", "Tomatoes", "Beets", "Sweet Potatoes", "Celery", "Arugula", "Kale", "Lettuce","Collards", "Basil", "Cilantro", "Parsley"},
                mar[] = {"Cucumbers", "Bitter Melon", "Okra", "Pumpkin", "Eggplant", "Kale", "Lettuce", "Basil","Cilantro", "Arugula", "Fennel", "Peas"},
                april[] = {"Bitter Melon", "Eggplant", "Pumpkin", "Arugula", "Basil", "Dill", "Fennel", "Jicama","Luffah", "Chicory", "Miami Spinach", "Chinese Cabbage"},
                may[] = {"Bitter Melon", "Eggplant", "Jicama", "Chicory", "Miami Spinach", "Basil", "Fennel", "Chives","Ginger", "Luffah", "Sage", "Tumeric"},
                jun[] = {"Bitter Melon", "Chia Seed", "Okra", "Luffah", "Chicory", "Miami Spinach", "Lalo", "Basil","Chives", "Ginger", "Sage", "Tumeric"},
                jul[] = {"Bitter Melon", "Chia Seed", "Hot Pepper", "Jicama", "Okra", "Pumpkin", "Sweet Pepper","Chicory","Miami Spinach", "Basil", "Chives", "Ginger"},
                aug[] = {"Bitter Melon", "Eggplant", "Hot Pepper", "Okra", "Pumpkin", "Sweet Potato", "Baby Arugula","Lalo","Basil", "Black Pepper", "Sage", "Ginger"},
                sep[] = {"Broccoli", "Beets", "Celery", "Cucumber", "Eggplant", "Okra", "Pumpkin", "Tomatoes","Arugula", "Chicory", "Kale", "Basil"},
                oct[] = {"Broccoli", "Beets", "Celery", "Cucumber", "Eggplant", "Okra", "Pumpkin", "Tomatoes","Arugula", "Chicory", "Kale", "Basil"},
                nov[] = {"Broccoli", "Beets", "Carrots", "Tomatoes", "Celery", "Eggplant", "Cucumber", "Arugula","Chicory", "Basil", "Cilantro", "Fennel"},
                dec[] = {"Broccoli", "Beets", "Carrots", "Celery", "Cucumber", "Eggplant", "Arugula", "Chicory","Basil", "Cilantro", "Dill", "Fennel"};


        bool prog_start = true;
        while (prog_start) {
            cout
                    << " __      __   _                    _          ___             _          _             ___          _       \n"
                       " \\ \\    / /__| |__ ___ _ __  ___  | |_ ___   / __|__ _ _ _ __| |___ _ _ (_)_ _  __ _  | _ ) __ _ __(_)__ ___\n"
                       "  \\ \\/\\/ / -_) / _/ _ \\ '  \\/ -_) |  _/ _ \\ | (_ / _` | '_/ _` / -_) ' \\| | ' \\/ _` | | _ \\/ _` (_-< / _(_-<\n"
                       "   \\_/\\_/\\___|_\\__\\___/_|_|_\\___|  \\__\\___/  \\___\\__,_|_| \\__,_\\___|_||_|_|_||_\\__, | |___/\\__,_/__/_\\__/__/\n"
                       "                                                                               |___/                        ";
            cout << "\n                                              1.Begin" <<
                 "\n                                              2.About" <<
                 "\n                                              3.Quit\n";
            cin >> title_choice;
            if (title_choice == 1) {
                prog_start = false;
                bool begin_start = true;
                while (begin_start) {
                    cout << design_Dots(50);
                    cout << "Welcome to Gardening Basics! Please choose one of the options below!";
                    cout << "\n                                              1.Month Planting Guide" <<
                         "\n                                              2.Information about Plants" <<
                         "\n                                              3.Learn about sustainability"<<
                         "\n                                              4.Quit\n";
                    cin >> begin_choice;
                    if (begin_choice == 1) {
                        design_Dots(50);
                        cout << "You chose: Month Planting Guide\n";
                        cout << "Please enter months number to find out the plants you can plant during that month:";
                        cin >> month;
                        switch (month) {
                            case 1:
                                cout << "January:\n";
                                for (const auto &i: jan) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;

                            case 2:
                                cout << "February:\n";
                                for (const auto &i: feb) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 3:
                                cout << "March:\n";
                                for (const auto &i: mar) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 4:
                                cout << "April:\n";
                                for (const auto &i: april) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 5:
                                cout << "May:\n";
                                for (const auto &i: may) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 6:
                                cout << "June:\n";
                                for (const auto &i: jun) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 7:
                                cout << "July:\n";
                                for (const auto &i: jul) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 8:
                                cout << "August:\n";
                                for (const auto &i: aug) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 9:
                                cout << "September:\n";
                                for (const auto &i: sep) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 10:
                                cout << "October:\n";
                                for (const auto &i: oct) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 11:
                                cout << "November:\n";
                                for (const auto &i: nov) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            case 12:
                                cout << "December:\n";
                                for (const auto &i: dec) {
                                    cout << i << endl;
                                }
                                this_thread::sleep_for(chrono::seconds(15));
                                continue;
                            default:
                                cout << "Invalid input. Restarting choices...";
                                this_thread::sleep_for(chrono::seconds(5));

                        }


                    } else if (begin_choice == 2) {
                        design_Dots(50);
                        cout << "You chose: Information About Plants\n";
                        cout << "The section will print out every plant, in alphabetical order, along with information"
                                " to know about it.\nList will print in 10 seconds.\n";
                        this_thread::sleep_for(chrono::seconds(10));
                        design_Dots(50);
                        for (const auto &plant: plants) {
                            cout << "Name:"<< plant.getName()<< endl;
                            cout << "Type:"<< plant.getType()<< endl;
                            cout << "Planting Month/s:"<< plant.getBestMonth()<< endl;
                            cout << "Germination:"<< plant.getGerm()<< "days"<< endl;
                            cout << "Harvest:"<< plant.getHarvest()<< "days"<< endl;
                            design_Dots(50);

                        }
                    }
                    else if (begin_choice==3){
                        design_Dots(50);
                        cout<<"You chose: Learn about Sustainability\n";
                        this_thread::sleep_for(chrono::seconds(5));
                        design_Dots(50);
                        cout<<"What is sustainability?\n";
                        cout<<"While it is argued what sustainability means,"
                              " it essentially means meeting our own needs without compromising\n the ability of future generations to meet their own needs."
                              "Sustainability not only involves the environment, but the economy and society.\n";
                        this_thread::sleep_for(chrono::seconds(15));
                        design_Dots(50);
                        cout<<"What are ways to contribute to sustainable development?\n";
                        cout<<"1. Reduce, Reuse, Recycle!\n2.Use a reusable shopping bags.\n3.Use energy efficient light bulbs."
                              "\n4.Volunteer for cleanups.\n5.Use homemade cleaning supplies\n6.Conserve water\n";
                        this_thread::sleep_for(chrono::seconds(15));
                        design_Dots(50);
                        cout<<"How to contribute to sustainable development with gardening? How to help a garden by being sustainable?\n";
                        cout<<"For starters, growing your own food reduces the need for store-bought produce. This then reduces the use\n"
                              "of plastic since you can just go to your garden and pick what you want without the store's plastic packaging.\n"
                              "In addition,you can use the scraps from the produce your grew for several things. Many scraps can be\n"
                              "used for composting, which is when naturally occurring microorganisms, bacteria and insects break down the scraps.\n"
                              "Compost can then be used for your garden to help the soil! Besides that, scraps like banana peels,\n"
                              "coffee grounds and egg shells can also be used to help your garden. This can be done by combining it with water\n"
                              "and spraying your plants or simply sprinkling them(not for banana peels) on your plants.\n";
                        this_thread::sleep_for(chrono::seconds(45));
                        design_Dots(50);
                        
                    }
                    else if (begin_choice==4){
                        design_Dots(50);
                        cout<<"Goodbye!";
                        break;
                    }
                }

            } else if (title_choice == 2) {
                cout << design_Dots(50);
                cout << "Welcome to Gardening Basics!""Gardening Basics is based on USDA Hardiness Zone 10a.\n"
                        "USDA Hardiness Zones separate regions by their climate and plant growth.\n"
                        "Gardening Basics allows users to find out what plants to plant\n"
                        "each month and information about those plants. In addition, Gardening Basics \n"
                        "allows for the option to learn about sustainability through gardening.\n";
                cout << design_Dots(50);
                this_thread::sleep_for(chrono::seconds(20));
                continue;

            } else if (title_choice == 3) {
                cout << "Goodbye!";
                prog_start = false;
            }
            return 0;
        }
    }

