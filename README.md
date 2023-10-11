
## Employee Inheritance Hierarchy

**Inheritance Hierarchy**

The following inheritance hierarchy is implemented in the code:

## Employee Inheritance Hierarchy Documentation

This documentation provides instructions on how to run the example code, a brief overview of the implemented inheritance hierarchy, and any additional information required for evaluation. This Employee Management System is designed to handle different employee roles, including managers, directors, salespersons, and interns. The system is implemented in Python with a modular structure:


### Inheritance Hierarchy

The following inheritance hierarchy is implemented in the code:

```python
Employee
├── Manager
│── Director
└── SalesPerson
└── Intern

```
## File Structure:
- **employee.py**: Defines the base class `Employee`.
- **manager.py**: Defines the derived class `Manager`.
- **director.py**: Defines the derived class `Director`.
- **salesperson.py**: Defines the derived class `SalesPerson`.
- **intern.py**: Defines the derived class `Intern`.
- **tester.py**: Module for example usage.

## Running the Example Code:

To run the example code, follow these steps:

1. Make sure you have Python installed on your system.

    ```bash
   
    ```

2. Navigate to the project directory.

    ```bash
    cd andrewid_hw1
    ```

4. To execute the example code, just open the command prompt and run the below command to execute the tester.py file:

    ```b
    python tester.py
    ```
## Overview of the Inheritance Hierarchy:

1. **Employee (employee.py):**
   - Base class representing a regular employee.
   - Attributes: `employee_id`, `first_name`, `last_name`, `email`, `salary`.
   - Methods: `calculate_earnings`, `display_info`, getter and setter methods for attributes.

2. **Manager (manager.py):**
   - Derived class from `Employee`.
   - Additional attributes: `department`, `num_direct_reports`, `management_support_allowance_rate`.
   - Overrides `calculate_earnings` for role-specific earnings calculation.

3. **Director (director.py):**
   - Derived class from `Employee`.
   - Additional attributes: `department`, `bonus`.
   - Overrides `calculate_earnings` for role-specific earnings calculation.

4. **SalesPerson (salesperson.py):**
   - Derived class from `Employee`.
   - Additional attributes: `sales_amount`, `commission_rate`.
   - Overrides `calculate_earnings` for role-specific earnings calculation.

5. **Intern (intern.py):**
   - Derived class from `Employee`.
   - Additional attributes: `university_name`, `program_name`, `internship_duration`.
   - Overrides `calculate_earnings` for role-specific earnings calculation.

