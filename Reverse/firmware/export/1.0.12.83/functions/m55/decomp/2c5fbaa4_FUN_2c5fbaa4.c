/* FUN_2c5fbaa4 @ 0x2c5fbaa4 */

void FUN_2c5fbaa4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_2c5fb9e0(*param_1);
  if (iVar1 != 0) {
    if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5fbb50,0x39,DAT_2c5fbb58,DAT_2c5fbb54,DAT_2c5fbb4c);
    }
    puVar2 = (undefined4 *)(**(code **)*param_1)(1,0x18);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5fbb50,0x3d,DAT_2c5fbb58,DAT_2c5fbb5c);
    }
    puVar2[1] = iVar1;
    uVar3 = FUN_2c5f79a4(*param_1,param_3);
    puVar2[2] = uVar3;
    iVar1 = FUN_2c5f7a44(*param_1,param_4);
    puVar2[3] = iVar1;
    puVar2[4] = param_1[3];
    *puVar2 = param_1[1];
    if (puVar2[2] != 0) {
      iVar4 = FUN_2c66c4ec(puVar2[2]);
      puVar2[5] = iVar4 + puVar2[5];
    }
    if (iVar1 != 0) {
      iVar1 = FUN_2c66c4ec(iVar1);
      puVar2[5] = iVar1 + puVar2[5];
    }
    param_1[1] = puVar2;
    param_1[3] = param_1[3] + 1;
  }
  return;
}

