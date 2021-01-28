#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;


struct Location {
    int x;
    int y;
}

struct Deer {
    Location loc;
    int x_pos;
    int y_pos;
    char icon = '$'
    float value;
    int speed;
}

struct Player {
    Location loc;
    int x_pos;
    int y_pos;
    char icon = '+';
    int score;
    vector<float> journal;
    vector<string> places_visited;
}

int main()
{
    Player one;
    one.loc.x = 4;
    one.loc.y = 7;

    vector<Deer> deer(12);
    for (Deer d : deer)
    {
        d.loc.x = 5;
        d.loc.y = 5;
    }

}

