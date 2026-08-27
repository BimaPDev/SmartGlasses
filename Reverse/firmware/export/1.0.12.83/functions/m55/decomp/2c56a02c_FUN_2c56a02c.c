/* FUN_2c56a02c @ 0x2c56a02c */

int * FUN_2c56a02c(int *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = *(int **)(*param_1 + param_2 * 4);
  if (piVar5 != (int *)0x0) {
    uVar2 = ((int *)*piVar5)[0xd];
    piVar3 = (int *)*piVar5;
    while ((piVar4 = piVar3, param_4 != uVar2 ||
           (iVar1 = FUN_2c66b624(*param_3,piVar4[1]), iVar1 != 0))) {
      piVar3 = (int *)*piVar4;
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      uVar2 = piVar3[0xd];
      piVar5 = piVar4;
      if (param_2 != uVar2 - param_1[1] * (uVar2 / (uint)param_1[1])) {
        return (int *)0x0;
      }
    }
  }
  return piVar5;
}

