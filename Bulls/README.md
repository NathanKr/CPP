<h2>Introduction</h2>
Bulls (value and position are correct) and Cows(value is correct but position is not)


<h2>Functionality</h2>
<ul>
<li>User is limited in number of valid tries - configureable</li>
<li>Guess length is configureable</li>
<li>Guess contains only lower case unique letters a-z</li>
<li>Program write if the user win or lose</li>
<li>Program create random string every game</li>
<li>Program ask the user if he want to play new game after each game</li>
<li>The program write an error to the console in case of the following wrong user input
<ul>
<li>letters are not unique</li>
<li>chars are not a-z</li>
<li>number of chars is not correct</li>
</ul>

<h2>Points of interests</h2>
<ul>
<li>main is using basic c++ program which invoke BollCowGame instance</li>
<li>BollCowGame is a class which represent one "bulls and cows" game</li>
</ul>


<h2>Todo</h2>
<ul>
<li>use map in isAllUnique which reduce its complexity from O(n^2) to O(n)</li>
<li>show bulls and cows in nice font</li>
</ul>