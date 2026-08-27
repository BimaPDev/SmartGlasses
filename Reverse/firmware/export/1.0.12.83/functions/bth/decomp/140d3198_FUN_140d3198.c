/* FUN_140d3198 @ 0x140d3198 */

void FUN_140d3198(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int local_2c;
  int local_28;
  int local_24 [2];
  
  uVar1 = FUN_140d2a40(param_2);
  FUN_140d2744(&local_2c,uVar1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_2c + -0xc);
  pcVar2 = (char *)thunk_FUN_140bff34();
  FUN_140c3e50(&local_2c,pcVar2,*(undefined4 *)(param_1 + 0xc),0);
  uVar8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*pcVar2 < '\x01') {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x10) = uVar8;
  FUN_140d2752(&local_28,uVar1);
  uVar3 = *(uint *)(local_28 + -0xc);
  *(uint *)(param_1 + 0x18) = uVar3;
  if (uVar3 < 0x1fffffff) {
    iVar4 = uVar3 << 2;
  }
  else {
    iVar4 = -1;
  }
  uVar5 = thunk_FUN_140bff34(iVar4);
  FUN_140c45cc(&local_28,uVar5,*(undefined4 *)(param_1 + 0x18),0);
  FUN_140d2760(local_24,uVar1);
  uVar3 = *(uint *)(local_24[0] + -0xc);
  *(uint *)(param_1 + 0x20) = uVar3;
  if (uVar3 < 0x1fffffff) {
    iVar4 = uVar3 << 2;
  }
  else {
    iVar4 = -1;
  }
  uVar6 = thunk_FUN_140bff34(iVar4);
  FUN_140c45cc(local_24,uVar6,*(undefined4 *)(param_1 + 0x20),0);
  uVar7 = FUN_140d2738(uVar1);
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  uVar1 = FUN_140d273e(uVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_140d2a04(param_2);
  FUN_140c975c(uVar1,*DAT_140d32a0,*DAT_140d32a0 + 0x24,param_1 + 0x2c);
  FUN_140c975c(uVar1,*DAT_140d32a4,*DAT_140d32a4 + 0x1a,param_1 + 0xbc);
  *(char **)(param_1 + 8) = pcVar2;
  *(undefined1 *)(param_1 + 0x124) = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  FUN_140c4744(local_24);
  FUN_140c4744(&local_28);
  FUN_140c3fe4(&local_2c);
  return;
}

