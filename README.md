#Hospital Domain

Usar com o planejador DiNo `https://github.com/KCL-Planning/DiNo` e com o validador VAL `https://github.com/KCL-Planning/VAL`.

###Para rodar o planejador 

```
Executed command line: 
$ "/home/debo/planejador/DiNo/bin/pddl2upm" hospital.pddl problem.pddl
$ "/home/debo/planejador/DiNo/bin/dino" hospital.pddl problem.pddl
$ ./hospital_planner
```

###Para rodar o validador  interno do DiNo

```
$ ./hospital_planner -val
```
###Para rodar o Val

"/home/debo/planejador/VAL-master/validate" -v hospital.pddl problem1.pddl problem1_plan.pddl