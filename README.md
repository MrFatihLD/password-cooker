# Password-Cooker

**Password-Cooker** is a lightweight and fast command-line tool written in **C** that generates secure random passwords. The user can specify the desired password length between **32 and 100 characters** (inclusive), making it ideal for creating strong credentials for various use cases.

## 🔑 Features

- Generates secure and random passwords
- Customizable password length (32–100 characters)
- Simple CLI usage
- Portable and dependency-free
- Very fast execution

---

## 🚀 How to Use

### 1. Do Not Run by Double-Clicking
This program is designed to be run via the command line **with arguments**. If you double-click the `.exe` file, it will immediately exit or show an error because no parameters are passed.

### 2. Running from the Executable's Directory
Open a terminal (Command Prompt, PowerShell, or Windows Terminal), then **navigate to the folder where `pwdc.exe` is located**. Use the following format to run:

```bash
./pwdc.exe -l 32
```

## 🛠️ Adding to PATH (Optional)
If you don't want to run the program from its directory every time, you can add the folder containing `pwdc.exe` to your Windows Environment Variables (PATH):
  1. Open the Start Menu and search for "Environment Variables", then open the result.
  2. Under the "System variables" section, select Path and click the Edit button.
  3. Click New and add the full path to the folder where pwdc.exe is located.
  4. Close and reopen your terminal to apply the changes.

  Once added, you can run the program from anywhere:
  ```bash
  pwdc -l 32
  ```
