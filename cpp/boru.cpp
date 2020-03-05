#include <iostream>

void run_address() {
    int sound_horn_time = 1;
    bool horn_blowing_europe = false;
    bool horn_blowing_asia = false;
    bool europeans_hear_horn = false;
    bool europeans_assemble = false;
    bool asians_hear_horn = false;
    bool asians_assemble = false;

    for (int t = 0; t < 10; t++) {
        std::cout << "t = " << t << std::endl;
        if (asians_hear_horn) {
            std::cout << "Asians assmble \n";
            asians_assemble = true;
        }
        if (europeans_hear_horn) {
            std::cout << "Europeans assmble \n";
            europeans_assemble = true;
        }

        europeans_hear_horn = horn_blowing_europe;
        asians_hear_horn = horn_blowing_asia;

        if (t == sound_horn_time) {
            std::cout << "Horns sounding \n";
            horn_blowing_europe = true;
            horn_blowing_asia = true;
        }
        else {
            horn_blowing_europe = false;
            horn_blowing_asia = false;
        }
    }
}

int main() {
    run_address();
}