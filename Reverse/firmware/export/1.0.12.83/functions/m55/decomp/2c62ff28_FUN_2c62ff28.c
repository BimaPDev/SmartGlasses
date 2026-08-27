/* FUN_2c62ff28 @ 0x2c62ff28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62ff28(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  short sVar2;
  byte bVar3;
  
  *(undefined4 *)(param_2 + 0x78) = 0;
  bVar3 = *(byte *)(param_2 + 0x7c) & 0xfc;
  *(byte *)(param_2 + 0x7c) = bVar3;
  FUN_2c606abc(param_2,0x300,param_3,bVar3,param_4);
  FUN_2c606abc(param_2,0x10);
  iVar1 = FUN_2c62a4c4(0);
  if (iVar1 < 0x1e) {
    sVar2 = 1;
  }
  else {
    iVar1 = FUN_2c62a4c4(0);
    sVar2 = (short)(int)((longlong)_LAB_2c62ff84 * (longlong)(iVar1 + 10) >> 0x23) -
            (short)(iVar1 + 10 >> 0x1f);
  }
  FUN_2c606bc8();
  *(short *)(*(int *)(param_2 + 8) + 0x14) = sVar2;
  return;
}

