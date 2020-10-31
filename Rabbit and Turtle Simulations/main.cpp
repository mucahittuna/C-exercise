#include <iostream>
#include <time.h>

using namespace std;

void moveTortoise(int* turtlePtr);  //kaplumbaðanýn hareketi
void moveHare(int* rabbitPtr);      //tavþanýn hareketi


int harePosition = 1;            //  tavþan konum
int tortPosition = 1;             // kaplumbaða konum
int* turtlePtr = &tortPosition;
int* rabbitPtr = &harePosition;

int main()
{

    cout << "BANG !!!!!" << endl << "AND THEY'RE OFF !!!!!" << endl;
    cout << endl;

    srand(time(NULL));

    while (1)
    {

        moveTortoise(turtlePtr);
        moveHare(rabbitPtr);

        if (*rabbitPtr < 1)
        {
            *rabbitPtr = 1;          //yarýþmacýlarýn pistte kalmasý saðlanýyor
        }
        else if (*turtlePtr < 2)
        {
            *turtlePtr = 2;
        }
        else if (*rabbitPtr == *turtlePtr)
        {

            for (int k = 0; k < *rabbitPtr - 1; k++)
            {
                cout << " ";             // kaplumbaða tavþaný yediði konumda yazý yazdýrýlýyor..
            }
            cout << "Ouch!" << endl;
        }


        for (int i = 0; i < 70; i++)
        {

            if (i == *rabbitPtr)
            {
                cout << 'H';
            }
            else if (i == *turtlePtr)        //Anlýk Yarýþma durumu
            {
                cout << 'T';
            }
            else
            {
                cout << '_';
            }
        }
        cout << endl;


        if (*rabbitPtr >= 70)
        {
            cout << endl << "Hare wins. Yuch.";
            break;
        }
        if (*turtlePtr >= 70)
        {
            cout << endl << "TORTOISE WINS!!!YAY!!!";      //kazananý ekrana yazdýrma
            break;
        }
        if (*rabbitPtr >= 70 && *turtlePtr >= 70)
        {
            cout << endl << "It's a tie.";
            break;
        }
    }
    return 0;
}
void moveTortoise(int* turtlePtr)
{

    int value = rand() % 10 + 1;

    if (value <= 5)
    {
        *turtlePtr += 3;
    }
    else if (value <= 7)
    {
        *turtlePtr -= 6;
    }
    else if (value <= 10)
    {
        *turtlePtr += 1;

    }
}

void moveHare(int* rabbitPtr) {

    int value = rand() % 10 + 1;

    if (value <= 2)
    {
        *rabbitPtr += 0;
    }
    else if (value <= 4)
    {
        *rabbitPtr += 9;
    }
    else if (value == 5)
    {
        *rabbitPtr -= 12;
    }
    else if (value <= 8)
    {
        *rabbitPtr += 1;
    }
    else if (value <= 10)
    {
        *rabbitPtr -= 2;

    }

}
