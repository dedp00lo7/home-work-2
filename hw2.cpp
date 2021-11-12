#include <iostream>
using namespace std;
int main()
{
//#1
    short int shi = 7;
    int i =3123;
    long long lonlon = 4293847294872;
    char ch = 'A';
    bool bl = false;
    float flt = 34.3;
    double dbl = 34.53453;
//#2
    enum tic_tac_toe {crosses, zeroes, empty};
//#3
    
    tic_tac_toe ms [3][3] = {{empty,empty,empty},{empty,empty,empty},{empty,empty,empty}  };
        ms[1][0]=crosses;
    ms[2][2]=zeroes;
//#4
    struct tic_tac_toe_field
    {
        unsigned int player_num; //номер участника
        bool turn_turn; //очередь хода
        bool crosses; //игрок играет за крестик или нолик
        int win_lose_draw; //победа/поражение/ничья
             
    };
//#5
    struct MyVariant
    {
        union MyData
        {
            int age; //возраст
            float salary; //зарплата
            char name; //имя
        };
    
        //isInt, isFloat, isChar
        unsigned int isInt : 1;
        unsigned int isFloat : 1;
        unsigned int isChar : 1;
    };
    MyVariant mydata;
    mydata.isInt=1;
        
    
    
    
    return 0;
}
