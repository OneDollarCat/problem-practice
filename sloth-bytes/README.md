# 🦥 sloth-bytes
👋 Hey there, it's me, **OneDollarCat**! 😺
## ❓ What is this?
This is a directory of my problem-practice repo called **sloth-bytes**.
## ❓ What is this for? And what even is Sloth Bytes?
Well, there's a YouTuber called [The Coding Sloth](www.youtube.com/@TheCodingSloth) whose channel is based on programming, and he's also really funny, go check out his videos!  
Ok, back to the topic:  
He also has a great newsletter called [Sloth Bytes](slothbytes.beehiiv.com), where he gives **weekly *bite-sized* info** and advice to make *you* a better programmer!  
And at the end of each mail, there's a **Weekly Challenge** section where he gives a problem to solve by making a *function*.  
And this is where I push *my solutions* to his problems.
## 🗃 What's inside?
In this directory, there are sub-directories for each problem.
Each of these sub-directories contains:
1. A `.md` file containing the **problem statement**.
2. A `.md` file with my **analysis and implementation** of the problem.
3. A further sub-directory `code` containing:
  - The **function source file** (written in **C++**, therefore a `.cpp` file)
  - The **tests file**, which calls the function (also a `.cpp` file)
  - The **header file** to link both the source and the main files (It's also written in C++, but commonly has a `.h` or a `.hpp` extension, I use the `.hpp` extension, but note that it doesn't matter anyway.)
## ⚒ How to use:
### 1. 📁 Clone the repo
If you haven't already, **clone this repo** using this command:
``` bash
git clone https://github.com/OneDollarCat/problem-practice.git
```
### 2. 🧭 Navigate to the problem sub-directory
To enter the sub-directory of a problem, say `problem1`, use this command:
``` bash
cd problem-practice/sloth-bytes/problem1
```
### 3. 📂 Enter the code sub-directory
For this:
``` bash
cd code
```
### 4. 🏃‍♂️ Compile and run
Note that each problem will have *three* files:
1. The header file (`.hpp`)
2. The function source file (`functionName.cpp`)
3. The main source file (always named `main.cpp`)
To compile the files into an **executable** (it can be named *anything*, here I'll name it `execName`) , using the command line and `g++`:
``` bash
g++ functionName.cpp main.cpp -o execName
```
To execute:
1. 🪟 On **Windows** (Command Prompt)
``` bash
.\execName
```
2. 🍎 🐧 On **MacOS / Linux**
``` bash
./execName
```
Ok, that's all for now, `</OneDollarCat>`
___
(P.S.: If you reached all the way here, **subscribe** to [his channel](www.youtube.com/@TheCodingSloth) and **follow** [his newsletter](slothbytes.beehiiv.com) as well, trust me, it's *great*.  
[**Disclaimer**: I have *not* been paid to praise Sloth!]
