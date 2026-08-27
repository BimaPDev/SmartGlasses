/* FUN_2c65959c @ 0x2c65959c */

void FUN_2c65959c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_2c;
  int local_28;
  int local_24 [2];
  
  uVar2 = FUN_2c659560(param_2);
  FUN_2c659264(&local_2c,uVar2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_2c + -0xc);
  pcVar3 = (char *)thunk_FUN_2c64ca5c();
  FUN_2c650ccc(&local_2c,pcVar3,*(undefined4 *)(param_1 + 0xc),0);
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
  FUN_2c659272(&local_28,uVar2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(local_28 + -0xc);
  uVar4 = thunk_FUN_2c64ca5c();
  FUN_2c650ccc(&local_28,uVar4,*(undefined4 *)(param_1 + 0x18),0);
  FUN_2c659280(local_24,uVar2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(local_24[0] + -0xc);
  uVar5 = thunk_FUN_2c64ca5c();
  FUN_2c650ccc(local_24,uVar5,*(undefined4 *)(param_1 + 0x20),0);
  uVar1 = FUN_2c659258(uVar2);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_2c65925e(uVar2);
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  uVar2 = FUN_2c659524(param_2);
  FUN_2c6523d4(uVar2,*DAT_2c65968c,*DAT_2c65968c + 0x24,param_1 + 0x26);
  FUN_2c6523d4(uVar2,*DAT_2c659690,*DAT_2c659690 + 0x1a,param_1 + 0x4a);
  *(char **)(param_1 + 8) = pcVar3;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  FUN_2c650e60(local_24);
  FUN_2c650e60(&local_28);
  FUN_2c650e60(&local_2c);
  return;
}

