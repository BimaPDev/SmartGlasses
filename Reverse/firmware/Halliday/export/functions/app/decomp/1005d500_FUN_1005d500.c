/* FUN_1005d500 @ 0x1005d500 */

void FUN_1005d500(int *param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 <= param_3) {
    FUN_10119dc2(DAT_1005d5ac);
    uVar3 = DAT_1005d5c8;
    uVar1 = DAT_1005d5c0;
    if (param_4 != 0) {
      FUN_10119dc2(DAT_1005d5b0,*(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x14));
      FUN_1005d4c8(*(undefined4 *)(param_4 + 0x18));
      FUN_1005d4c8(*(undefined4 *)(param_4 + 0x14));
      uVar3 = DAT_1005d5c8;
      uVar1 = DAT_1005d5c0;
    }
    for (; param_2 < param_3; param_2 = param_2 + 1) {
      iVar4 = *param_2;
      if (iVar4 + 0xefffffffU <= uVar3) {
        FUN_10119dc2(uVar1,iVar4);
        FUN_1005d4c8(iVar4);
      }
    }
    FUN_10119dc2(DAT_1005d5b4);
    FUN_10119dc2(DAT_1005d5bc,DAT_1005d5b8,param_1);
    uVar2 = DAT_1005d5c4;
    uVar1 = DAT_1005d5c0;
    uVar3 = 0;
    do {
      FUN_10119dc2(uVar1,param_1[uVar3]);
      if ((uVar3 & 7) == 7) {
        FUN_10119dc2(uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80);
    FUN_10119dc2(DAT_1005d5b4);
    return;
  }
  FUN_10119dc2(DAT_1005d5a8,param_1,param_2,param_3);
  return;
}

