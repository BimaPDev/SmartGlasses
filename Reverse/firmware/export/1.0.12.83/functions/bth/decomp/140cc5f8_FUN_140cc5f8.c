/* FUN_140cc5f8 @ 0x140cc5f8 */

void FUN_140cc5f8(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_2c;
  int local_28;
  int local_24 [2];
  
  uVar2 = FUN_140cc5bc(param_2);
  FUN_140cc2c0(&local_2c,uVar2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_2c + -0xc);
  pcVar3 = (char *)thunk_FUN_140bff34();
  FUN_140c3e50(&local_2c,pcVar3,*(undefined4 *)(param_1 + 0xc),0);
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*pcVar3 < '\x01') {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  FUN_140cc2ce(&local_28,uVar2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(local_28 + -0xc);
  uVar4 = thunk_FUN_140bff34();
  FUN_140c3e50(&local_28,uVar4,*(undefined4 *)(param_1 + 0x18),0);
  FUN_140cc2dc(local_24,uVar2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_24[0] + -0xc);
  uVar5 = thunk_FUN_140bff34();
  FUN_140c3e50(local_24,uVar5,*(undefined4 *)(param_1 + 0x20),0);
  uVar1 = FUN_140cc2b4(uVar2);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_140cc2ba(uVar2);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  uVar2 = FUN_140cc580(param_2);
  FUN_140c5558(uVar2,*DAT_140cc6e8,*DAT_140cc6e8 + 0x24,param_1 + 0x26);
  FUN_140c5558(uVar2,*DAT_140cc6ec,*DAT_140cc6ec + 0x1a,param_1 + 0x4a);
  *(char **)(param_1 + 8) = pcVar3;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  FUN_140c3fe4(local_24);
  FUN_140c3fe4(&local_28);
  FUN_140c3fe4(&local_2c);
  return;
}

