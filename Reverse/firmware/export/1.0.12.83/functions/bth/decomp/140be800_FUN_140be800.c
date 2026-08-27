/* FUN_140be800 @ 0x140be800 */

void FUN_140be800(undefined4 param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 unaff_lr;
  undefined1 local_1d;
  uint local_1c;
  
  puVar5 = DAT_140be914;
  pbVar4 = DAT_140be910;
  local_1c = *DAT_140be90c;
  uVar11 = 0;
  local_1d = 0;
  iVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    param_2 = (uint)*DAT_140be910;
    *DAT_140be914 = 0x140be822;
    puVar5[1] = unaff_lr;
    uVar11 = param_2 + 1;
    *pbVar4 = (char)uVar11 + (char)(uint)((ulonglong)DAT_140be918 * (ulonglong)uVar11 >> 0x23) * -10
    ;
    *(undefined4 *)(DAT_140be91c + param_2 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  iVar9 = FUN_140e54a8(DAT_140be920,param_2,uVar11,0x40);
  if (iVar13 == 0) {
    *DAT_140be914 = 0xffffffff;
  }
  iVar7 = DAT_140be928;
  pbVar6 = DAT_140be924;
  uVar11 = DAT_140be918;
  bVar1 = *DAT_140be924;
  uVar10 = bVar1 + 1;
  *DAT_140be924 =
       (char)uVar10 + (char)(uint)((ulonglong)DAT_140be918 * (ulonglong)uVar10 >> 0x23) * -10;
  *(undefined4 *)(iVar7 + (uint)bVar1 * 4) = unaff_lr;
  puVar5 = DAT_140be914;
  pbVar4 = DAT_140be910;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar13);
  }
  if (iVar9 < 1) {
    uVar8 = 0;
  }
  else {
    iVar13 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar13 = getBasePriority();
    }
    if (iVar13 != 0x40) {
      *DAT_140be914 = 0x140be892;
      puVar5[1] = unaff_lr;
      uVar10 = (uint)*pbVar4;
      *(undefined4 *)(DAT_140be91c + uVar10 * 4) = unaff_lr;
      uVar10 = uVar10 + 1;
      *pbVar4 = (char)uVar10 + (char)(uint)((ulonglong)uVar11 * (ulonglong)uVar10 >> 0x23) * -10;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    FUN_140e5448(DAT_140be920,&local_1d,1,0x40);
    if (iVar13 == 0) {
      *DAT_140be914 = 0xffffffff;
    }
    uVar11 = DAT_140be918;
    uVar12 = (uint)*pbVar6;
    *(undefined4 *)(iVar7 + uVar12 * 4) = unaff_lr;
    uVar12 = uVar12 + 1;
    lVar3 = (ulonglong)uVar11 * (ulonglong)uVar12;
    uVar10 = (uint)lVar3;
    *pbVar6 = (char)uVar12 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
    bVar2 = (bool)isCurrentModePrivileged();
    uVar8 = local_1d;
    if (bVar2) {
      setBasePriority(iVar13);
    }
  }
  if ((*DAT_140be90c ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar8,uVar10,*DAT_140be90c ^ local_1c,0);
  }
  return;
}

