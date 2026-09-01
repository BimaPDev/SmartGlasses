/* FUN_1012c082 @ 0x1012c082 */

void FUN_1012c082(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  uint local_40;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x2c);
  if ((int)((uint)*(byte *)(param_1 + 0x32) << 0x1f) < 0) {
    uVar6 = uVar9 / 7;
    if (param_2 < uVar6) {
      uVar8 = uVar6 * (*(ushort *)(param_1 + 0x2e) / uVar6);
      uVar1 = *(ushort *)(param_1 + 0x2e) - (short)uVar8;
      uVar7 = (int)(short)uVar1 - param_2;
      if ((int)uVar7 < 0) {
        uVar7 = -uVar7;
      }
      if (uVar6 >> 1 < uVar7) {
        if (param_2 < uVar1) {
          param_2 = param_2 + uVar6;
        }
        else {
          param_2 = param_2 - uVar6;
        }
      }
      param_2 = param_2 + (uVar8 & 0xffff) & 0xffff;
    }
  }
  if (uVar9 <= param_2) {
    param_2 = uVar9 - 1 & 0xffff;
  }
  *(short *)(param_1 + 0x2e) = (short)param_2;
  *(short *)(param_1 + 0x30) = (short)param_2;
  iVar2 = FUN_1012beea();
  if (iVar2 == 0) {
    return;
  }
  uVar3 = FUN_1012bec6();
  iVar4 = FUN_10126d52(iVar2,0,uVar3);
  if (iVar4 == 2) {
    iVar4 = FUN_1012579a(param_1);
    iVar5 = FUN_10125786(iVar2);
    iVar4 = (iVar4 - iVar5) / 2;
  }
  else if (iVar4 == 3) {
    iVar4 = FUN_1012579a(param_1);
    iVar5 = FUN_10125786(iVar2);
    iVar4 = iVar4 - iVar5;
  }
  else {
    if (iVar4 != 1) goto LAB_100982ce;
    iVar4 = 0;
  }
  FUN_101255ce(iVar2,iVar4);
LAB_100982ce:
  iVar4 = FUN_1012bee0(param_1,0);
  iVar5 = FUN_1012bf2a(param_1);
  iVar10 = *(int *)(iVar4 + 8);
  iVar4 = FUN_101257c8(param_1);
  uVar1 = FUN_1012691c(param_1,0,0x65);
  if ((param_3 == 0) || (uVar1 == 0)) {
    FUN_1012bf96(param_1);
  }
  iVar4 = (iVar4 / 2 - iVar10 / 2) - (uint)*(ushort *)(param_1 + 0x2e) * (iVar5 + iVar10);
  if ((param_3 == 0) || (uVar1 == 0)) {
    FUN_100932b0(iVar2,DAT_10098380);
    FUN_101255fc(iVar2,iVar4);
  }
  else {
    FUN_10093284(&local_6c);
    local_68 = DAT_10098380;
    local_6c = iVar2;
    local_4c = FUN_10125744(iVar2);
    local_60 = DAT_10098384;
    local_40 = (uint)uVar1;
    local_50 = DAT_10098388;
    uStack_48 = local_4c;
    local_44 = iVar4;
    FUN_1009331c(&local_6c);
  }
  return;
}

