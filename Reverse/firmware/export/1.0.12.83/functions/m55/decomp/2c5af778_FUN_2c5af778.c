/* FUN_2c5af778 @ 0x2c5af778 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5af778(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar3 = FUN_2c5fd09c();
  uVar1 = _LAB_2c5af7a0;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  uVar2 = FUN_2c5fd0c0(uVar3,_DAT_2c5af7ac,_DAT_2c5af7a4,_DAT_2c5af7a8,param_1,uVar1,0x1a);
  *(undefined1 *)(param_1 + 0x10) = uVar2;
  return;
}

