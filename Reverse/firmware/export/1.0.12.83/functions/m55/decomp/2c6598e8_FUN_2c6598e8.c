/* FUN_2c6598e8 @ 0x2c6598e8 */

void FUN_2c6598e8(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar2 = FUN_2c6598ac(param_2);
  uVar1 = FUN_2c65909c();
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  uVar1 = FUN_2c6590a2(uVar2);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  uVar3 = FUN_2c6590e0(uVar2);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_2c6590a8(&local_30,uVar2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_30 + -0xc);
  pcVar4 = (char *)thunk_FUN_2c64ca5c();
  FUN_2c650ccc(&local_30,pcVar4,*(undefined4 *)(param_1 + 0xc),0);
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*pcVar4 < '\x01') {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  FUN_2c6590b6(&local_2c,uVar2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(local_2c + -0xc);
  uVar3 = thunk_FUN_2c64ca5c();
  FUN_2c650ccc(&local_2c,uVar3,*(undefined4 *)(param_1 + 0x18),0);
  FUN_2c6590c4(&local_28,uVar2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_28 + -0xc);
  uVar5 = thunk_FUN_2c64ca5c();
  FUN_2c650ccc(&local_28,uVar5,*(undefined4 *)(param_1 + 0x20),0);
  FUN_2c6590d2(&local_24,uVar2);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(local_24 + -0xc);
  uVar6 = thunk_FUN_2c64ca5c();
  FUN_2c650ccc(&local_24,uVar6,*(undefined4 *)(param_1 + 0x28),0);
  uVar7 = FUN_2c6590e6(uVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  uVar2 = FUN_2c6590f0(uVar2);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_2c659524(param_2);
  FUN_2c6523d4(uVar2,*DAT_2c659a00,*DAT_2c659a00 + 0xb,param_1 + 0x38);
  *(char **)(param_1 + 8) = pcVar4;
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  FUN_2c650e60(&local_24);
  FUN_2c650e60(&local_28);
  FUN_2c650e60(&local_2c);
  FUN_2c650e60(&local_30);
  return;
}

