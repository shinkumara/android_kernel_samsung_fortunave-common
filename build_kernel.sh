#!/bin/bash

export ARCH=arm
export CROSS_COMPILE=/home/khusika/Documents/OS/WIP/GrandPrime/SM-G530H_KK_Opensource/arm-eabi-4.7/bin/arm-eabi
mkdir output

make -C $(pwd) O=output msm8916_sec_defconfig VARIANT_DEFCONFIG=msm8916_sec_fortuna3g_eur_defconfig SELINUX_DEFCONFIG=selinux_defconfig
make -C $(pwd) O=output

cp output/arch/arm/boot/Image $(pwd)/arch/arm/boot/zImage
