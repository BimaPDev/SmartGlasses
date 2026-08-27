/* FUN_1402df44 @ 0x1402df44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1402df44(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lr;
  
  puVar4 = DAT_1402dfe0;
  pbVar3 = DAT_1402dfdc;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    bVar1 = *DAT_1402dfdc;
    *DAT_1402dfe0 = 0x1402df54;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_1402dfe4 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402dfe8 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (param_1 == 0) {
    _DAT_40000070 = _DAT_40000070 & 0xffffffe3;
    uVar5 = 0;
  }
  else if (param_1 == 1) {
    uVar5 = 0;
    _DAT_40000070 = _DAT_40000070 & 0xffffffe3 | 4;
  }
  else {
    uVar5 = 1;
  }
  if (iVar7 == 0) {
    *DAT_1402dfe0 = 0xffffffff;
  }
  bVar1 = *DAT_1402dfec;
  uVar6 = bVar1 + 1;
  *DAT_1402dfec =
       (char)uVar6 + (char)(uint)((ulonglong)DAT_1402dfe4 * (ulonglong)uVar6 >> 0x23) * -10;
  *(undefined4 *)(DAT_1402dff0 + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  return uVar5;
}

