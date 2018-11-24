#include <allegro.h>
#include <stdio.h>

#include "ant.h"
#include "multimedia.h"
#include "rt_thread.h"

int main(int argc, char **argv) {

    if (init_allegro())
        return 1;

    init_rt_thread_manager();

    spawn_ants(8);
    printf("Ants spawned\n");

    /*while (!keypressed()) {
        printf("Restuing\n");
        rest(2000);
    }*/

    int k = readkey();

    kill_ants();

    return 0;
}
END_OF_MAIN()

