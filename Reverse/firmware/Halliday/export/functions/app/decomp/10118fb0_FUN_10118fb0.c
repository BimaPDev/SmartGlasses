/* FUN_10118fb0 @ 0x10118fb0 */

undefined4 FUN_10118fb0(uint *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = *(ushort *)(param_2 + 3);
  if ((int)((uint)uVar3 << 0x1c) < 0) {
    iVar1 = param_2[4];
    if (iVar1 != 0) {
      iVar7 = *param_2;
      *param_2 = iVar1;
      if ((uVar3 & 3) == 0) {
        iVar5 = param_2[5];
      }
      else {
        iVar5 = 0;
      }
      param_2[2] = iVar5;
      for (iVar7 = iVar7 - iVar1; 0 < iVar7; iVar7 = iVar7 - iVar5) {
        iVar5 = (*(code *)param_2[10])(param_1,param_2[8],iVar1,iVar7);
        if (iVar5 < 1) {
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
          return 0xffffffff;
        }
        iVar1 = iVar1 + iVar5;
      }
    }
  }
  else {
    if ((param_2[1] < 1) && (param_2[0x10] < 1)) {
      return 0;
    }
    pcVar6 = (code *)param_2[0xb];
    if (pcVar6 == (code *)0x0) {
      return 0;
    }
    uVar8 = *param_1;
    *param_1 = 0;
    if ((uVar3 & 0x1000) == 0) {
      iVar1 = (*pcVar6)(param_1,param_2[8],uVar3 & 0x1000,1);
      if ((iVar1 == -1) && (uVar4 = *param_1, uVar4 != 0)) {
        if ((uVar4 == 0x1d) || (uVar4 == 0x16)) {
          *param_1 = uVar8;
          return 0;
        }
        uVar3 = *(ushort *)(param_2 + 3);
        goto LAB_10119068;
      }
    }
    else {
      iVar1 = param_2[0x15];
    }
    if (((int)((uint)*(ushort *)(param_2 + 3) << 0x1d) < 0) &&
       (iVar1 = iVar1 - param_2[1], param_2[0xd] != 0)) {
      iVar1 = iVar1 - param_2[0x10];
    }
    iVar1 = (*(code *)param_2[0xb])(param_1,param_2[8],iVar1,0);
    uVar3 = *(ushort *)(param_2 + 3);
    if ((iVar1 == -1) &&
       ((0x1d < *param_1 || (-1 < (int)((DAT_101190b4 >> (*param_1 & 0xff)) << 0x1f))))) {
LAB_10119068:
      *(ushort *)(param_2 + 3) = uVar3 | 0x40;
      return 0xffffffff;
    }
    param_2[1] = 0;
    *param_2 = param_2[4];
    if (((int)((uint)uVar3 << 0x13) < 0) && ((iVar1 != -1 || (*param_1 == 0)))) {
      param_2[0x15] = iVar1;
    }
    piVar2 = (int *)param_2[0xd];
    *param_1 = uVar8;
    if (piVar2 != (int *)0x0) {
      if (piVar2 != param_2 + 0x11) {
        FUN_10117e64(param_1);
      }
      param_2[0xd] = 0;
      return 0;
    }
  }
  return 0;
}

