<table>
    <tr>
        <td><img align="left" src="logo.png?raw=true" width="250px"></td>
        <td>
            <h1>Blink</h1>
            <p>A «No-shit» setup for compiling and flashing C++ code to SparkFun Pro Micro board using Linux host.</p>
        </td>
    </tr>
</table>

## Requirements

```shell
sudo apt install arduino-mk
```

## Cloning repo

```shell
git clone --recursive git@github.com:zezic/blink.git
```

## Compiling

```shell
make
```

## Flashing

Normal flashing

```
make upload
```

Emergency flashing, in case someone forgot to initialize USB with `USBDevice.attach()`

```
./avrdude-flash.sh build-promicro-16MHzatmega32U4/blink.hex
```

## Getting help

```
make help
```