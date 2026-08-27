/* FUN_1402fe38 @ 0x1402fe38 */

void FUN_1402fe38(int param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  ushort local_16;
  uint local_14;
  
  local_14 = *DAT_1402ff04;
  uVar6 = 0;
  *DAT_1402ff00 = param_1;
  puVar5 = DAT_1402ff0c;
  pbVar4 = DAT_1402ff08;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    bVar1 = *DAT_1402ff08;
    *DAT_1402ff0c = 0x1402fe5a;
    puVar5[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar4 = (char)uVar6 + (char)(uint)((ulonglong)DAT_1402ff10 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402ff14 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_1402e1fc(5,&local_16,uVar6,0x40);
  uVar8 = DAT_1402ff18;
  if (param_1 == 0) {
    local_16 = local_16 & 0xe7ff;
    FUN_1402e37c(5);
    uVar8 = 0;
  }
  else {
    local_16 = local_16 | 0x1800;
    FUN_1402e37c(5);
  }
  FUN_1402ebbc(3,uVar8);
  if (iVar7 == 0) {
    *DAT_1402ff0c = 0xffffffff;
  }
  pbVar4 = DAT_1402ff1c;
  bVar1 = *DAT_1402ff1c;
  *(undefined4 *)(DAT_1402ff20 + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_1402ff10 * (ulonglong)uVar6;
  *pbVar4 = (char)uVar6 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  if ((*DAT_1402ff04 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)lVar3,pbVar4,*DAT_1402ff04 ^ local_14,0);
}

