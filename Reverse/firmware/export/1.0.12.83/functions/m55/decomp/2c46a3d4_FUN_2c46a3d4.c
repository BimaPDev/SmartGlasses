/* FUN_2c46a3d4 @ 0x2c46a3d4 */

int FUN_2c46a3d4(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (*(code *)param_1[0xc])(param_2);
  uVar2 = *param_1;
  param_1[4] = param_1[4] + 1;
  uVar1 = uVar1 - (uVar1 / uVar2) * uVar2;
  if (0 < (int)uVar2) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_1[10] + uVar1 * 0x10);
      if (iVar3 == -1) {
        return 0;
      }
      if (iVar3 != -2) {
        iVar3 = (*(code *)param_1[0xd])(iVar3,param_2);
        if (iVar3 != 0) {
          return param_1[10] + uVar1 * 0x10;
        }
        uVar2 = *param_1;
      }
      uVar1 = uVar1 + 1;
      iVar4 = iVar4 + 1;
      if (uVar1 == uVar2) {
        uVar1 = 0;
      }
    } while (iVar4 < (int)uVar2);
  }
  return 0;
}

