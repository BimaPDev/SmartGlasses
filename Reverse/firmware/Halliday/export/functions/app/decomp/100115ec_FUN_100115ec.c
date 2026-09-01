/* FUN_100115ec @ 0x100115ec */

void FUN_100115ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  
  iVar1 = DAT_10011730;
  iVar10 = 5;
  iVar6 = *DAT_10011718;
  iVar8 = *DAT_1001171c;
  do {
    iVar7 = 0;
    iVar4 = 0;
    iVar5 = 0;
    piVar12 = (int *)(iVar8 + 0x498);
    do {
      piVar9 = (int *)*piVar12;
      if ((piVar9 != (int *)0x0) && (iVar4 < piVar9[1] - *piVar9)) {
        iVar4 = piVar9[1] - *piVar9;
        iVar7 = iVar5;
      }
      iVar5 = iVar5 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar5 != 7);
    if (iVar4 < (int)(uint)*(ushort *)(iVar8 + 0x478)) {
      *(short *)(iVar8 + 0x474) = *(short *)(iVar8 + 0x474) + 4;
      break;
    }
    *(undefined2 *)(iVar8 + 0x474) = 0;
    iVar5 = iVar8 + iVar7 * 4;
    uVar11 = *(undefined4 *)(iVar5 + 0x498);
    *(short *)(iVar8 + 0x210) = (short)iVar7;
    *(undefined2 *)(iVar8 + 0x212) = *(undefined2 *)(iVar8 + 0x476);
    *(undefined4 *)(iVar8 + 0x214) = *(undefined4 *)(iVar5 + 0x450);
    *(undefined2 *)(iVar8 + 0x208) = 0x2016;
    *(undefined1 *)(iVar8 + 0x20c) = 0x66;
    *(ushort *)(iVar8 + 0x20a) = *(ushort *)(iVar8 + 0x478) + 8;
    uVar2 = FUN_1005393c(0,iVar8 + 0x208,5,0x66,param_1,iVar6,param_3);
    *(undefined1 *)(iVar8 + 0x20d) = uVar2;
    FUN_1012d284(uVar11,iVar8 + 0x218,*(undefined2 *)(iVar8 + 0x478));
    uVar3 = FUN_10054558(0,iVar8 + 0x210,*(undefined2 *)(iVar8 + 0x20a));
    *(undefined2 *)(iVar8 + 0x20e) = uVar3;
    iVar7 = *(ushort *)(iVar8 + 0x478) + 0x10;
    iVar4 = (**(code **)(iVar1 + 0x14))(iVar8 + 0x208,iVar7,0);
    if (iVar7 != iVar4) {
      if (*DAT_10011718 != iVar6) goto LAB_100116d4;
      goto LAB_100116d8;
    }
    *(int *)(iVar5 + 0x450) = *(int *)(iVar5 + 0x450) + 1;
    FUN_1012d2d0(uVar11,0,*(undefined2 *)(iVar8 + 0x478));
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (*DAT_10011718 == iVar6) {
    return;
  }
LAB_100116d4:
  FUN_1013cdc0();
LAB_100116d8:
  FUN_100a5b78((DAT_10011724 - DAT_10011720) * 0x20 & 0xff00U | 0x14e0031,DAT_1001172c,DAT_10011728)
  ;
  return;
}

