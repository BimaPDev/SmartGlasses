/* FUN_1400459c @ 0x1400459c */

undefined4 FUN_1400459c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    piVar1 = (int *)(param_1 + 8);
    piVar3 = (int *)0x0;
    do {
      piVar2 = piVar1;
      if (piVar2 == (int *)(param_2 + -8)) {
        *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - (piVar2[1] & 0xfffffffcU);
        if (piVar3 == (int *)0x0) {
          piVar2[1] = 0;
        }
        else {
          *piVar3 = *piVar2;
        }
        FUN_14003b4c(param_1,param_2,1);
        return 1;
      }
      piVar1 = (int *)*piVar2;
      piVar3 = piVar2;
    } while ((int *)*piVar2 != (int *)0x0);
  }
  FUN_14003b4c(param_1,param_2,0);
  return 0;
}

