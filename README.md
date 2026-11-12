 # Smart Elevator System

## Problem Statement

A smart elevator system needs to determine the correct direction of movement based on the passenger's request.

When a user selects a floor, the system compares the destination floor with the current floor.

- If the destination floor is above the current floor, the lift moves *UP*.
- If the destination floor is below the current floor, the lift moves *DOWN*.
- If the user is already on the requested floor, the lift *STAYS*.

Given the current floor and the destination floor, determine and print the appropriate movement command.

## Input Format

The first line contains two space-separated integers:

- Current Floor
- Destination Floor

## Output Format

Print one of the following:

```text
UP
DOWN
STAY
[7:11 pm, 06/10/2026] Akka ☠️☠️☠️: smart-coupon-system
[7:14 pm, 06/10/2026] Akka ☠️☠️☠️: Smart Coupon System

Problem Statement

A smart coupon system needs to determine whether a coupon should be applied based on the customer's order amount.

The system compares the order amount with the minimum amount required to apply the coupon.

- If the order amount is greater than or equal to the minimum required amount, the coupon is APPLIED.
- If the order amount is less than the minimum required amount, the coupon is NOT APPLIED.

Given the order amount and the minimum required amount, determine and print the appropriate coupon status.

Input Format

The first line contains two space-separated integers:

- Order Amount
- Minimum Required Amount

Output Format

Print one of the following:

COUPON APPLIED
COUPON NOT APPLIED

Constraints

- The input values are integers.
- The order amount and minimum required amount represent valid amounts.
