/* FUN_10099478 @ 0x10099478 */

void FUN_10099478(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = FUN_1012c296();
  iVar2 = FUN_1012691c(param_1,0,0x59);
  uVar9 = *(undefined4 *)(param_1 + 0x4c);
  iVar3 = FUN_1012bec6(*(undefined4 *)(param_1 + 0x2c));
  iVar4 = (*(code *)*DAT_10099628)(iVar3,uVar9);
  uVar5 = (*(code *)*DAT_1009962c)(iVar3 + iVar4,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar11 = uVar5;
  if ((uVar5 < 0xe) && ((0x2401U >> (uVar5 & 0xff) & 1) != 0)) {
    uVar11 = 0x20;
  }
  iVar6 = FUN_10092918(iVar1,uVar11,0);
  FUN_10096f64(*(undefined4 *)(param_1 + 0x2c),uVar9,&local_40);
  uVar10 = *(undefined4 *)(param_1 + 0x2c);
  uVar9 = FUN_1012bec6(uVar10);
  iVar7 = FUN_10126d52(uVar10,0,uVar9);
  if (((*(int *)(*(int *)(param_1 + 0x2c) + 0x1c) <
        (int)(local_40 + *(int *)(*(int *)(param_1 + 0x2c) + 0x14) + iVar6)) &&
      (uVar11 = *(byte *)(param_1 + 0x70) & 8, (*(byte *)(param_1 + 0x70) & 8) == 0)) &&
     (iVar7 != 3)) {
    local_3c = iVar2 + local_3c + iVar8;
    local_40 = uVar11;
    if (uVar5 == 0) {
      uVar11 = 0x20;
    }
    else {
      iVar2 = (*(code *)*DAT_10099630)(iVar3 + iVar4);
      iVar4 = iVar4 + iVar2;
      uVar11 = (*(code *)*DAT_1009962c)(iVar3 + iVar4,uVar11);
      if ((uVar11 < 0xe) && ((0x2401U >> (uVar11 & 0xff) & 1) != 0)) {
        uVar11 = 0x20;
      }
    }
    iVar6 = FUN_10092918(iVar1,uVar11,0);
  }
  *(int *)(param_1 + 0x60) = iVar4;
  iVar1 = FUN_1012691c(param_1,0x70000,0x32);
  iVar2 = FUN_1012691c(param_1,0x70000,0x10);
  iVar3 = FUN_1012691c(param_1,0x70000,0x11);
  iVar4 = FUN_1012691c(param_1,0x70000,0x12);
  iVar7 = FUN_1012691c(param_1,0x70000,0x13);
  iVar2 = local_3c - (iVar2 + iVar1);
  iVar8 = iVar3 + iVar1 + -1 + local_3c + iVar8;
  iVar3 = local_40 - (iVar4 + iVar1);
  iVar6 = iVar6 + iVar7 + iVar1 + -1 + local_40;
  local_30 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14);
  local_38 = *(int *)(param_1 + 0x50) + local_30;
  local_34 = *(int *)(*(int *)(param_1 + 0x2c) + 0x18);
  local_2c = *(int *)(param_1 + 0x5c) + local_34;
  local_34 = local_34 + *(int *)(param_1 + 0x54);
  local_30 = local_30 + *(int *)(param_1 + 0x58);
  FUN_10125ab8(param_1,&local_38);
  *(int *)(param_1 + 0x50) = iVar3;
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = iVar6;
  *(int *)(param_1 + 0x5c) = iVar8;
  local_30 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14);
  local_2c = *(int *)(*(int *)(param_1 + 0x2c) + 0x18);
  local_38 = iVar3 + local_30;
  local_34 = iVar2 + local_2c;
  local_30 = iVar6 + local_30;
  local_2c = iVar8 + local_2c;
  FUN_10125ab8(param_1,&local_38);
  return;
}

