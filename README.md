 # Smart Hospital & Resource Allocation System #

## Overview

**Smart Hospital & Resource Allocation System** is a menu-driven C program developed to manage basic hospital operations such as patient registration, bed allocation, patient priority, billing, and hospital reports.

The project demonstrates the use of **arrays, 2D arrays, functions, pointers, input validation, and modular programming** in C.

## Features

* Doctor specialty details
* Hospital ward details
* Patient registration
* Patient triage and priority management
* Specialty-based waiting-time estimation
* Hospital bed allocation
* Bed occupancy tracking
* Patient billing
* Age-based subsidy
* Priority reports
* Hospital summary report

## Doctor Specialties

| ID | Specialty              | Fee (LKR) | Time/Patient | Daily Capacity |
| -: | ---------------------- | --------: | -----------: | -------------: |
|  1 | General Practice (OPD) |     1,500 |       15 min |             30 |
|  2 | Paediatrics            |     2,500 |       20 min |             20 |
|  3 | Cardiology             |     4,500 |       30 min |             12 |
|  4 | Neurology              |     5,000 |       30 min |             10 |

## Hospital Wards

| ID | Ward       | Rate (LKR/day) | Capacity |
| -: | ---------- | -------------: | -------: |
|  1 | General    |          3,000 |       20 |
|  2 | Paediatric |          6,000 |       10 |
|  3 | Surgical   |         12,000 |       10 |
|  4 | ICU        |         25,000 |        5 |

## Patient Management

The system records patient information including:

* Personal details
* Contact information
* Check-in time
* Triage level
* Selected specialty
* Admission status
* Assigned ward and bed

Each registered patient receives a unique patient ID.

## Priority Management

Patients can be viewed according to:

* **Primary Priority:** Emergency/Triage level
* **Secondary Priority:** Registration order

The primary priority report places **Critical patients before Urgent and Normal patients**.

## Bed Management

The system tracks hospital bed availability and occupancy.

Bed status is represented as:
0 = Available
1 = Occupied

The system also prevents assignment of an occupied bed.

## Billing

Patient bills include:

* Consultation fee
* Emergency surcharge
* Ward stay cost
* Age-based subsidy
* Final payable amount

Billing is completed when the patient's actual stay duration is known at discharge.

Patients below 5 years or above 65 years are eligible for the applicable age subsidy.

## Reports

The system provides:

* Primary Priority Report
* Secondary Priority Report
* Summary Report
* Bed occupancy information
* Total revenue
* Total discounts
* Highest-paying patient

## Project Structure

Smart Hospital & Resource Allocation System/
│
├── main.c
├── display.c
├── patientIntake.c
├── specialty.c
├── ward.c
├── bed.c
├── billing.c
├── printBill.c
├── priority.c
├── surcharge.c
├── summary.c
└── project.h

### Main Modules

| File              | Purpose                              |
| ----------------- | ------------------------------------ |
| `main.c`          | Main program and data initialization |
| `display.c`       | Main menu                            |
| `patientIntake.c` | Patient registration                 |
| `specialty.c`     | Specialty information                |
| `ward.c`          | Ward information                     |
| `bed.c`           | Bed allocation and status            |
| `billing.c`       | Billing functions                    |
| `printBill.c`     | Patient bill                         |
| `priority.c`      | Priority reports                     |
| `surcharge.c`     | Emergency surcharge                  |
| `summary.c`       | Summary report                       |
| `project.h`       | Constants and function prototypes    |

## Technologies

* C Programming Language
* GCC
* Code::Blocks
* Git & GitHub

## C Concepts Used

* Variables and data types
* Arrays and 2D arrays
* Functions
* Pointers
* Strings
* Loops
* Conditional statements
* `switch` statements
* Input validation
* Modular programming

## Author

R.Himasha Dewmini Ranasinghe
University of Sri Jayewardenepura
BSc Undergraduate

**Smart Hospital & Resource Allocation System**
