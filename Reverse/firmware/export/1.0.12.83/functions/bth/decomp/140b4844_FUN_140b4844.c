/* FUN_140b4844 @ 0x140b4844 */

int FUN_140b4844(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_lr;
  
  puVar4 = DAT_140b48f4;
  pbVar3 = DAT_140b48f0;
  iVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    param_2 = (uint)*DAT_140b48f0;
    *DAT_140b48f4 = 0x140b4856;
    puVar4[1] = unaff_lr;
    param_3 = param_2 + 1;
    *pbVar3 = (char)param_3 +
              (char)(uint)((ulonglong)DAT_140b48f8 * (ulonglong)param_3 >> 0x23) * -10;
    *(undefined4 *)(DAT_140b48fc + param_2 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  FUN_14027fb4(0,param_2,param_3,0x40);
  FUN_140e59d8();
  FUN_14028078(0,param_1);
  FUN_14027f98(0);
  FUN_14030034(param_1 * 0x44c);
  FUN_140305a4();
  if (iVar6 == 0) {
    *DAT_140b48f4 = 0xffffffff;
  }
  bVar1 = *DAT_140b4900;
  uVar5 = bVar1 + 1;
  *DAT_140b4900 =
       (char)uVar5 + (char)(uint)((ulonglong)DAT_140b48f8 * (ulonglong)uVar5 >> 0x23) * -10;
  *(undefined4 *)(DAT_140b4904 + (uint)bVar1 * 4) = unaff_lr;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar6);
  }
  iVar6 = FUN_140e5378(*DAT_140b4908,param_1 * 0xfa);
  return -(uint)(iVar6 != 0);
}

