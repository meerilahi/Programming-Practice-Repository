
import 'dart:io';
import 'dart:math';

void main(List<String> arguments) {
  Map<String, String> map = {
    'Rock': 'Scissors',
    'Scissors': 'Paper',
    'Paper': 'Rock'
  };
  List<String> lst = ['Rock', 'Scissors', 'Paper'];
  int loses = 0;
  int wins = 0;
  Random random = Random();
  String computer = '';
  String user = '';
  print("ROCK PAPER SCISSORS GAME\n");
  while (true) {
    print("Select your choise or press 0 to quit:\nRock\nScissors\nPaper");
    computer = lst[random.nextInt(3)];
    user = stdin.readLineSync()!;
    if (user == '0') {
      print("Wins = $wins");
      print("Loses = $loses");
      print("Bye Bye!");
      break;
    } else if (!(map.containsKey(user))) {
      print("Invalid choise Please select your choise again");
      continue;
    }

    print('Computer => $computer');
    print('You      => $user');

    if (computer == user) {
      print("You have a tie!");
    } else if (map[computer] == user) {
      print("You lose!");
      loses++;
    } else if (map[user] == computer) {
      print("You Win!");
      wins++;
    }
  }
}
