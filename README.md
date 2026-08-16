<b>Complete minimal wxWidgets Hello World GUI project for macOS (Intel) using VS Code + CMake + wxWidgets.</b>

1. Install Prerequisites

Install Homebrew (if not already installed):

/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

Install wxWidgets and CMake:

brew install wxwidgets
brew install cmake

Verify installation:

wx-config --version
cmake --version
clang++ --version

Project Structure

HelloWxWidgets/
├── CMakeLists.txt
├── src/
│   └── main.cpp
└── .vscode/
    ├── settings.json
    ├── tasks.json
    └── launch.json

2. Source Code

src/main.cpp

3. CMake Configuration

CMakeLists.txt

4. VS Code Configuration

Create a .vscode directory.

.vscode/settings.json

.vscode/tasks.json

.vscode/launch.json

5. Build from Terminal

Open terminal inside project directory.

Configure:

cmake -S . -B build

Build:

cmake --build build

Run:

./build/HelloWxWidgets

You should see a window displaying:

Hello World from wxWidgets!

6. Build Directly from VS Code

Install these VS Code extensions:

C/C++
CMake Tools
CodeLLDB

Open the project folder:

code HelloWxWidgets

Build:

Terminal → Run Build Task

or

Cmd + Shift + B

Run Debug:

F5


References:

https://forums.wxwidgets.org/viewtopic.php?t=47009

he best way to start with wxWidgets in OSX is:

1. Download and unpack wxWidgets (for example in ~/wxWidgets)
2. OPen the Terminal
3. Do following:

cd ~/wxWidgets && mkdir buildOSX && cd buildOSX && ../configure && make && cd samples/minimal && make

After this will successfully finished you know that everything is compiled properly and you can start with building your own software.

In order to do that you do:

cd ~/wxWidgets/buildOSX && ./wx-config --cxxflags
cd ~/wxWidgets/buildOSX && ./wx-config --libs

