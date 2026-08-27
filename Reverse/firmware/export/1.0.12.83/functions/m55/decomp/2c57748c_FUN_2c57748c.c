/* FUN_2c57748c @ 0x2c57748c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57748c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c606a10(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (iVar2 != 0) {
    FUN_2c58d410(param_1 + 8);
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  FUN_2c603a04(uVar1,0,_DAT_2c5774dc);
  FUN_2c607048(*(undefined4 *)(param_1 + 8),0x2064,0x27d1);
  FUN_2c627e28(*(undefined4 *)(param_1 + 8),1);
  FUN_2c606d48(*(undefined4 *)(param_1 + 8),0x18,0);
  FUN_2c603c40(*(undefined4 *)(param_1 + 8),0x15,0x18,0);
  return;
}

