# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>

# define LED_BRIGHTNESS "/sys/class/leds/work/brightness"
# define LED_TRIGGER "/sys/class/leds/work/trigger"

int openFile(const char* filePath, int oFlag) {
    int fdTarget = open(filePath, oFlag);
    if (fdTarget < 0) {
        perror ("open file error");
        exit(-1);
    }
    return fdTarget;
}

int main(void) {
    int fdLedBright, fdLedTrigger;
    fdLedTrigger = openFile(LED_TRIGGER, O_WRONLY);
    // if (fdLedTrigger < 0) {
    //     perror ("open %s error", LED_TRIGGER);
    //     exit(-1);
    // }

    fdLedBright = openFile(LED_BRIGHTNESS, O_WRONLY);
    // if (fdLedBright < 0) {
    //     perror ("open %s error", LED_BRIGHTNESS);
    //     exit(-2);
    // }

    write(fdLedTrigger, "none", strlen("none")); //set led trigger as none

    while(1) {
        write(fdLedBright, "1", 1); // open led
        sleep(10);
        write(fdLedBright, "0", 1); //close led
        sleep(10);
    }
    close(fdLedBright);
    close(fdLedTrigger);
    return 0;
}