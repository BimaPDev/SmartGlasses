/* FUN_10125f56 @ 0x10125f56 */

void FUN_10125f56(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_10089398();
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = *(byte *)(iVar2 + 0x20) & 3;
  if (uVar1 != param_2) {
    *(byte *)(iVar2 + 0x20) = *(byte *)(iVar2 + 0x20) & 0xfc | (byte)param_2 & 3;
    FUN_10125af4(param_1,uVar1,iVar2,param_4);
    return;
  }
  return;
}

