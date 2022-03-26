#!/bin/bash

MAXCOUNT=150
count=1


echo "$MAXCOUNT случайных чисел успешно сгенерированы "
echo "записаны в файл number.txt"
while [ "$count" -le $MAXCOUNT ] # Генерация 150 ($MAXCOUNT) случайных чисел.
do
number=$RANDOM
echo $number >> number.txt
let "count += 1" # Нарастить счетчик.
done
