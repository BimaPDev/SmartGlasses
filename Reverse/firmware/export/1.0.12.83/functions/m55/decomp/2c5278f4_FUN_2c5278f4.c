/* FUN_2c5278f4 @ 0x2c5278f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5278f4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c620f0c(8000,_LAB_2c527944,param_1);
  uVar2 = _LAB_2c527944;
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_2c620f0c(0x1f41,uVar2,param_1);
  uVar2 = _LAB_2c527944;
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_2c620f0c(0x1f42,uVar2,param_1);
  uVar2 = _LAB_2c527944;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_2c620f0c(0x1f44,uVar2,param_1);
  uVar2 = _LAB_2c527944;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = FUN_2c620f0c(0x1f45,uVar2,param_1);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}

