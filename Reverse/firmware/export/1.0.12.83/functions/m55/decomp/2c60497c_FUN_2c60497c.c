/* FUN_2c60497c @ 0x2c60497c */

void FUN_2c60497c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_2c606bc8();
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = *(byte *)(iVar2 + 0x18) & 3;
  if (uVar1 != param_2) {
    *(byte *)(iVar2 + 0x18) = *(byte *)(iVar2 + 0x18) & 0xfc | (byte)param_2 & 3;
    FUN_2c607df0(param_1,uVar1,iVar2,param_4);
    return;
  }
  return;
}

