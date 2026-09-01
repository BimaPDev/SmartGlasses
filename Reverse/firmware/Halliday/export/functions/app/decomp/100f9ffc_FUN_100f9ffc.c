/* FUN_100f9ffc @ 0x100f9ffc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100f9ffc(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  
  if (param_1 == (int *)0x0) {
    return 0x21;
  }
  if (param_2 == (int *)0x0) {
    return 6;
  }
  if (DAT_100fa1dc < param_2[4]) {
    return 4;
  }
  if (param_1[4] != 0) {
    uVar8 = 0;
    piVar2 = param_1 + 4;
    do {
      piVar2 = piVar2 + 1;
      piVar9 = (int *)*piVar2;
      iVar1 = FUN_1011ea18(*(undefined4 *)(*piVar9 + 8),param_2[2]);
      if (iVar1 == 0) {
        if (param_2[3] <= *(int *)(*piVar9 + 0xc)) {
          return 5;
        }
        FUN_100f9e64(param_1,piVar9);
        uVar5 = param_1[4];
        break;
      }
      uVar5 = param_1[4];
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
    if (0x1f < uVar5) {
      return 0x30;
    }
  }
  iVar1 = param_2[1];
  iVar10 = *param_1;
  if (iVar1 < 1) {
    if (iVar1 != 0) {
      return 6;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x100fa1da);
    _Reset = param_1;
    (*pcVar6)();
  }
  piVar2 = (int *)(**(code **)(iVar10 + 4))(iVar10,iVar1);
  if (piVar2 == (int *)0x0) {
    return 0x40;
  }
  FUN_1011ea48(piVar2,0,iVar1);
  iVar1 = *param_2;
  piVar2[1] = (int)param_1;
  piVar2[2] = iVar10;
  *piVar2 = (int)param_2;
  piVar9 = param_2;
  if (iVar1 << 0x1e < 0) {
    iVar1 = *param_1;
    piVar4 = (int *)(**(code **)(iVar1 + 4))(iVar1,0xc);
    if (piVar4 == (int *)0x0) {
      iVar3 = 0x40;
      goto LAB_100fa160;
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar9 = (int *)*piVar2;
    iVar3 = piVar9[9];
    bVar11 = iVar3 == DAT_100fa1e0;
    piVar2[3] = (int)piVar9;
    piVar2[4] = iVar3;
    if ((bVar11) && (*(code **)(piVar9[0xe] + 4) != (code *)0x0)) {
      iVar3 = (**(code **)(piVar9[0xe] + 4))(iVar1,piVar2 + 0xd);
      if (iVar3 != 0) {
        (**(code **)(iVar1 + 8))(iVar1,piVar4);
        goto LAB_100fa160;
      }
      piVar7 = piVar9 + 0xe;
      iVar1 = piVar9[10];
      piVar9 = (int *)*piVar2;
      piVar2[0xe] = *(int *)(*piVar7 + 0x10);
      piVar2[0xf] = iVar1;
    }
    piVar4[2] = (int)piVar2;
    piVar7 = _MasterStackPointer;
    if (param_1 != (int *)0xffffff6c) {
      iVar1 = param_1[0x26];
      *piVar4 = iVar1;
      piVar4[1] = 0;
      if (iVar1 == 0) {
        param_1[0x25] = (int)piVar4;
        piVar7 = piVar4;
      }
      else {
        *(int **)(iVar1 + 4) = piVar4;
        piVar7 = (int *)param_1[0x25];
      }
      param_1[0x26] = (int)piVar4;
    }
    for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
      iVar3 = piVar7[2];
      if (*(int *)(iVar3 + 0x10) == DAT_100fa1e0) goto LAB_100fa154;
    }
    iVar3 = 0;
LAB_100fa154:
    iVar1 = *piVar9;
    param_1[0x27] = iVar3;
  }
  if (iVar1 << 0x1d < 0) {
    param_1[0x28] = (int)piVar2;
  }
  pcVar6 = (code *)param_2[6];
  if (iVar1 << 0x1f < 0) {
    piVar2[3] = (int)piVar9;
  }
  if ((pcVar6 == (code *)0x0) || (iVar3 = (*pcVar6)(piVar2), iVar3 == 0)) {
    iVar1 = param_1[4];
    param_1[4] = iVar1 + 1;
    param_1[iVar1 + 5] = (int)piVar2;
    return 0;
  }
LAB_100fa160:
  if ((((*(int *)*piVar2 << 0x1e < 0) && (iVar1 = piVar2[3], iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x24) == DAT_100fa1e0)) && (piVar2[0xd] != 0)) {
    (**(code **)(*(int *)(iVar1 + 0x38) + 0x14))();
  }
  (**(code **)(iVar10 + 8))(iVar10,piVar2);
  return iVar3;
}

