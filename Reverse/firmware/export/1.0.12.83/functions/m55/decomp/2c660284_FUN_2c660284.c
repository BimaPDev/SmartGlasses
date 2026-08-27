/* FUN_2c660284 @ 0x2c660284 */

void FUN_2c660284(int param_1,undefined4 param_2)

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
  
  uVar1 = FUN_2c65fb2c(param_2);
  FUN_2c65f830(&local_2c,uVar1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(local_2c + -0xc);
  pcVar2 = (char *)thunk_FUN_2c64ca5c();
  FUN_2c650ccc(&local_2c,pcVar2,*(undefined4 *)(param_1 + 0xc),0);
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
  FUN_2c65f83e(&local_28,uVar1);
  uVar3 = *(uint *)(local_28 + -0xc);
  *(uint *)(param_1 + 0x18) = uVar3;
  if (uVar3 < 0x1fffffff) {
    iVar4 = uVar3 << 2;
  }
  else {
    iVar4 = -1;
  }
  uVar5 = thunk_FUN_2c64ca5c(iVar4);
  FUN_2c651448(&local_28,uVar5,*(undefined4 *)(param_1 + 0x18),0);
  FUN_2c65f84c(local_24,uVar1);
  uVar3 = *(uint *)(local_24[0] + -0xc);
  *(uint *)(param_1 + 0x20) = uVar3;
  if (uVar3 < 0x1fffffff) {
    iVar4 = uVar3 << 2;
  }
  else {
    iVar4 = -1;
  }
  uVar6 = thunk_FUN_2c64ca5c(iVar4);
  FUN_2c651448(local_24,uVar6,*(undefined4 *)(param_1 + 0x20),0);
  uVar7 = FUN_2c65f824(uVar1);
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  uVar1 = FUN_2c65f82a(uVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_2c65faf0(param_2);
  FUN_2c6565d4(uVar1,*DAT_2c66038c,*DAT_2c66038c + 0x24,param_1 + 0x2c);
  FUN_2c6565d4(uVar1,*DAT_2c660390,*DAT_2c660390 + 0x1a,param_1 + 0xbc);
  *(char **)(param_1 + 8) = pcVar2;
  *(undefined1 *)(param_1 + 0x124) = 1;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  FUN_2c6515c0(local_24);
  FUN_2c6515c0(&local_28);
  FUN_2c650e60(&local_2c);
  return;
}

