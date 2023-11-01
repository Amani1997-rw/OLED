
## Human Resource Management Information System

**Implemented by Pacifique Izera Ifituburyo and Murera Amani**

The work presented herein represents Programming Assignment 2 completed for the Programming for Data Analytics course:

This documentation provides instructions on how to run our example code, a brief overview of the implemented solution and features for running our solution.

## File Structure:
- **Employee.py**: Represents an employee with roles as per ProgrammingAssignment 1. We have re-use the codes submitted in Programming
Assignment 1.
- **Attendance.py**: Represents attendance records for each employee, including date, in-time, and out-time.
- **Salary.py**: Manages salary information for each employee, including the base salary and any deductions, allowances, or bonuses.
- **HRMIS.py**: Represents the HR management system, which manages employee

## Running Our Example Code:

To run the example code, follow these steps:

1. Make sure you have Python installed on your system.


2. Navigate to the project directory.

    ```bash
    cd hw2
    ```

4. To execute our code, just open the command prompt and run the below command to execute the HRMIS.py file:

    ```b
    python HRMIS.py
    ```
    ```b
    - Enter the first name
    - Enter the last name
    - Enter an email address
    - Enter position
    - Enter salary
    - Enter the time in
    - Enter the time-out
    ```
After Entering the data the employee records, attendance data, and salary information will be stored in files
## Overview of the implemented solution and features:
The developed solution facilitates the HR manager to seamlessly add, update, or delete employee records, covering their personal and contact details while enforcing a validation process to ensure the uniqueness of employee IDs. It allows the HR manager to maintain attendance by capturing in-time and out-time for each working day.
Moreover, it provides functionality to exhibit attendance logs for individual employees and the entire team. Additionally, it computes the total working hours for each employee within a defined time frame.
Furthermore, this solution enables the generation and display of fundamental reports, such as employee lists, attendance summaries, and salary overviews for a specified month. It also incorporates a feature to persist data by saving it to files.

  

     
## Run the unit tests:

- To run the unit tests, navigate to the project directory and execute the following command in your terminal:
```b
python -m unittest test.py
```
 ```b
    - Enter the first name
    - Enter the last name
    - Enter an email address
    - Enter position
    - Enter salary
    - Enter the time in
    - Enter the time-out
 ```
If all of the tests pass, you will see ok as output in your terminal:




