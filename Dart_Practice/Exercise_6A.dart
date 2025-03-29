import 'dart:io';
import 'dart:math';

void main(List<String> arguments) {
  Map<int, String> map = {1: 'Rock', 2: 'Scissors', 3: 'Paper '};
  int computer_score = 0;
  int user_score = 0;
  Random random = Random();
  int computer = 0;
  int user = 0;
  bool exit = false;
  print("ROCK PAPER SCISSORS GAME\n");
  while (!exit) {
    print("Rock :\t\t1\nScissors :\t2\nPaper :\t\t3");
    computer = random.nextInt(3) + 1;
    user = int.parse(stdin.readLineSync()!);

    print('Computer => ${map[computer]}');
    print('You      => ${map[user]}');

    if (computer == user) {
      print("Draw!");
    } else if (computer == 1) {
      if (user == 2) {
        print("You Lose!");
        computer_score++;
      } else if (user == 3) {
        print("You Win!");
        user_score++;
      }
    } else if (computer == 2) {
      if (user == 1) {
        print("You Win!");
        user_score++;
      } else if (user == 3) {
        print("You Lose!");
        computer_score++;
      }
    } else if (computer == 3) {
      if (user == 1) {
        print("You Lose!");
        computer_score++;
      } else if (user == 2) {
        print("You Win!");
        user_score++;
      }
    }
    print("\nPlay again:\t 1\nExit:\t\t 0");
    if (int.parse(stdin.readLineSync()!) == 0) {
      exit = true;
    }
    print("\n\n");
  }
  print("Result".toUpperCase());
  if (user_score == computer_score) {
    print("Match Draw");
  } else if (user_score > computer_score) {
    print("Congregulations You win the match!");
  } else {
    print("You lost the match!");
  }
  print("Your Score is $user_score");
  print("Computer Score is $computer_score");
}
