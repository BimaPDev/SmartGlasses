/* FUN_2c6600f4 @ 0x2c6600f4 */

void FUN_2c6600f4(int param_1,int param_2,int param_3,int param_4)

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
  uVar1 = FUN_2c65fbe0(param_2);
  uVar2 = FUN_2c65f6c6();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_2c65f6cc(uVar1);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_2c65f70a(uVar1);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  FUN_2c65f6d2(&local_30,uVar1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_30 + -0xc);
  pcVar3 = (char *)thunk_FUN_2c64ca5c();
  FUN_2c650ccc(&local_30,pcVar3,*(undefined4 *)(param_1 + 0xc),0);
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
  FUN_2c65f6e0(&local_2c,uVar1);
  uVar4 = *(uint *)(local_2c + -0xc);
  *(uint *)(param_1 + 0x20) = uVar4;
  if (uVar4 < 0x1fffffff) {
    iVar5 = uVar4 << 2;
  }
  else {
    iVar5 = -1;
  }
  uVar2 = thunk_FUN_2c64ca5c(iVar5);
  FUN_2c651448(&local_2c,uVar2,*(undefined4 *)(param_1 + 0x20),0);
  FUN_2c65f6ee(&local_28,uVar1);
  uVar4 = *(uint *)(local_28 + -0xc);
  *(uint *)(param_1 + 0x28) = uVar4;
  if (uVar4 < 0x1fffffff) {
    iVar5 = uVar4 << 2;
  }
  else {
    iVar5 = -1;
  }
  uVar6 = thunk_FUN_2c64ca5c(iVar5);
  FUN_2c651448(&local_28,uVar6,*(undefined4 *)(param_1 + 0x28),0);
  FUN_2c65f6fc(&local_24,uVar1);
  uVar4 = *(uint *)(local_24 + -0xc);
  *(uint *)(param_1 + 0x30) = uVar4;
  if (uVar4 < 0x1fffffff) {
    iVar5 = uVar4 << 2;
  }
  else {
    iVar5 = -1;
  }
  uVar7 = thunk_FUN_2c64ca5c(iVar5);
  FUN_2c651448(&local_24,uVar7,*(undefined4 *)(param_1 + 0x30),0);
  uVar8 = FUN_2c65f710(uVar1);
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  uVar1 = FUN_2c65f71a(uVar1);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_2c65faf0(param_2);
  FUN_2c6565d4(uVar1,*DAT_2c660238,*DAT_2c660238 + 0xb,param_1 + 0x40);
  *(char **)(param_1 + 8) = pcVar3;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  FUN_2c6515c0(&local_24);
  FUN_2c6515c0(&local_28);
  FUN_2c6515c0(&local_2c);
  FUN_2c650e60(&local_30);
  return;
}

