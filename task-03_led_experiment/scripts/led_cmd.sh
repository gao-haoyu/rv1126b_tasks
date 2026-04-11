#！/bin/sh

## check led config
cat /sys/class/leds/work/trigger 
cat /sys/class/leds/work/brightness

## set led config as 1
echo none > /sys/class/leds/work/trigger
echo 1 > /sys/class/leds/work/brightness