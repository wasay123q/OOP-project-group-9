# 🏫 School Management System

A comprehensive C++ console application for managing school operations including student records, faculty management, attendance tracking, and fee management.

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [System Architecture](#system-architecture)
- [Installation](#installation)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Technical Details](#technical-details)
- [Contributing](#contributing)
- [License](#license)

## 🎯 Overview

The School Management System is a robust console-based application built in C++ that provides a complete solution for educational institutions to manage their daily operations. The system supports three distinct user roles: Students, Faculty, and Administrators, each with specific permissions and functionalities.

### Key Highlights

- **Multi-User Authentication System** with secure login/signup
- **Comprehensive Student Management** with detailed record keeping
- **Faculty Management** with employee records and access control
- **Attendance Tracking** for all classes
- **Fee Management** with payment status tracking
- **File-based Data Persistence** for reliable data storage

## ✨ Features

### 🎓 Student Management
- **Student Registration**: Add new students with comprehensive details
- **Student Records**: Store and manage student information including:
  - Personal details (name, age, contact information)
  - Academic information (class, section, roll number)
  - Medical information (blood group)
  - Financial information (fee details)
- **Student Search**: Quick lookup by roll number
- **Record Modification**: Update and delete student records
- **Class-wise Organization**: Separate files for each class (1st to 5th)

### 👨‍🏫 Faculty Management
- **Faculty Registration**: Add new faculty members
- **Employee Records**: Comprehensive faculty information management
- **Faculty Search**: Lookup faculty by ID number
- **Access Control**: Faculty-specific permissions and features

### 📊 Attendance System
- **Daily Attendance**: Mark attendance for each class
- **Attendance Records**: View historical attendance data
- **Class-wise Tracking**: Separate attendance files for each class
- **Status Tracking**: Present/Absent status for each student

### 💰 Fee Management
- **Fee Payment Tracking**: Record payment status (paid/unpaid)
- **Fee Records**: View payment history by class
- **Student-wise Tracking**: Individual fee status for each student

### 🔐 Authentication & Security
- **Multi-Role Authentication**: Separate login systems for Students, Faculty, and Admins
- **Password Protection**: Secure password input with asterisk masking
- **Username Validation**: Length and format validation
- **Session Management**: Proper login/logout functionality

## 🏗️ System Architecture

The application follows Object-Oriented Programming principles with three main classes:

### 1. Student Class
```cpp
class Student {
    // Private members for student data
    // Public methods for student operations
}
```

**Key Methods:**
- `add_students()` - Student registration
- `display_record()` - View all student records
- `search()` - Search student by roll number
- `attendence()` - Mark attendance
- `remove_student()` - Delete student records
- `fee_payment()` - Manage fee payments

### 2. Faculty Class
```cpp
class Faculty {
    // Private members for faculty data
    // Public methods for faculty operations
}
```

**Key Methods:**
- `add_faculty_member()` - Faculty registration
- `Faculty_record()` - View faculty records
- `search_faculty_member()` - Search faculty by ID
- `remove_faculty()` - Delete faculty records

### 3. Admin Class
```cpp
class admin {
    // Composition of Student and Faculty objects
    // Administrative control methods
}
```

**Key Methods:**
- `admin_login()` - Admin authentication
- `admin_signup()` - Admin registration
- Delegation methods for student and faculty management

## 🚀 Installation

### Prerequisites
- C++ compiler (GCC, Clang, or MSVC)
- Windows OS (for Windows-specific headers)
- Console/terminal access

### Compilation
```bash
# Using GCC
g++ -o school_management_system Code.cpp

# Using Clang
clang++ -o school_management_system Code.cpp

# Using MSVC
cl Code.cpp /Fe:school_management_system.exe
```

### Running the Application
```bash
# Windows
school_management_system.exe

# Linux/Mac
./school_management_system
```

## 📖 Usage

### 1. Main Menu
Upon launching the application, users are presented with a comprehensive main menu:

```
******************************************************
|                                                    |
|             School Management System               |
|                                                    |
******************************************************

_____________________________________________________________________________
|                                                                           |
|    *********                                    ********                  |
|     Sign-up                                     Log-in                    |
|    *********                                    ********                  |
|                                                                           |
|  1---Student sign-up                          4---Student login          |
|  2---Faculty sign-up                          5---Faculty login          |
|  3---Admin sign-up                            6---Admin login            |
|___________________________________________________________________________|
```

### 2. User Registration
Each user type (Student, Faculty, Admin) has a dedicated signup process:
- **Username Requirements**: 6-20 characters
- **Password Security**: Hidden input with asterisk masking
- **Data Validation**: Comprehensive input validation

### 3. User Login
Secure authentication system with:
- Username/password verification
- Role-based access control
- Session management

### 4. Role-Specific Features

#### Student Features
- View personal records
- Check attendance history
- Access limited information

#### Faculty Features
- Mark student attendance
- View attendance records
- Manage student records
- Handle fee payments
- Search student information

#### Admin Features
- Full system access
- Faculty management
- Student record management
- System-wide attendance and fee oversight

## 📁 File Structure

The application creates and manages the following data files:

### Student Data Files
- `class1.txt` - 1st class student records
- `class2.txt` - 2nd class student records
- `class3.txt` - 3rd class student records
- `class4.txt` - 4th class student records
- `class5.txt` - 5th class student records

### Attendance Files
- `attendence class 1.txt` - 1st class attendance
- `attendence class 2.txt` - 2nd class attendance
- `attendence class 3.txt` - 3rd class attendance
- `attendence class 4.txt` - 4th class attendance
- `attendence class 5.txt` - 5th class attendance

### Fee Management Files
- `fee class 1.txt` - 1st class fee records
- `fee class 2.txt` - 2nd class fee records
- `fee class 3.txt` - 3rd class fee records
- `fee class 4.txt` - 4th class fee records
- `fee class 5.txt` - 5th class fee records

### Authentication Files
- `students password.txt` - Student login credentials
- `faculty password.txt` - Faculty login credentials
- `admin password.txt` - Admin login credentials

### Faculty Data
- `faculty.txt` - Faculty member records

### Temporary Files
- `delete class X.txt` - Temporary files for record deletion
- `delete1.txt` - Temporary faculty deletion file

## 🔧 Technical Details

### Dependencies
```cpp
#include <iostream>    // Input/output operations
#include <fstream>     // File handling
#include <iomanip>     // Input/output formatting
#include <conio.h>     // Console input (Windows-specific)
#include <windows.h>   // Windows API functions
#include <cstdlib>     // General utilities
```

### Key Technical Features

#### 1. File I/O Operations
- **Append Mode**: New records are added without overwriting existing data
- **Input Mode**: Secure reading of stored records
- **Error Handling**: Comprehensive file operation error checking

#### 2. Input Validation
- **Length Validation**: Username length restrictions
- **Format Validation**: Phone number and CNIC format checking
- **Range Validation**: Roll number and age range validation
- **Choice Validation**: Menu option validation

#### 3. Data Persistence
- **Text File Storage**: Human-readable data storage
- **Structured Format**: Consistent data organization
- **Backup Mechanism**: Temporary files for safe deletion operations

#### 4. User Interface
- **Console-based UI**: Clean, organized interface
- **Menu-driven Navigation**: Intuitive user navigation
- **Clear Visual Separation**: Well-structured output formatting

### Error Handling
The application implements comprehensive error handling:
- File operation errors
- Input validation errors
- Authentication failures
- Data consistency checks

## 🤝 Contributing

We welcome contributions to improve the School Management System! Please follow these guidelines:

1. **Fork the repository**
2. **Create a feature branch** (`git checkout -b feature/AmazingFeature`)
3. **Commit your changes** (`git commit -m 'Add some AmazingFeature'`)
4. **Push to the branch** (`git push origin feature/AmazingFeature`)
5. **Open a Pull Request**

### Development Guidelines
- Follow C++ coding standards
- Add appropriate comments for complex logic
- Ensure proper error handling
- Test thoroughly before submitting

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 📞 Support

For support and questions:
- Create an issue in the repository
- Contact the development team
- Check the documentation for common solutions

---

**Note**: This application is designed for educational purposes and demonstrates object-oriented programming concepts, file handling, and console application development in C++.

*Last updated: December 2024* 
