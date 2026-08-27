/* FUN_2c59c964 @ 0x2c59c964 */

int FUN_2c59c964(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10c) != param_1 + 0x114) {
    thunk_FUN_2c669588(*(int *)(param_1 + 0x10c),*(int *)(param_1 + 0x114) + 1);
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  while (iVar1 != 0) {
    FUN_2c59c5dc(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar2;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  while (iVar1 != 0) {
    FUN_2c59c7a0(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar2;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  while (iVar1 != 0) {
    FUN_2c59c418(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar2;
  }
  FUN_2c59c3d4(*(undefined4 *)(param_1 + 0xa0));
  FUN_2c59c7a0(*(undefined4 *)(param_1 + 0x84));
  iVar1 = *(int *)(param_1 + 0x6c);
  while (iVar1 != 0) {
    FUN_2c59c7a0(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar2;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  while (iVar1 != 0) {
    FUN_2c59c7a0(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar2;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  while (iVar1 != 0) {
    FUN_2c59c5dc(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar2;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  while (iVar1 != 0) {
    FUN_2c59c7a0(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
    iVar1 = iVar2;
  }
  return param_1;
}

