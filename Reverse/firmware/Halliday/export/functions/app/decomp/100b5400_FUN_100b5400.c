/* FUN_100b5400 @ 0x100b5400 */

int FUN_100b5400(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_2c [2];
  
  uVar5 = DAT_100b5518;
  bVar1 = false;
  iVar8 = param_1 + 0xc;
  uVar7 = (DAT_100b54f4 - DAT_100b54f0) * 0x20 & 0xff00;
  iVar9 = param_4;
  iVar10 = param_3;
  FUN_100a5b78(DAT_100b54f8 | uVar7,DAT_100b54fc,DAT_100b5500,param_2,param_4,param_3);
  local_38 = param_4;
LAB_100b543e:
  if (local_38 == *(int *)(param_1 + 0x28)) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_100b51d8(iVar8,local_2c);
    if (iVar6 == 0) goto LAB_100b5470;
    FUN_100a5b78(uVar7 | uVar5,DAT_100b54fc,DAT_100b5504,iVar6,iVar9,iVar10);
    if ((!bVar1) && (*(char *)(param_1 + 0x44) != '\0')) {
      FUN_100b4860(iVar8,*(int *)(param_1 + 0x1c) / 0x32 + 500);
      uVar4 = DAT_100b5514;
      uVar3 = DAT_100b5510;
      uVar2 = DAT_100b54fc;
      param_4 = (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20)) - param_2;
      *(bool *)(param_1 + 0xc) = bVar1;
      iVar9 = param_4;
      iVar10 = param_3;
      FUN_100a5b78(uVar3 | uVar7,uVar2,uVar4,param_2,param_4,param_3);
      goto LAB_100b5488;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return iVar6;
LAB_100b5470:
  if (local_2c[0] == 9) {
    iVar6 = *(int *)(param_1 + 0x28);
    param_2 = param_2 + iVar6;
    param_3 = param_3 + iVar6;
    local_38 = local_38 - iVar6;
    if (bVar1) {
LAB_100b5488:
      iVar6 = FUN_100b4dac(iVar8,param_2,param_4,param_3);
      if (iVar6 != 0) {
        FUN_100a5b78(DAT_100b5508 | uVar7,DAT_100b54fc,DAT_100b550c,iVar6,iVar9,iVar10);
        return -5;
      }
      bVar1 = true;
    }
  }
  goto LAB_100b543e;
}

