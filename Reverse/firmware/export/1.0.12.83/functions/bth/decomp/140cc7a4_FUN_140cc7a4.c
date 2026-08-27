/* FUN_140cc7a4 @ 0x140cc7a4 */

void FUN_140cc7a4(int param_1,int param_2,int param_3,int param_4)

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
  uVar2 = FUN_140cc768(param_2);
  uVar1 = FUN_140cc156();
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  uVar1 = FUN_140cc15c(uVar2);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  uVar3 = FUN_140cc19a(uVar2);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_140cc162(&local_30,uVar2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_30 + -0xc);
  pcVar4 = (char *)thunk_FUN_140bff34();
  FUN_140c3e50(&local_30,pcVar4,*(undefined4 *)(param_1 + 0xc),0);
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
  FUN_140cc170(&local_2c,uVar2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(local_2c + -0xc);
  uVar3 = thunk_FUN_140bff34();
  FUN_140c3e50(&local_2c,uVar3,*(undefined4 *)(param_1 + 0x18),0);
  FUN_140cc17e(&local_28,uVar2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_28 + -0xc);
  uVar5 = thunk_FUN_140bff34();
  FUN_140c3e50(&local_28,uVar5,*(undefined4 *)(param_1 + 0x20),0);
  FUN_140cc18c(&local_24,uVar2);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(local_24 + -0xc);
  uVar6 = thunk_FUN_140bff34();
  FUN_140c3e50(&local_24,uVar6,*(undefined4 *)(param_1 + 0x28),0);
  uVar7 = FUN_140cc1a0(uVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  uVar2 = FUN_140cc1aa(uVar2);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_140cc580(param_2);
  FUN_140c5558(uVar2,*DAT_140cc8bc,*DAT_140cc8bc + 0xb,param_1 + 0x38);
  *(char **)(param_1 + 8) = pcVar4;
  *(undefined1 *)(param_1 + 0x43) = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  FUN_140c3fe4(&local_24);
  FUN_140c3fe4(&local_28);
  FUN_140c3fe4(&local_2c);
  FUN_140c3fe4(&local_30);
  return;
}

