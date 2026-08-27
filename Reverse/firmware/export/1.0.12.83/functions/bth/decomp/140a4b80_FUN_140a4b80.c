/* FUN_140a4b80 @ 0x140a4b80 */

undefined4 FUN_140a4b80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_lr;
  
  uVar7 = DAT_140a4c0c;
  puVar5 = DAT_140a4c08;
  pbVar4 = DAT_140a4c04;
  iVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    bVar1 = *DAT_140a4c04;
    *DAT_140a4c08 = 0x140a4b98;
    puVar5[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar4 = (char)uVar6 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_140a4c10 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_140e5658(param_2,0,param_3,0x40);
  FUN_140e5918(param_1,param_3,param_2);
  if (iVar8 == 0) {
    *DAT_140a4c08 = 0xffffffff;
  }
  pbVar4 = DAT_140a4c14;
  bVar1 = *DAT_140a4c14;
  *(undefined4 *)(DAT_140a4c18 + (uint)bVar1 * 4) = unaff_lr;
  uVar7 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_140a4c0c * (ulonglong)uVar7;
  *pbVar4 = (char)uVar7 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar8);
  }
  return (int)lVar3;
}

