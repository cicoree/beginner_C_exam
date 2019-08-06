## C Beginner Exam  
Problems from the 42 beginner exam solved.  
Be very careful. Some problem specifications have CHANGED even though the name of the assignment is the same as it was in 2016, for example. To deal with this I will shortly create branches for each individual problem and add the subject such as it was on the day of the exam, the subject that goes with the solution posted. Otherwise it's a huge mess. Example, an old version of rstr_capitalizer asked to CAPITALIZE the first letter of a word. That is not the version I received on July 16, 2019, when I was asked to have all letters in lowercase except the last character of a word (if it is a letter). Important difference. Word to the wise: on the day of your exam, always, ALWAYS very carefully read the problem description because it might be different/updated from what you have studied using people's githubs!!!  
Exam problem database: http://kaoteq.com/sites/42/exam-review.php (some of these are out of date, see note above!)  
Focusing on levels 2, 3, 4 as this is where I need to make progress for now.  
To test the code use https://www.jdoodle.com/c-online-compiler
  
  ### Random useful exam tips
To test output with an argument containing tabs, you type ./a.out followed by your argument in quotation marks, and wherever you want to insert a tab, type CONTROL + V and then TAB. you will see an actual tab being inserted. Don't use copy paste from a cat of the exam subject, because this will just paste in four spaces instead of an actual tab. 

echo $? to display last returned value.  
  
The vim you use during exam will be black and white. In visual mode, type ":syntax on" to make the relevant words colorful. It will help you see your code better.
  
Small reminders: SEGFAULT means you tried to read something that is outside of memory, whereas BUSERROR means you tried to write over something that cannot be changed.
