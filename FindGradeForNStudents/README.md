# Algorithm to Find Grade with Average for n Students
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

### Flowchart

<img width="441"  src="https://user-images.githubusercontent.com/32389129/65375859-66dbbc00-dca2-11e9-9dec-4c46e551fd54.png">

### Simple run
![Simplerun](https://user-images.githubusercontent.com/32389129/65376082-84aa2080-dca4-11e9-82de-7dc72472d73a.gif)
