/* FUN_140a4c1c @ 0x140a4c1c */

void FUN_140a4c1c(undefined4 param_1,uint param_2,uint param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_lr;
  ushort local_1e;
  uint local_1c;
  
  uVar7 = DAT_140a4cec;
  puVar3 = DAT_140a4ce8;
  pbVar2 = DAT_140a4ce4;
  local_1c = *DAT_140a4ce0;
  iVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar9 = getBasePriority();
  }
  uVar6 = param_2;
  uVar8 = param_3;
  if (iVar9 != 0x40) {
    uVar6 = (uint)*DAT_140a4ce4;
    *DAT_140a4ce8 = 0x140a4c40;
    puVar3[1] = unaff_lr;
    uVar8 = uVar6 + 1;
    *pbVar2 = (char)uVar8 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x23) * -10;
    *(undefined4 *)(DAT_140a4cf0 + uVar6 * 4) = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (param_3 != 0) {
    local_1e = (ushort)param_3;
    iVar4 = FUN_140e55e8(param_1,uVar6,uVar8,0x40);
    if ((int)(local_1e + 1) < iVar4) {
      FUN_140e53a8(param_1,&local_1e);
      FUN_140e53a8(param_1,param_2,param_3);
      uVar5 = 0;
      goto LAB_140a4c82;
    }
  }
  uVar5 = 0xffffffff;
LAB_140a4c82:
  if (iVar9 == 0) {
    *DAT_140a4ce8 = 0xffffffff;
  }
  uVar7 = (uint)*DAT_140a4cf4;
  *DAT_140a4cf4 =
       (char)(uVar7 + 1) +
       (char)(uint)((ulonglong)DAT_140a4cec * (ulonglong)(uVar7 + 1) >> 0x23) * -10;
  *(undefined4 *)(DAT_140a4cf8 + uVar7 * 4) = unaff_lr;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar9);
  }
  if ((*DAT_140a4ce0 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar5,uVar7,*DAT_140a4ce0 ^ local_1c,0);
}

