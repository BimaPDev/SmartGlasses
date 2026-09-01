/* FUN_10137558 @ 0x10137558 */

undefined4 FUN_10137558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uStack_14;
  uint uStack_10;
  
  bVar1 = *(byte *)(param_1 + 0x13c);
  if ((bVar1 & 0xf) <= bVar1 >> 4) {
    uStack_10 = param_4;
    if ((int)((uint)*(byte *)(DAT_100de148 + 3) << 0x1b) < 0) {
      FUN_10119dc2(DAT_100de14c);
    }
    (**(code **)(*DAT_100de150 + 0x18))(param_1,0);
    return 0xfffffffb;
  }
  uStack_10 = (bVar1 >> 4) + 1;
  *(undefined2 *)(param_1 + 0xd2) = *(undefined2 *)(param_1 + ((bVar1 >> 4) + 0x94) * 2);
  *(byte *)(param_1 + 0x13c) = bVar1 & 0xf | (byte)((uStack_10 & 0xf) << 4);
  uStack_14 = 2;
  if ((param_1 == 0) || (-1 < *(char *)(param_1 + 0x60))) {
    FUN_100a5b78(DAT_100de0ec | (DAT_100de0e8 - DAT_100de0e4) * 0x20 & 0xff00U,DAT_100de0f0);
    uVar2 = 0xffffffea;
  }
  else {
    iVar3 = FUN_100de004(0,2,0,param_1 + 0xe8,param_1);
    if (iVar3 == 0) {
      uVar2 = 0xfffffff4;
    }
    else {
      uStack_14 = CONCAT31(uStack_14._1_3_,*(undefined1 *)(param_1 + 0xd2)) & 0xfffffffc;
      FUN_10137188(iVar3,&uStack_14,1);
      uVar2 = FUN_100ddd34(param_1,iVar3);
    }
  }
  return uVar2;
}

