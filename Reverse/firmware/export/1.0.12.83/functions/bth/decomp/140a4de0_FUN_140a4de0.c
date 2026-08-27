/* FUN_140a4de0 @ 0x140a4de0 */

void FUN_140a4de0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_lr;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  puVar5 = DAT_140a4ef0;
  pbVar4 = DAT_140a4eec;
  local_24 = *DAT_140a4ee8;
  local_30 = 0;
  local_2c = 0;
  local_34 = 0;
  local_28 = 0;
  iVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    bVar1 = *DAT_140a4eec;
    *DAT_140a4ef0 = 0x140a4e0e;
    puVar5[1] = unaff_lr;
    uVar8 = bVar1 + 1;
    *pbVar4 = (char)uVar8 + (char)(uVar8 / 10) * -10;
    *(undefined4 *)(DAT_140a4ef4 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_140e5448(param_1,0,2,0x40);
  FUN_140e5678(param_1,param_3,&local_34,&local_2c,&local_30,&local_28);
  iVar7 = local_28;
  iVar6 = local_2c;
  if (local_2c + local_28 == param_3) {
    FUN_140e5278(param_2,local_34,local_2c);
    FUN_140e5278(param_2 + iVar6,local_30,iVar7);
    FUN_140e5448(param_1,0,param_3);
    FUN_140e5658(local_34,0,local_2c);
    FUN_140e5658(local_30,0,local_28);
  }
  else {
    FUN_140e5658(param_2,0,param_3);
  }
  if (iVar9 == 0) {
    *DAT_140a4ef0 = 0xffffffff;
  }
  pbVar4 = DAT_140a4ef8;
  bVar1 = *DAT_140a4ef8;
  *(undefined4 *)(DAT_140a4efc + (uint)bVar1 * 4) = unaff_lr;
  uVar8 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_140a4f00 * (ulonglong)uVar8;
  *pbVar4 = (char)uVar8 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar9);
  }
  if ((*DAT_140a4ee8 ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)lVar3,pbVar4,*DAT_140a4ee8 ^ local_24,0);
}

