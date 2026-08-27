/* FUN_14030a1c @ 0x14030a1c */

void FUN_14030a1c(float param_1)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar9 = DAT_14030b2c;
  puVar6 = DAT_14030b28;
  if ((1 < *DAT_14030b28) || (*(int *)(DAT_14030b2c + *DAT_14030b28 * 0x10) == 0)) {
    FUN_1402a6e8(4,0x121,DAT_14030b40,DAT_14030b44,DAT_14030b48,DAT_14030b38);
    return;
  }
  if ((int)((uint)(param_1 < 0.0) << 0x1f) < 0) {
    if ((int)((uint)(param_1 < DAT_14030b4c) << 0x1f) < 0) goto LAB_14030ae4;
  }
  else if (DAT_14030b30 < param_1) {
LAB_14030ae4:
    FUN_1402a6e8(4,0x126,DAT_14030b40,DAT_14030b44,DAT_14030b50,
                 (int)(param_1 * DAT_14030b34 * DAT_14030b34 * DAT_14030b34));
    bVar2 = 0.0 < param_1;
    iVar8 = DAT_14030b54;
    param_1 = DAT_14030b4c;
    if (bVar2) {
      iVar8 = DAT_14030b58;
      param_1 = DAT_14030b30;
    }
    goto LAB_1402eddc;
  }
  iVar8 = (int)(param_1 * DAT_14030b34 * DAT_14030b34 * DAT_14030b34);
LAB_1402eddc:
  FUN_1402a6e8(4,0x12e,DAT_14030b40,DAT_14030b44,DAT_14030b3c,DAT_14030b38,iVar8);
  iVar9 = iVar9 + *puVar6 * 0x10;
  plVar1 = (longlong *)(iVar9 + 8);
  lVar5 = *plVar1;
  fVar7 = (float)FUN_140e4030(*(undefined4 *)plVar1,*(undefined4 *)(iVar9 + 0xc));
  lVar10 = FUN_140e417c(fVar7 * param_1);
  uVar3 = lVar10 + lVar5;
  FUN_1402d7bc(2,0);
  uVar4 = uVar3 & 0xffff0000ffff;
  FUN_1402e37c(0x20ec,(int)uVar4);
  FUN_1402e37c(0x20ed,(uint)uVar3 >> 0x10);
  FUN_1402e37c(0x20ee,(int)(uVar4 >> 0x20));
  FUN_1402e37c(0x20f0,1);
  return;
}

