<h1>Learn QT5</h1>

Learning QT5 with C++

---

<h2>Index</h2>

- [Installation](#installation)
- [Compiling](#compiling)
  - [Single scripts](#single-scripts)
  - [Many sources](#many-sources)
  - [Graphic projects](#graphic-projects)
- [References](#references)

---

## Installation

1. Install dependencies

```shell
sudo apt update
sudo apt install build-essential libgl1-mesa-dev
```

2. Install qt tools:

```shell
sudo apt install qt5-default qtcreator qmake
```

---

## Compiling

### Single scripts

For simple tutorial files (everythin in src that isn't in "graphics"), do:

1. Set execution permission to the compile bash script:

```shell
chmod +x compile.sh
```

2. Run the bash script passing the module and your program name (without the *.cpp* extension) as arguments. For instance, if you have your file as `src/strings/init.cpp`, do:

```shell
./compile.sh strings init
```

### Many sources

If your program is build with several .cpp files, then pass all of them in command line, using the main source as the last one. For instance, if your sources are `Book.cpp` and `sortcustomclass.cpp` (this one having the main function), and both located at `src/containers`, do:

```shell
./compile.sh containers Book sortcustomclass
```

### Graphic projects

For graphic projects, configure your `*.pro` file, then:

```shell
qmake
make
./bin/<your-project-name>
```

---

## References

[1] https://zetcode.com/gui/qt5

[2] https://doc.qt.io/archives/qt-5.12/

[3] https://wiki.qt.io/
