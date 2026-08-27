/* FUN_2c51f858 @ 0x2c51f858 */

void FUN_2c51f858(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_2c5ef9d8(param_2);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_2c5ef8f4(param_2);
  if (uVar2 < 100) {
    uVar3 = ((uint)((ulonglong)DAT_2c51f8d0 * (ulonglong)uVar2 >> 0x20) & 0x7ff) >> 3;
  }
  else {
    uVar2 = 100;
    uVar3 = 9;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = FUN_2c5e2e4c(*(undefined4 *)(DAT_2c51f8c8 + uVar3 * 8));
  FUN_2c63140c(uVar5,uVar4);
  FUN_2c638814(*(undefined4 *)(param_1 + 0x1c),DAT_2c51f8cc,uVar2);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0x27d1);
  FUN_2c608808(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),0x14,6,1);
  return;
}

