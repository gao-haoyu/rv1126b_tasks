# !/bin/bash
gcc led_with_arg_main.c -o ../output/x86/led_args
aarch64-buildroot-linux-gnu-gcc led_with_arg_main.c -o ../output/arm/led_args_arm
gcc led_without_arg_main.c -o ../output/x86/led_noarg
aarch64-buildroot-linux-gnu-gcc led_without_arg_main.c -o ../output/arm/led_noarg_arm