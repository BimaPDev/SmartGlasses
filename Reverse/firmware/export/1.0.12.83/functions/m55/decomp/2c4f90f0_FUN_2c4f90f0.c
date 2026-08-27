/* FUN_2c4f90f0 @ 0x2c4f90f0 */

void FUN_2c4f90f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_2c4f9134;
  puVar2 = (undefined4 *)FUN_2c6442f0(*DAT_2c4f9134,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    uVar3 = FUN_2c673c88();
    puVar2[3] = uVar3;
    uVar3 = param_1[5];
    puVar2[4] = param_1[4];
    puVar2[5] = uVar3;
    FUN_2c6442fc(*puVar1,puVar2);
    return;
  }
  return;
}

