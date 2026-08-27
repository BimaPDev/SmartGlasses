/* FUN_140015c8 @ 0x140015c8 */

int FUN_140015c8(undefined4 param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = DAT_14001618;
  *(uint *)(DAT_14001618 + 4) =
       DAT_1400161c & param_3 << 0xc | *(uint *)(DAT_14001618 + 4) & 0xfe000fff;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if ((uVar2 & 0x1f00) == 0) {
    return param_3;
  }
  if (param_3 != 0) {
    iVar3 = param_3 + -1;
    param_3 = param_3 - ((uVar2 & 0x1fff) >> 8);
    do {
      bVar4 = param_3 == iVar3;
      *(undefined1 *)(iVar1 + 8) = *param_2;
      iVar3 = iVar3 + -1;
      if (bVar4) {
        return param_3;
      }
      param_2 = param_2 + 1;
    } while (iVar3 != -1);
  }
  return 0;
}

