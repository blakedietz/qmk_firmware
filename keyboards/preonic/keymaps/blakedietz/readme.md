# The default Preonic layout - largely based on the Planck's
# To flash


## Hints

If you ever get an error such as the following

```
Bootloader Version: 0x00 (0)
Erasing flash...  Success
Checking memory from 0x0 to 0x6FFF...  Empty.
Bootloader and code overlap.
Use --suppress-bootloader-mem to ignore
make[1]: *** [dfu] Error 4
Make finished with errors
```

<<<<<<< HEAD
You'll first need to reset your board by erasing the
=======
You'll first need to reset your board by erasing the 
>>>>>>> 52aa1b1c9d9d9c2c3e307370e8100c8dd237eedf
bootloader

```
dfu-programmer atmega32u4 erase --force
```

You can then run the following to get into a good state

```
make preonic:default
dfu-programmer atmega32u4 flash preonic_rev2_default.hex
```

You'll need to reduce the size of the outputted firmware
<<<<<<< HEAD
=======

>>>>>>> 52aa1b1c9d9d9c2c3e307370e8100c8dd237eedf
