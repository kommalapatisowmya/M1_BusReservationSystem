# TEST PLAN and Corresponding Output

## High Level Test Plan 
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type Of Test |
| --------|:------------|:--------|:--------|:-----------|:-------------|
| H_01 | check if the avaliable bus in a system properly | proper execution | formatted bus list page | formated bus list page | Requirement |
| H_02 | check if the number seats avaliable seats menu displayed properly | proper execution | formatted menu page | formatted menu page | Requirement |
| H_03 | check if the passengers names displayed properly | proper execution | formatted name list | formatted name list | Requirement |
| H_04 | check if the seats are booked properly  | proper execution | formatted booked tickets | formatted booked tickets | Requirement |
| H_05 | check if the passengers tickets details are  displayed properly | proper execution | formatted details page |  formatted details page | Requirement |
| H_06 | check if the seats are properly allocated  | proper execution | formatted seats allocation | formatted seats allocation | Requirement |
| H_07 | check if the tickets are cancelled properly | proper execution | formatted cancel page | formatted cancel page | Requirement |
| H_08 | check if the user information displayed properly | proper execution | login credentials | login credentials | Requirement |

## Low Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type Of Test |
| --------|:------------|:--------|:--------|:-----------|:-------------|
| L_01 | verify number of avaliable bus | bus name | name present->avaliable; name absent->not found | name present->avaliable; name absent->not found | Technical |
| L_02 | verify number of avaliable seats | seat number | name present->avaliable; name absent->not found | name present->avaliable; name absent->not found | Technical |
| L_03 | verify passengers names | passenger name | name present->verified; name absent->not verified | name present->verified; name absent->not verified | Technical |
| L_04 | verify booked seats | seat number | name present->verified; name absent->not verified | name present->verified; name absent->not verified | Technical |
| L_05 | verify passengers ticket details | ticket number | name present->verified; name absent->not verified | name present->verified; name absent->not verified | Technical |
| L_06 | verify seats allocations | seat number | if entry present->allocated seats; else->not allocated | if entry present->allocated seats; else->not allocated | Technicial |
| L_07 | verify the ticket cancellation | ticket number | name present->cancelled; name absent->not cancelled | name present->cancelled; name absent->not cancelled | Technical |
| L_08 | verify user crendentials | - | if entry present->display them; else->display empty file | if entry present->display them; else->display empty file | Technical |

