/* FUN_1402c308 @ 0x1402c308 */

void FUN_1402c308(uint param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_lr;
  
  uVar10 = DAT_1402c414;
  puVar5 = DAT_1402c410;
  pbVar4 = DAT_1402c40c;
  iVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    bVar1 = *DAT_1402c40c;
    *DAT_1402c410 = 0x1402c31e;
    puVar5[1] = unaff_lr;
    uVar7 = bVar1 + 1;
    *pbVar4 = (char)uVar7 + (char)(uint)((ulonglong)uVar10 * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402c418 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (*DAT_1402c41c == param_1) {
    iVar11 = 0;
LAB_1402c3f8:
    if (*(char *)(DAT_1402c430 + iVar11) == '\0') {
      DAT_1402c41c[iVar11] = 0xff;
    }
  }
  else {
    if (DAT_1402c41c[1] == param_1) {
      iVar11 = 1;
      goto LAB_1402c3f8;
    }
    iVar11 = 2;
  }
  if (iVar8 == 0) {
    *DAT_1402c410 = 0xffffffff;
  }
  pbVar4 = DAT_1402c420;
  uVar10 = DAT_1402c414;
  bVar1 = *DAT_1402c420;
  *(undefined4 *)(DAT_1402c424 + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  lVar3 = (ulonglong)uVar10 * (ulonglong)uVar7;
  *pbVar4 = (char)uVar7 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  iVar6 = DAT_1402c430;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar8);
  }
  if (iVar11 == 2) {
    return;
  }
  cVar9 = *(char *)(DAT_1402c430 + iVar11);
  if (cVar9 == '\0') {
    uVar10 = FUN_14028a70(param_1,(int)lVar3);
    FUN_14028888(param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(DAT_1402c428 + iVar11 * 4);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    cVar9 = *(char *)(iVar6 + iVar11);
    if (cVar9 == '\0') {
      uVar7 = *(uint *)(DAT_1402c42c + iVar11 * 4);
      if (uVar10 < uVar7) {
        uVar10 = uVar7 - uVar10;
      }
      else {
        uVar10 = 0;
      }
      goto LAB_1402c3a4;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(DAT_1402c428 + iVar11 * 4);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    uVar10 = 0;
  }
  if (cVar9 == '\x01') {
    uVar10 = *(uint *)(DAT_1402c42c + iVar11 * 4) >> 1;
  }
LAB_1402c3a4:
                    /* WARNING: Could not recover jumptable at 0x1402c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar10,param_3,0);
  return;
}

