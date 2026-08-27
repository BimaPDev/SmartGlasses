/* FUN_140666e0 @ 0x140666e0 */

undefined2 FUN_140666e0(undefined4 param_1,int param_2,int param_3,ushort *param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *param_4;
  if ((uVar2 >> 0xe == 0) && ((param_4[1] - 0x2800 < 4 || (param_4[1] == 0x2900)))) {
    if (param_2 == 0) {
      return 0;
    }
    return *(undefined2 *)(DAT_140667b4 + param_2 * 6 + 4);
  }
  iVar3 = DAT_140667b4 + param_2 * 6;
  if ((uVar2 & *(ushort *)(DAT_140667b4 + param_2 * 6)) == 0) {
    return *(undefined2 *)(iVar3 + 4);
  }
  uVar4 = (uint)*(byte *)(param_3 + 10);
  uVar6 = (int)(uint)uVar2 >> (*(ushort *)(iVar3 + 2) & 0xff) & 3;
  uVar5 = uVar4 & 3;
  if ((uVar4 & 3) < uVar6) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
LAB_14066732:
    if (-1 < (int)(uVar4 << 0x1c)) {
      return 0;
    }
    uVar1 = 8;
  }
  else {
    iVar3 = FUN_1405c364(param_1);
    if (iVar3 != 0) {
      if (param_2 != 3) {
        iVar3 = FUN_1405c314(param_1,1);
        if (iVar3 == 0) {
          iVar3 = FUN_1405c314(param_1,0);
          if ((iVar3 != 0) && (iVar3 = FUN_1405c314(param_1,2), iVar3 != 0)) {
            return 0xf;
          }
          goto LAB_14066784;
        }
        if (((int)((uint)*(byte *)(param_3 + 10) << 0x1d) < 0) &&
           (uVar4 = FUN_140545e4(param_1), uVar4 < 0x10)) {
          return 0xc;
        }
      }
      uVar2 = FUN_1405c364(param_1);
      if (uVar5 <= uVar2) {
        uVar4 = (uint)*(byte *)(param_3 + 10);
        goto LAB_14066732;
      }
    }
LAB_14066784:
    uVar1 = 5;
  }
  return uVar1;
}

