/* FUN_2c4e41a0 @ 0x2c4e41a0 */

uint FUN_2c4e41a0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  if ((uVar2 < *(uint *)(param_1 + 0x58)) || (*(uint *)(param_1 + 0x54) <= uVar2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x54) - uVar2;
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    FUN_2c674668(param_2,*(int *)(param_1 + 0x38) + (uVar2 & *(uint *)(param_1 + 0x4c)),uVar1);
    *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar1;
  }
  return uVar1;
}

