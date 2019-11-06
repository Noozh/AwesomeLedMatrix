#include <avr/pgmspace.h>
#include <LedControl.h>

class MinimalIcon{

    public:
        // BigHeart
        static constexpr byte BigHeart[8] = {   B01100110,
                                                B11111111,
                                                B11111111,
                                                B11111111,
                                                B11111111,
                                                B01111110,
                                                B00111100,
                                                B00011000};

        // SmallHeart
        static constexpr byte SmallHeart[8] = {     B00000000,
                                                    B01100110,
                                                    B11111111,
                                                    B11111111,
                                                    B01111110,
                                                    B00111100,
                                                    B00011000,
                                                    B00000000};

        // Bullet
        static constexpr byte Bullet[8] = { B00011000,
                                            B00100100,
                                            B00111100,
                                            B00111100,
                                            B00111100,
                                            B00111100,
                                            B00111100,
                                            B01111110};

        // Sword
        static constexpr byte Sword[8] = {  B00011000,
                                            B00111100,
                                            B00111100,
                                            B00111100,
                                            B00111100,
                                            B10111101,
                                            B01111110,
                                            B00011000};

        // Bag
        static constexpr byte Bag[8] = {    B10000001,
                                            B10000001,
                                            B10000001,
                                            B10000001,
                                            B10000001,
                                            B11111111,
                                            B11111111,
                                            B11111111};

        // Rod
        static constexpr byte Rod[8] = {    B00000011,
                                            B00000111,
                                            B00001110,
                                            B00011100,
                                            B00111000,
                                            B01110000,
                                            B11100000,
                                            B11000000};

        // Ship
        static constexpr byte Ship[8] = {   B00000000,
                                            B00011000,
                                            B00111100,
                                            B01111110,
                                            B00010000,
                                            B00010000,
                                            B11111111,
                                            B01111110};

        // Demisemiquaver
        static constexpr byte Demisemiquaver[8] = { B00111000,
                                                    B00100100,
                                                    B00111000,
                                                    B00100100,
                                                    B00100000,
                                                    B00100000,
                                                    B11100000,
                                                    B11100000};

        // Quaver
        static constexpr byte Quaver[8] = { B00111000,
                                            B00100100,
                                            B00100000,
                                            B00100000,
                                            B00100000,
                                            B00100000,
                                            B11100000,
                                            B11100000};

        // double-quaver
        static constexpr byte DoubleQuaver[8] = {   B00111110,
                                                    B00100010,
                                                    B00111110,
                                                    B00100010,
                                                    B00100010,
                                                    B00101110,
                                                    B11101110,
                                                    B11100000};

        // Envelope
        static constexpr byte Envelope[8] = {   B11111111,
                                                B11000011,
                                                B10100101,
                                                B10011001,
                                                B10000001,
                                                B10000001,
                                                B10000001,
                                                B11111111};

        // WiFi
        static constexpr byte wifi[8] = {   B01111110,
                                            B10000001,
                                            B00111100,
                                            B01000010,
                                            B00011000,
                                            B00100100,
                                            B00000000,
                                            B00011000};

        // Full battery
        static constexpr byte FullBattery[8] = {    B00011000,
                                                    B01111110,
                                                    B01111110,
                                                    B01111110,
                                                    B01111110,
                                                    B01111110,
                                                    B01111110,
                                                    B01111110};

        // Half battery
        static constexpr byte HalfBattery[8] = {    B00011000,
                                                    B01111110,
                                                    B01000010,
                                                    B01000010,
                                                    B01000010,
                                                    B01111110,
                                                    B01111110,
                                                    B01111110};


        // Low battery
        static constexpr byte LowBattery[8] = { B00011000,
                                                B01111110,
                                                B01000010,
                                                B01000010,
                                                B01000010,
                                                B01000010,
                                                B01000010,
                                                B01111110};

        // Grial
        static constexpr byte Grial[8] = {  B11111111,
                                            B11011011,
                                            B01111110,
                                            B00111100,
                                            B00011000,
                                            B00011000,
                                            B00011000,
                                            B11111111};

        // Key
        static constexpr byte Key[8] = {    B00000000,
                                            B00000000,
                                            B11110000,
                                            B10011111,
                                            B10010101,
                                            B11110101,
                                            B00000000,
                                            B00000000};

        // Stop
        static constexpr byte Stop[8] = {   B00111100,
                                            B01111110,
                                            B11111111,
                                            B11000011,
                                            B11000011,
                                            B11111111,
                                            B01111110,
                                            B00111100};

        // Crown
        static constexpr byte Crown[8] = {  B00000000,
                                            B00000000,
                                            B00000000,
                                            B00000000,
                                            B10000001,
                                            B11011011,
                                            B11111111,
                                            B11111111};

        // Telephone
        static constexpr byte Telephone[8] = {  B00011111,
                                                B00011111,
                                                B00000011,
                                                B00000011,
                                                B00000011,
                                                B00000011,
                                                B00011111,
                                                B00011111};

        // Thunder
        static constexpr byte Thunder[8] = {    B00011100,
                                                B00111000,
                                                B01110000,
                                                B11111111,
                                                B00001110,
                                                B00011100,
                                                B00111000,
                                                B01110000};

        // Lace
        static constexpr byte Lace[8] = {   B11000011,
                                            B01100110,
                                            B00111100,
                                            B00011000,
                                            B00111100,
                                            B01100110,
                                            B01100110,
                                            B00111100};

        // Fabric
        static constexpr byte Fabric[8] = { B11001100,
                                            B11001100,
                                            B00110011,
                                            B00110011,
                                            B11001100,
                                            B11001100,
                                            B00110011,
                                            B00110011};

        MinimalIcon(){};

    private:
        int test;
};


MinimalIcon icon = MinimalIcon();

void setup(){
    Serial.begin(9600);
}

void loop(){
    //iconos.printHeart();
    Serial.println(icon.BigHeart[1]);
}
