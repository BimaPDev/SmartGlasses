/* FUN_100f69e8 @ 0x100f69e8 */

int FUN_100f69e8(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = DAT_100f6b14;
  piVar1 = DAT_100f6afc;
  if (0 < *DAT_100f6b14) {
    iVar6 = 0;
    iVar9 = -1;
    iVar8 = 0;
    do {
      while( true ) {
        iVar3 = FUN_1011ea18(*piVar1 + iVar6 + 4,param_1);
        if (iVar3 == 0) {
          return *piVar1 + iVar6;
        }
        iVar3 = iVar9;
        if ((iVar9 < 0) && (iVar5 = *piVar1 + iVar6, iVar3 = iVar8, *(int *)(*piVar1 + iVar6) != 0))
        break;
        iVar9 = iVar3;
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x78;
        if (*piVar2 <= iVar8) goto LAB_100f6a46;
      }
      iVar6 = iVar6 + 0x78;
      if (*(int *)(iVar5 + 0x20) == 0) {
        iVar9 = iVar8;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *piVar2);
LAB_100f6a46:
    if (-1 < iVar9) {
      iVar6 = iVar9 * 0x78;
      if (*(int *)(*piVar1 + iVar6) == 0) {
        return *piVar1 + iVar9 * 0x78;
      }
      uVar7 = 0;
      FUN_100f943c();
      *(undefined4 *)(*piVar1 + iVar6) = 0;
      iVar9 = FUN_10138cac();
      piVar2 = DAT_100f6b18;
      iVar8 = *piVar1 + iVar6;
      if (iVar9 == 0) {
        return iVar8;
      }
      if (*(int *)(iVar8 + 0x58) == 0) {
        return iVar8;
      }
      iVar3 = *(int *)(iVar8 + 0x30);
      iVar9 = iVar8;
      if (iVar3 != 0) {
        uVar4 = *(uint *)(iVar8 + 0x60);
        if (uVar4 != 0) {
          iVar9 = *(int *)(iVar8 + 0x38);
          do {
            while (*(int *)(iVar9 + uVar7 * 8) != 0) {
              FUN_100e8474();
              iVar3 = uVar7 * 8;
              uVar4 = *(uint *)(iVar8 + 0x60);
              uVar7 = uVar7 + 1;
              *piVar2 = *piVar2 - (uint)*(ushort *)(iVar9 + 4 + iVar3);
              if (uVar4 <= uVar7) goto LAB_100f6aaa;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
LAB_100f6aaa:
          iVar3 = *(int *)(iVar8 + 0x30);
        }
        FUN_100e833c(iVar3);
        iVar9 = iVar6 + *piVar1;
      }
      FUN_1011ea48(iVar8 + 0x24,0,0x50);
      return iVar9;
    }
  }
  FUN_100a5b78(DAT_100f6b08 | (DAT_100f6b04 - DAT_100f6b00) * 0x20 & 0xff00U,DAT_100f6b10,
               DAT_100f6b0c);
  return 0;
}

