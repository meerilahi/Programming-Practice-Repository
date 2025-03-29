import 'dart:collection';
import 'dart:io';
import 'dart:math';

String reverse(String str1) {
  Queue<String> Q = Queue();
  String str2 = '';
  for (var i = str1.length - 1; i >= 0; i--) {
    if (str1[i] != ' ') {

      Q.add(str1[i]);

    } else {

      while (!Q.isEmpty) {
        str2 += Q.removeLast();
      }
      str2 += ' ';

    }
  }
  while (!Q.isEmpty) {
        str2 += Q.removeLast();
      }

  return str2;
}

String ReverseSenctence(String sentencce) => sentencce.split(' ').reversed.toList().join(' ');
void main(List<String> arguments) {
  print(ReverseSenctence("My name is Taimoor Ul Islam"));
}
