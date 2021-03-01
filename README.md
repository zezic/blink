<table>
    <tr>
        <td><img align="left" src="logo.svg?raw=true"></td>
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

```
make upload
```

## Getting help

```
make help
```