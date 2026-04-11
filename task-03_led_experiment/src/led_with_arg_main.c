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

int main(int argc, char* argv[]) {
    //防御编程
    if (argc != 2) {
        printf("Error Arg Nums : %d", argc);
        exit(-1);
    }

    int fdLedBright, fdLedTrigger;
    fdLedTrigger = openFile(LED_TRIGGER, O_WRONLY);
    fdLedBright = openFile(LED_BRIGHTNESS, O_WRONLY);

    write(fdLedTrigger, "none", strlen("none")); //set led trigger as none
    if (!strcmp(argv[1], "on")) {
        write(fdLedBright, "1", 1); // open led
    } else if (!strcmp(argv[1], "off")) {
        write(fdLedBright, "0", 1); //close led
    } else {
        printf("Unknown Operate Type : %s", argv[1]);
        exit(-1);
    }
    
    close(fdLedBright);
    close(fdLedTrigger);
    return 0;
}