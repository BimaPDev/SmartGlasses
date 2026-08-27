/* FUN_2c5d47c8 @ 0x2c5d47c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d47c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c620f0c(0x3f7,_LAB_2c5d4814,param_1);
  uVar2 = _LAB_2c5d4818;
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  uVar1 = FUN_2c620f0c(0x3f6,uVar2,param_1);
  uVar2 = _LAB_2c5d481c;
  *(undefined4 *)(param_1 + 0xfc) = uVar1;
  uVar1 = FUN_2c620f0c(0x3fb,uVar2,param_1);
  uVar2 = _LAB_2c5d4820;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  uVar2 = FUN_2c620f0c(0x3fc,uVar2,param_1);
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  return;
}

