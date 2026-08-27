/* FUN_2c6443f4 @ 0x2c6443f4 */

int * FUN_2c6443f4(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && ((param_3 & 0xfffffffc) == 0)) {
    uVar5 = param_2 + 0xfU & 0xfffffff8;
    piVar2 = (int *)param_1[2];
    piVar3 = param_1 + 2;
    do {
      piVar1 = piVar2;
      if (uVar5 <= (int)piVar1 + (-(piVar3[1] & 0xfffffffcU) - (int)piVar3)) {
        uVar4 = param_1[1] + uVar5;
        param_1[1] = uVar4;
        if (*(uint *)((int)param_1 + *param_1 + -4) < uVar4) {
          *(uint *)((int)param_1 + *param_1 + -4) = uVar4;
        }
        if (piVar3[1] == 0) {
          piVar3[1] = uVar5 | param_3;
        }
        else {
          uVar4 = piVar3[1] & 0xfffffffc;
          *(int *)((int)piVar3 + uVar4) = *piVar3;
          piVar2 = (int *)(uVar4 + (int)piVar3);
          piVar2[1] = uVar5 | param_3;
          *piVar3 = (int)piVar2;
          piVar3 = piVar2;
        }
        FUN_2c6439d8();
        return piVar3 + 2;
      }
      piVar2 = (int *)*piVar1;
      piVar3 = piVar1;
    } while ((int *)*piVar1 != (int *)0x0);
  }
  FUN_2c6439d8();
  return (int *)0x0;
}

