/* FUN_1402dea4 @ 0x1402dea4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402dea4(int param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  pbVar5 = DAT_1402df28;
  puVar4 = DAT_1402df24;
  if (param_1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 4;
  }
  iVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    *DAT_1402df24 = 0x1402debc;
    puVar4[1] = unaff_lr;
    uVar7 = (uint)*pbVar5;
    uVar9 = uVar7 + 1;
    *pbVar5 = (char)uVar9 + (char)(uint)((ulonglong)DAT_1402df2c * (ulonglong)uVar9 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402df30 + uVar7 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  _DAT_4000005c = _DAT_4000005c & 0xfffffffb | uVar8;
  if (iVar6 == 0) {
    *DAT_1402df24 = 0xffffffff;
  }
  pbVar5 = DAT_1402df34;
  bVar1 = *DAT_1402df34;
  *(undefined4 *)(DAT_1402df38 + (uint)bVar1 * 4) = unaff_lr;
  uVar8 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_1402df2c * (ulonglong)uVar8;
  *pbVar5 = (char)uVar8 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar6);
  }
  return (int)lVar3;
}

