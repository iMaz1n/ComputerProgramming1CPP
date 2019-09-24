# Algorithm to Find Grade with Average for N Students
### There are 10 students in a class. Each student has taken five tests, and each test is worth 100 points. We want to design an algorithm to calculate the grade for each student, as well as the class average. The grade is assigned as follows: If the average test score is greater than or equal to 90, the grade is A; if the average test score is greater than or equal to 80 and less than 90, the grade is B; if the average test score is greater than or equal to 70 and less than 80, the grade is C; if the average test score is greater than or equal to 60 and less than 70, the grade is D; otherwise, the grade is F. Note that the data consists of students’ names and their test scores.

### This is a problem that can be divided into subproblems as follows: There are five tests, so you design an algorithm to find the average test score. Next, you design an algorithm to determine the grade. The two subproblems are to determine the average test score and to determine the grade.

### Let us first design an algorithm to determine the average test score. To find the average test score, add the five test scores and then divide the sum by 5. Therefore, the algorithm is:
1. Get the five test scores.
2. Add the five test scores. Suppose sum stands for the sum of the test scores.
3. Suppose average stands for the average test score. Then:
average = sum / 5;

Next, you design an algorithm to determine the grade. Suppose grade stands for the grade
assigned to a student. The following algorithm determines the grade:

<pre>
if average is greater than or equal to 90
    grade = A
otherwise
    if average is greater than or equal to 80 and less than 90
        grade = B
otherwise
    if average is greater than or equal to 70 and less than 80
        grade = C
otherwise
    if average is greater than or equal to 60 and less than 70
        grade = D
otherwise
         grade = F
</pre>

You can use the solutions to these subproblems to design the main algorithm as follows: (Suppose totalAverage stands for the sum of the averages of each student’s test average.)

1. totalAverage = 0;
2. Repeat the following steps for each student in the class:
    1.  Get student’s name.
    2. Use the algorithm as discussed above to find the average test score.
    3. Use the algorithm as discussed above to find the grade.
    4. Update totalAverage by adding the current student’s average test score.
3. Determine the class average as follows: classAverage = totalAverage / 10

### Flowchart

<img width="804" alt="Flowchart" src="https://user-images.githubusercontent.com/32389129/65475536-9ba96800-de88-11e9-91fd-a5b1b2be7023.png">

### Simple run
![Simplerun](https://user-images.githubusercontent.com/32389129/65376082-84aa2080-dca4-11e9-82de-7dc72472d73a.gif)
