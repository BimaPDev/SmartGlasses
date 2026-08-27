/* FUN_1402fcb4 @ 0x1402fcb4 */

void FUN_1402fcb4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint extraout_r2;
  uint uVar10;
  int iVar11;
  undefined4 unaff_lr;
  ushort local_1e;
  uint local_1c;
  
  puVar6 = DAT_1402fe20;
  pbVar4 = DAT_1402fe1c;
  local_1c = *DAT_1402fe18;
  iVar11 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar11 = getBasePriority();
  }
  if (iVar11 != 0x40) {
    bVar1 = *DAT_1402fe1c;
    *DAT_1402fe20 = 0x1402fcd0;
    puVar6[1] = unaff_lr;
    param_3 = bVar1 + 1;
    *pbVar4 = (char)param_3 +
              (char)(uint)((ulonglong)DAT_1402fe24 * (ulonglong)param_3 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402fe28 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_1402e1fc(5,&local_1e,param_3,0x40);
  local_1e = local_1e & 0xe0ff;
  FUN_1402e37c(5);
  if (iVar11 == 0) {
    *DAT_1402fe20 = 0xffffffff;
  }
  iVar7 = DAT_1402fe30;
  pbVar4 = DAT_1402fe2c;
  bVar1 = *DAT_1402fe2c;
  uVar9 = bVar1 + 1;
  *DAT_1402fe2c =
       (char)uVar9 + (char)(uint)((ulonglong)DAT_1402fe24 * (ulonglong)uVar9 >> 0x23) * -10;
  *(undefined4 *)(iVar7 + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar11);
  }
  FUN_1402e1fc(0x5e,&local_1e);
  FUN_1402e37c(0x5e,local_1e);
  FUN_1402e1fc(0x52,&local_1e);
  if (*DAT_1402fe34 == '\0') {
    uVar8 = 0x51;
  }
  else if (*DAT_1402fe34 == '\x03') {
    uVar8 = 0x51;
  }
  else {
    uVar8 = 0x52;
  }
  FUN_1402e37c(uVar8,local_1e);
  FUN_140e5398(0x10);
  uVar9 = DAT_1402fe24;
  puVar6 = DAT_1402fe20;
  pbVar5 = DAT_1402fe1c;
  iVar11 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar11 = getBasePriority();
  }
  uVar10 = extraout_r2;
  if (iVar11 != 0x40) {
    bVar1 = *DAT_1402fe1c;
    *DAT_1402fe20 = 0x1402fd8c;
    puVar6[1] = unaff_lr;
    uVar10 = bVar1 + 1;
    *pbVar5 = (char)uVar10 + (char)(uint)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402fe28 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_1402e1fc(5,&local_1e,uVar10,0x40);
  local_1e = local_1e & 0xff00 | 0x708;
  uVar8 = FUN_1402e37c(5);
  if (iVar11 == 0) {
    *DAT_1402fe20 = 0xffffffff;
  }
  uVar9 = DAT_1402fe24;
  uVar10 = (uint)*pbVar4;
  *(undefined4 *)(iVar7 + uVar10 * 4) = unaff_lr;
  uVar10 = uVar10 + 1;
  lVar3 = (ulonglong)uVar9 * (ulonglong)uVar10;
  *pbVar4 = (char)uVar10 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar11);
  }
  if ((*DAT_1402fe18 ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar8,(int)lVar3,*DAT_1402fe18 ^ local_1c,0);
  }
  return;
}

