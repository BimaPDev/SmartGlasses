/* FUN_1008895c @ 0x1008895c */

void FUN_1008895c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  
  iVar11 = *(int *)(param_1 + 0x4c);
  if (iVar11 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x6c) & 0xf) == 0) {
    return;
  }
  piVar2 = (int *)FUN_10087650();
  bVar1 = *(byte *)(*piVar2 + 0x19);
  iVar3 = FUN_10124cb8(iVar11,0x40);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  iVar3 = FUN_10125fe2(iVar11);
  iVar4 = FUN_10125ff0(iVar11);
  bVar12 = *(byte *)(param_1 + 0x6c) & 0xf;
  if (bVar12 == 0xc) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (iVar4 == 0) {
      *(int *)(param_1 + 0x38) = (int)(*(int *)(param_1 + 0x38) * (100 - (uint)bVar1)) / 100;
      uVar5 = FUN_10089f60(iVar11);
      uVar6 = thunk_FUN_10126008(iVar11);
      iVar7 = FUN_101247c2(iVar11,*(undefined4 *)(param_1 + 0x38),uVar6,uVar5,0xc);
      *(int *)(param_1 + 0x38) = iVar7;
      uVar5 = 0;
    }
    else {
      iVar8 = FUN_101247a0();
      uVar5 = DAT_10088b60;
      iVar7 = *(int *)(param_1 + 0x30);
      if (iVar8 + iVar7 < *(int *)(param_1 + 0x58)) {
        iVar8 = *(int *)(param_1 + 0x58) - iVar7;
      }
      if (*(int *)(param_1 + 0x60) < iVar7 + iVar8) {
        iVar8 = *(int *)(param_1 + 0x60) - iVar7;
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      iVar7 = FUN_10088388(iVar11,uVar5,0x1fffffff,iVar8);
      uVar5 = 1;
      iVar7 = iVar7 + iVar8;
    }
    iVar9 = 0;
LAB_100889f6:
    FUN_1008a178(iVar11,iVar9,iVar7,uVar5);
  }
  else if (bVar12 == 3) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x34) = (int)(*(int *)(param_1 + 0x34) * (100 - (uint)bVar1)) / 100;
      uVar5 = FUN_1008a000(iVar11);
      uVar6 = FUN_1008a0c0(iVar11);
      iVar9 = FUN_101247c2(iVar11,*(undefined4 *)(param_1 + 0x34),uVar5,uVar6,3);
      *(int *)(param_1 + 0x34) = iVar9;
      iVar7 = 0;
      uVar5 = 0;
    }
    else {
      iVar8 = FUN_101247a0();
      uVar5 = DAT_10088b60;
      iVar7 = *(int *)(param_1 + 0x2c);
      if (iVar8 + iVar7 < *(int *)(param_1 + 0x54)) {
        iVar8 = *(int *)(param_1 + 0x54) - iVar7;
      }
      if (*(int *)(param_1 + 0x5c) < iVar7 + iVar8) {
        iVar8 = *(int *)(param_1 + 0x5c) - iVar7;
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      iVar9 = FUN_10088288(iVar11,uVar5,0x1fffffff,iVar8);
      uVar5 = 1;
      iVar7 = 0;
      iVar9 = iVar9 + iVar8;
    }
    goto LAB_100889f6;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    return;
  }
  if (iVar4 == 0) {
    iVar4 = thunk_FUN_10126008(iVar11);
    iVar8 = FUN_10089f60(iVar11);
    if (iVar4 < 1) {
      if ((0 < iVar8) && (iVar4 != 0)) {
LAB_10088a2e:
        FUN_1008a178(iVar11,0,iVar4,1);
      }
    }
    else if (iVar8 < 0) {
      iVar4 = -iVar8;
      goto LAB_10088a2e;
    }
  }
  if (iVar3 == 0) {
    iVar3 = FUN_1008a000(iVar11);
    iVar4 = FUN_1008a0c0(iVar11);
    if (iVar3 < 1) {
      if ((iVar4 < 1) || (iVar3 == 0)) goto LAB_10088a5e;
    }
    else {
      if (-1 < iVar4) goto LAB_10088a5e;
      iVar3 = -iVar4;
    }
    FUN_1008a178(iVar11,iVar3,0,1);
  }
LAB_10088a5e:
  FUN_10086f50(iVar11,10,piVar2);
  uVar10 = *(byte *)(param_1 + 1) & 2;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    *(uint *)(param_1 + 0x4c) = uVar10;
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf0 | (byte)uVar10;
  }
  return;
}

