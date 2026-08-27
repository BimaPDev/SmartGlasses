/* FUN_140a4cfc @ 0x140a4cfc */

void FUN_140a4cfc(undefined4 param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lr;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  
  puVar4 = DAT_140a4dcc;
  pbVar3 = DAT_140a4dc8;
  local_14 = *DAT_140a4dc4;
  local_20 = 0;
  local_1c = 0;
  local_24 = 0;
  local_18 = 0;
  local_26 = 0;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    bVar1 = *DAT_140a4dc8;
    *DAT_140a4dcc = 0x140a4d26;
    puVar4[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_140a4dd0 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_140a4dd4 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_140e5678(param_1,2,&local_24,&local_1c,&local_20,&local_18);
  iVar5 = local_1c;
  FUN_140e5278(&local_26,local_24,local_1c);
  FUN_140e5278((int)&local_26 + iVar5,local_20,local_18);
  if (iVar7 == 0) {
    *DAT_140a4dcc = 0xffffffff;
  }
  pbVar3 = DAT_140a4dd8;
  bVar1 = *DAT_140a4dd8;
  *(undefined4 *)(DAT_140a4ddc + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)DAT_140a4dd0 * (ulonglong)uVar6 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  if ((*DAT_140a4dc4 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(local_26,pbVar3,*DAT_140a4dc4 ^ local_14,0);
}

