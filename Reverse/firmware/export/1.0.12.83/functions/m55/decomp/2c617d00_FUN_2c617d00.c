/* FUN_2c617d00 @ 0x2c617d00 */

void FUN_2c617d00(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(ushort *)(param_1 + 0x82) != param_2) {
    iVar3 = param_1 + 0x24;
    if (param_2 == 0) {
      param_2 = 1;
    }
    iVar1 = FUN_2c62ca18(iVar3);
    while (iVar1 != 0) {
      uVar2 = (uint)*(byte *)(iVar1 + 0xe);
      if (((*(byte *)(param_1 + 0x88) & 7) == 3) && (-1 < (int)(uVar2 << 0x1e))) {
        FUN_2c616410(param_1,iVar1,param_2,iVar1);
        uVar2 = (uint)*(byte *)(iVar1 + 0xe);
      }
      if ((int)(uVar2 << 0x1d) < 0) {
        *(undefined2 *)(iVar1 + 0xc) = 0;
        iVar1 = FUN_2c62ca28(iVar3,iVar1);
      }
      else {
        FUN_2c616410(param_1,iVar1,param_2,iVar1 + 4);
        *(undefined2 *)(iVar1 + 0xc) = 0;
        iVar1 = FUN_2c62ca28(iVar3,iVar1);
      }
    }
    *(short *)(param_1 + 0x82) = (short)param_2;
    FUN_2c607df0(param_1);
    return;
  }
  return;
}

