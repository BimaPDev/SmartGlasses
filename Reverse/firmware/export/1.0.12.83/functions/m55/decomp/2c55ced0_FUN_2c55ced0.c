/* FUN_2c55ced0 @ 0x2c55ced0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c55ced0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c606a10(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar2 != 0) {
    FUN_2c58d410(param_1 + 0x14);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  FUN_2c603a04(uVar1,0,_DAT_2c55cf20);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x2064,0x27d1);
  FUN_2c627e28(*(undefined4 *)(param_1 + 0x14),1);
  FUN_2c606d48(*(undefined4 *)(param_1 + 0x14),0xc,0);
  FUN_2c603c40(*(undefined4 *)(param_1 + 0x14),0x15,0xc,0);
  return;
}

