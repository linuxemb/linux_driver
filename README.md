# linux_driver
Study to use seq proc file system
# Commands

insmod hello.ko
rmmod hello

Issues resolved
=========================================================

after disable security boot
root@lshi-750-339c:/home/lshi/Module# insmod hello.ko
insmod: ERROR: could not insert module hello.ko: Invalid module format


====resolve


after add GPL and user
 759.581203] hello: loading out-of-tree module taints kernel.
[  759.581257] hello: module verification failed: signature and/or required key missing - tainting kernel
[  759.581552] helloe workd form me
]


helloe bye bye form me



