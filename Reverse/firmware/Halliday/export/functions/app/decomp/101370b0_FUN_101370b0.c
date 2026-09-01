/* FUN_101370b0 @ 0x101370b0 */

undefined4 FUN_101370b0(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_18;
  uint local_14;
  
  uVar3 = FUN_100dd8a8();
  if ((uVar3 != 0) && (*(char *)(uVar3 + 0x60) < '\0')) {
    if ((uVar3 == 0) || (-1 < *(char *)(uVar3 + 0x60))) {
      uVar2 = 0xffffffea;
    }
    else if ((*(byte *)(DAT_100deb80 + 3) & 8) == 0 && (*(byte *)(uVar3 + 0xdd) & 1) == 0) {
      uVar2 = 0xfffffffb;
    }
    else {
      local_18 = uVar3;
      local_14 = param_2;
      iVar1 = FUN_100de004(0,0xd,0,uVar3 + 0xe8);
      if (iVar1 == 0) {
        uVar2 = 0xfffffff4;
      }
      else {
        local_18 = CONCAT31(local_18._1_3_,*(undefined1 *)(uVar3 + 0xd2)) & 0xfffffffc;
        FUN_10137188(iVar1,&local_18,1);
        local_14 = CONCAT22(local_14._2_2_,
                            (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff);
        FUN_10137188(iVar1,&local_14,2);
        uVar2 = FUN_100ddd34(uVar3,iVar1);
      }
    }
    return uVar2;
  }
  return 0xfffffffb;
}

