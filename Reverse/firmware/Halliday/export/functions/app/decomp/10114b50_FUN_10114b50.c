/* FUN_10114b50 @ 0x10114b50 */

void FUN_10114b50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_1013cc60(DAT_10114bac,param_2,param_1,param_4,param_4);
  iVar1 = DAT_10114bb0;
  iVar3 = (int)uVar4;
  if (iVar3 == 0) {
    iVar3 = *(int *)(DAT_10114bb0 + 0xc);
  }
  if (extraout_r2 == 0) {
    if (*(int *)(DAT_10114bb0 + 8) == 0) {
      FUN_10119dc2(DAT_10114bbc,DAT_10114bb8,DAT_10114bb4,0x81,uVar4);
      FUN_10119dc2(DAT_10114bc0);
      FUN_1011a1f0(DAT_10114bb4,0x81,0,0);
    }
    iVar2 = *(int *)(iVar1 + 8);
    if ((((*(byte *)(iVar2 + 0xd) & 0x1f) == 0) && (*(int *)(iVar3 + 0x18) == 0)) &&
       (0x7f < *(ushort *)(iVar2 + 0xe))) {
      *(int *)(iVar1 + 0x1c) = iVar2;
      return;
    }
  }
  if (*(int *)(iVar1 + 8) != iVar3) {
    FUN_101149a0();
  }
  *(int *)(iVar1 + 0x1c) = iVar3;
  return;
}

