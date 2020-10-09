# The Monty Hall problem

In the Monty Hall quiz show, the participant gets presented 3 doors by the moderator. Only one of the doors _contains_ an extraordinary win like an expensive car or a big pile of money. The moderator opens one door containing a goat. As soon as the participant chooses one of the left doors, he can either switch and open the other door or open the door he originally choose.

The paradox is now underlying in the probabillities the participant has. Many popular mathematicians suggested that the probability to win the money is 50% because there's only two doors left after the moderator opened the first door. But that assumption is wrong. If the participant doesn't switch the door, the probabillity is 1/3. Otherwise it is 2/3. The first door, which the moderator opens will contain a goat every time. The big pile of money is obtainable in 2 out of 3 cases if the participant switches the door.

For more information about this paradox, see [Wikipedia](https://en.wikipedia.org/wiki/Monty_Hall_problem).

# The project

This code provides a simple test for the mentioned problem. The program contains a loop which will simulate several games. At the end the _result screen_ will return how many time the participant won. There's is also a macro which allows to set whether the participant switches or not. The algorithm proves that the probability to win the money when switching the door is indeed 2/3.

# License

This project uses the MIT License. For more information, see [MIT-License](https://mit-license.org/) and [License file](https://github.com/The-Last-Cookie/Monty-Hall-Problem/blob/master/LICENSE.md).
