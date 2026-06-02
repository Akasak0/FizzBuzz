for i in 1...101 do
  puts ((i % 3 == 0) and (i % 5 == 0)) ? "FizzBuzz" : (i % 3 == 0) ? "Fizz" : (i % 5 == 0) ? "Buzz" : i
end
