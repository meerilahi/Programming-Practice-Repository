import 'dart:collection';
import 'dart:io';
import 'dart:math';

void Cow_Bull() {
  Random random = Random();
  int Random_Number = random.nextInt(9999);
  Random_Number += Random_Number < 1000 ? 1000 : 0;

  int temp = Random_Number;
  var map = {};
  int i = 1;
  while (i < 10000) {
    map.addEntries([MapEntry(i, temp % 10)]);
    temp = temp ~/ 10;
    i *= 10;
  }

  int cow = 0;
  int bull = 0;

  print("Please Enter the number");
  int place = 1000;

  while (place >= 1) {
    int input = int.parse(stdin.readLineSync()!);

    if (map[place] == input) {
      print('You have a cow!');
      cow++;
      place = place ~/ 10;
      if (place > 0) {
        print('Enter next digit');
      }
    } else if (map.containsValue(input)) {
      print("You have a bull");
      bull++;
      print("Try again");
    } else {
      print("Oops! Neither Cow nor Bull");
      print("Try again");
    }
  }
  print('You have $cow cows and $bull bulls');
}

void main(List<String> arguments) {
  Cow_Bull();
}
