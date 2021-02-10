## Compiling the device tree overlay

**Packages needed:**
* raspberrypi-kernel-headers

1. Preprocess the device tree source with the C preprocessor

	```cpp -nostdinc -I /usr/src/(uname -r)/include -undef -x assembler-with-cpp drv2605l.dts drv2605l-preprocessed.dts```

2. Compile preprocessed source with `dtc`

	```dtc -I dts -O dtb -o drv2605l.dtbo drv2605l-preprocessed.dts```

## Installing and enabling device tree overlay

1. Move `drv2605l.dtbo` to `/boot/overlays`

2. Enable the overlay by:

	a. Adding `dtoverlay=drv2605l` to `/boot/config.txt`

	b. Loading the overlay with `sudo dtoverlay drv2605l`
