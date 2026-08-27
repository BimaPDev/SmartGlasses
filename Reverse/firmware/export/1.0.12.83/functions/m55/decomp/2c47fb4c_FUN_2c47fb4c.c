/* FUN_2c47fb4c @ 0x2c47fb4c */

void FUN_2c47fb4c(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  if ((*param_1 & 1) == 0) {
    iVar1 = 0;
    if (param_1 + param_3 <= param_1) {
      return;
    }
  }
  else {
    iVar1 = FUN_2c47f410(param_1,param_1,param_2,param_3);
    if (param_1 + param_3 <= param_1) goto LAB_2c47fb84;
  }
  puVar3 = param_1 + param_3;
  uVar4 = 0;
  do {
    puVar3 = puVar3 + -1;
    uVar2 = uVar4 | *puVar3 >> 1;
    uVar4 = *puVar3 << 0x1f;
    *puVar3 = uVar2;
  } while (param_1 < puVar3);
LAB_2c47fb84:
  if (iVar1 != 0) {
    param_1[param_3 + 0x3fffffff] = param_1[param_3 + 0x3fffffff] | 0x80000000;
  }
  return;
}

