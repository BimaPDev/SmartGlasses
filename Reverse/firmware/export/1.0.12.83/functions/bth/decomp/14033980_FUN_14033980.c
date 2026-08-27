/* FUN_14033980 @ 0x14033980 */

undefined4 FUN_14033980(int param_1,undefined1 *param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  
  iVar3 = FUN_140e5848();
  piVar2 = DAT_14033abc;
  iVar9 = *DAT_14033abc;
  if (iVar9 == 0) {
    FUN_1402e55c();
    iVar9 = *piVar2;
    *piVar2 = iVar9 + 1;
    if (param_1 != 0xffff) goto LAB_140339aa;
    uVar7 = 0;
  }
  else {
    *DAT_14033abc = iVar9 + 1;
    if (param_1 == 0xffff) {
      uVar7 = 0;
      *piVar2 = iVar9;
      goto LAB_140339c6;
    }
LAB_140339aa:
    iVar9 = FUN_14032d34(param_1);
    if ((iVar9 != 0xff) && (*DAT_14033ac0 != 0)) {
      sVar1 = (short)iVar9;
      iVar8 = *(int *)(sVar1 * 4 + *DAT_14033ac0);
      if ((iVar8 != 0) && ((iVar10 = *DAT_14033ac4, iVar8 != -0xd0 && (iVar10 != 0)))) {
        iVar9 = *piVar2;
        if (iVar9 == 0) {
          FUN_1402e55c();
          iVar9 = *DAT_14033ac8;
          if ((iVar9 == 0) || (iVar9 == -10)) {
            if (*piVar2 != 0) goto LAB_14033ab8;
            FUN_1402e5f8();
            iVar9 = *piVar2;
            goto LAB_14033a14;
          }
          cVar11 = *(char *)(iVar9 + 10);
          if (*piVar2 == 0) {
            FUN_1402e5f8();
          }
LAB_14033a78:
          if (cVar11 == '\0') goto LAB_14033ab8;
          uVar5 = *(undefined1 *)(iVar8 + 0xd0);
          iVar9 = *piVar2;
        }
        else {
          iVar6 = *DAT_14033ac8;
          if (iVar6 != 0) {
            if (iVar6 != -10) {
              cVar11 = *(char *)(iVar6 + 10);
              goto LAB_14033a78;
            }
LAB_14033ab8:
            iVar9 = *piVar2;
          }
LAB_14033a14:
          uVar5 = *(undefined1 *)(iVar10 + sVar1 * 2);
        }
        *param_2 = uVar5;
        uVar7 = 1;
        iVar9 = iVar9 + -1;
        param_2[1] = *(undefined1 *)(iVar10 + sVar1 * 2 + 1);
        goto LAB_140339c2;
      }
    }
    uVar7 = 0;
    iVar9 = *piVar2 + -1;
  }
LAB_140339c2:
  *piVar2 = iVar9;
  if (iVar9 == 0) {
    FUN_1402e5f8();
  }
LAB_140339c6:
  iVar9 = FUN_140e5848();
  uVar4 = (iVar9 - iVar3) * 1000;
  if (uVar4 < 0x1f50) {
    return uVar7;
  }
  FUN_1402a6e8(4,0x40f,DAT_14033ad8,DAT_14033ad4,DAT_14033ad0,DAT_14033acc,uVar4 >> 4);
  return uVar7;
}

