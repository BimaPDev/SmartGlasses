/* FUN_140d3008 @ 0x140d3008 */

void FUN_140d3008(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_140d2af4(param_2);
  uVar2 = FUN_140d25da();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_140d25e0(uVar1);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_140d261e(uVar1);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  FUN_140d25e6(&local_30,uVar1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_30 + -0xc);
  pcVar3 = (char *)thunk_FUN_140bff34();
  FUN_140c3e50(&local_30,pcVar3,*(undefined4 *)(param_1 + 0xc),0);
  uVar9 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*pcVar3 < '\x01') {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x10) = uVar9;
  FUN_140d25f4(&local_2c,uVar1);
  uVar4 = *(uint *)(local_2c + -0xc);
  *(uint *)(param_1 + 0x20) = uVar4;
  if (uVar4 < 0x1fffffff) {
    iVar5 = uVar4 << 2;
  }
  else {
    iVar5 = -1;
  }
  uVar2 = thunk_FUN_140bff34(iVar5);
  FUN_140c45cc(&local_2c,uVar2,*(undefined4 *)(param_1 + 0x20),0);
  FUN_140d2602(&local_28,uVar1);
  uVar4 = *(uint *)(local_28 + -0xc);
  *(uint *)(param_1 + 0x28) = uVar4;
  if (uVar4 < 0x1fffffff) {
    iVar5 = uVar4 << 2;
  }
  else {
    iVar5 = -1;
  }
  uVar6 = thunk_FUN_140bff34(iVar5);
  FUN_140c45cc(&local_28,uVar6,*(undefined4 *)(param_1 + 0x28),0);
  FUN_140d2610(&local_24,uVar1);
  uVar4 = *(uint *)(local_24 + -0xc);
  *(uint *)(param_1 + 0x30) = uVar4;
  if (uVar4 < 0x1fffffff) {
    iVar5 = uVar4 << 2;
  }
  else {
    iVar5 = -1;
  }
  uVar7 = thunk_FUN_140bff34(iVar5);
  FUN_140c45cc(&local_24,uVar7,*(undefined4 *)(param_1 + 0x30),0);
  uVar8 = FUN_140d2624(uVar1);
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  uVar1 = FUN_140d262e(uVar1);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_140d2a04(param_2);
  FUN_140c975c(uVar1,*DAT_140d314c,*DAT_140d314c + 0xb,param_1 + 0x40);
  *(char **)(param_1 + 8) = pcVar3;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  FUN_140c4744(&local_24);
  FUN_140c4744(&local_28);
  FUN_140c4744(&local_2c);
  FUN_140c3fe4(&local_30);
  return;
}

