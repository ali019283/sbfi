# sbfi
sbfi is a branfuck interpreter with aditional features added to bf

# how to use
```
+-------------------------------------------------------------------+
| -> sbfi           [Brainfuck file}...                             |
| -> >              Move pointer right                              |
| -> <              Move pointer left                               |
| -> +              Raise pointed value by 1                        |
| -> -              Decrease pointed value by 1                     |
| -> .              Output pointed value                            |
| -> ,              Get input and store at pointed value            |
| -> [              Jump to ] if pointed value is 0                 |
| -> ]              Jump to [ if pointed value isn't 0              |
+-------------------------------------------------------------------+
```

# installing / compiling
run 
```
# make
```
to compile

run 
```
# make install
```
to install
