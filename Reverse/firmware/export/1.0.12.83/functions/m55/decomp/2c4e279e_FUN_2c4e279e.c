/* FUN_2c4e279e @ 0x2c4e279e */

int * FUN_2c4e279e(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = thunk_FUN_2c673c88();
  uVar2 = iVar1 - *param_1;
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    piVar3 = (int *)param_1[2];
    if (piVar3 != (int *)0x0) {
      *piVar3 = uVar2 + *piVar3;
    }
  }
  else {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(int *)param_1[1] = *param_1;
    *(uint *)(param_1[1] + 4) = *(int *)(param_1[1] + 4) + uVar2;
    if (*(uint *)(param_1[1] + 0xc) < uVar2) {
      *(uint *)(param_1[1] + 0xc) = uVar2;
    }
    if (uVar2 < *(uint *)(param_1[1] + 0x10)) {
      *(uint *)(param_1[1] + 0x10) = uVar2;
    }
  }
  return param_1;
}

