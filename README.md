# FizzBuzz

## 概要
さまざまな言語で書かれたFizzBuzzです。

各言語大抵二つずつファイルがあります。一つは一般的なFizzBuzz、もう一つは三項演算子などを用いてif文を避けたFizzBuzzです。前者はFizzBuzz、後者はNotGoodというファイル名にしています。

## 実行確認済み環境

macOS

| Language | Version |
| ---- | -------------- |
| C/C++ | gcc version 15.2.0 |
| Java | openjdk version "26.0.1" 2026-04-21 |
| JavaScript | node v25.9.0 |
| Python | Python 3.14.3 |
| Ruby | ruby 4.0.5 (2026-05-20 revision 64336ffd0e) +PRISM [arm64-darwin25] |
| PHP | PHP 8.5.7 (cli) |

## 実行

> FizzBuzzをNotGoodに変更するだけでNotGoodも実行可能

### C
``` bash
gcc source_codes/c/FizzBuzz.c -o c/FizzBuzz
c/FizzBuzz
```

### C++
``` bash
g++ source_codes/c++/FizzBuzz.cpp -o c++/FizzBuzz
c++/FizzBuzz
```

### Java
``` bash
java source_codes/java/FizzBuzz.java
```

### JavaScript
``` bash
node source_codes/java_script/FizzBuzz.js
```

### PHP
``` bash
php source_codes/php/FizzBuzz.php
```

### Python
``` bash
python3 source_codes/python/FizzBuzz.py
```

### Ruby
``` bash
ruby source_codes/ruby/FizzBuzz.rb
```

### Shell script
``` bash
source_codes/shell_script/FizzBuzz.sh
```

# Directory tree
```
.
├── README.md
└── source_codes
    ├── c
    │   ├── FizzBuzz
    │   ├── FizzBuzz.c
    │   ├── NotGood
    │   └── NotGood.c
    ├── c++
    │   ├── FizzBuzz
    │   ├── FizzBuzz.cpp
    │   ├── NotGood
    │   └── NotGood.cpp
    ├── go
    │   └── FizzBuzz.go
    ├── java
    │   ├── FizzBuzz.java
    │   └── NotGood.java
    ├── java_script
    │   ├── FizzBuzz.js
    │   └── NotGood.js
    ├── php
    │   └── FizzBuzz.php
    ├── python
    │   ├── FizzBuzz.py
    │   └── NotGood.py
    ├── ruby
    │   ├── FizzBuzz.rb
    │   └── NotGood.rb
    └── shell_script
        └── FizzBuzz.sh

11 directories, 20 files
```
