/* FUN_2c5c69e0 @ 0x2c5c69e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c69e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c620f0c(0x3ff,_LAB_2c5c6a1c,param_1);
  uVar2 = _LAB_2c5c6a20;
  *(undefined4 *)(param_1 + 0x4d0) = uVar1;
  uVar1 = FUN_2c620f0c(0x405,uVar2,param_1);
  uVar2 = _LAB_2c5c6a24;
  *(undefined4 *)(param_1 + 0x4d4) = uVar1;
  uVar2 = FUN_2c620f0c(0x407,uVar2,param_1);
  *(undefined4 *)(param_1 + 0x4d8) = uVar2;
  return;
}

