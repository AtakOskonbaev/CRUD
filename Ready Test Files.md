# Ready Test Files

## Ready Test Files

### Some commands will be mixed, but it is allowed to write it separate

## Test 1 (add 2 tasks and mark them as completed):

```
Welcome! You can enter some commands both in one line and not: `add description`
Enter command (add, edit, remove, mark (same to unmark), display, save, load, exit)

```

input:

```
add make a cup of tea for every member of the family
```

output:

```
Added succesfully
Enter command (add, edit, remove, mark (same to unmark), display, save, load, exit)
```

input:
```
add submit the project to the ocs
```

now we need to mark one of them:

input:

```
mark
```

output:
```
Tasks:
ID: 1 - Description: make a cup of tea for every member of the family
ID: 2 - Description: submit the project to the ocs
Enter ID to mark/unmark: 
```

input:
```
1
```

output:
```
Succesfully marked
Enter command (add, edit, remove, mark (same to unmark), display, save, load, exit)

```

so let's see it:
```
display
```

output:
```
Tasks:
ID: 1 - Description: ~~make a cup of tea for every member of the family~~
ID: 2 - Description: submit the project to the ocs
Enter command (add, edit, remove, mark (same to unmark), display, save, load, exit)
```

so now we can save and exit:

```
save exit
```


## Test 2 (load the tasks from previous one, edit one of them and add one more):

first of all, load tasks and display them ('y' is for overwrite existing tasks):

```
load y display
```

output:
```
Tasks loaded from tasks.txt
Enter command (add, edit, remove, mark (same to unmark), display, save, load, exit)
Tasks:
ID: 1 - Description: make a cup of tea for every member of the family
ID: 2 - Description: submit the project to the ocs
Enter command (add, edit, remove, mark (same to unmark), display, save, load, exit)

```

let's edit second:


```
edit 2 hand the project to the teacher
```

and add one more task:

```
add prepare for the calculus test
```

now display, save and exit:

```
display
save
exit
```


### Test 3 (load the tasks, unmark and remove one of them):

```
load y mark
```

output:

```
Tasks loaded from tasks.txt
Enter command (add, edit, remove, mark (same to unmark), display, save, load, exit)
Tasks:
ID: 1 - Description: make a cup of tea for every member of the family
ID: 2 - Description: hand the project to the teacher
Enter ID to mark/unmark:
```

unmark the first one:

```
mark 1
```

now remove the second one:

```
remove 
2
display
```

so we got:

```
Tasks:
ID: 1 - Description: make a cup of tea for every member of the family
Enter command (add, edit, remove, mark (same to unmark), display, save, load, exit)
```