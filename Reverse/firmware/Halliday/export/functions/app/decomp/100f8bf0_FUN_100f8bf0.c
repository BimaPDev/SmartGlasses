/* FUN_100f8bf0 @ 0x100f8bf0 */

undefined4 FUN_100f8bf0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (param_1[10] == 0)) {
    iVar5 = iVar1 * 2;
    if (iVar5 < 0) {
      uVar3 = 6;
      goto LAB_100f8c6e;
    }
    iVar2 = 0;
    if (iVar5 != 0) {
      if (0xfffffff < iVar5) {
        uVar3 = 10;
LAB_100f8c6e:
        param_1[10] = 0;
        return uVar3;
      }
      iVar2 = (**(code **)(*param_1 + 4))(*param_1,iVar1 << 4);
      if (iVar2 == 0) {
        uVar3 = 0x40;
        goto LAB_100f8c6e;
      }
      FUN_1011ea48(iVar2,0,iVar1 << 4);
      iVar1 = param_1[1];
    }
    iVar5 = param_1[6];
    iVar1 = iVar2 + iVar1 * 8;
    param_1[10] = iVar2;
    param_1[0xb] = iVar1;
    iVar6 = (int)*(short *)((int)param_1 + 0x16);
    *(undefined1 *)(param_1 + 4) = 1;
    if (iVar5 != 0) {
      iVar5 = iVar5 + iVar6 * 8;
    }
    iVar4 = param_1[7];
    param_1[0xf] = iVar5;
    if (iVar4 != 0) {
      iVar4 = iVar4 + iVar6;
    }
    iVar5 = param_1[8];
    param_1[0x10] = iVar4;
    if (iVar5 != 0) {
      iVar5 = iVar5 + (short)param_1[5] * 2;
    }
    param_1[0x13] = iVar2 + iVar6 * 8;
    param_1[0x14] = iVar6 * 8 + iVar1;
    param_1[0x11] = iVar5;
  }
  return 0;
}

