/* FUN_2c59d894 @ 0x2c59d894 */

void FUN_2c59d894(int param_1)

{
  int iVar1;
  int iVar2;
  
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
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(int *)(param_1 + 0xd4) = param_1 + 0xcc;
  *(int *)(param_1 + 0xd8) = param_1 + 0xcc;
  *(undefined4 *)(param_1 + 0xdc) = 0;
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
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(int *)(param_1 + 0xbc) = param_1 + 0xb4;
  *(int *)(param_1 + 0xc0) = param_1 + 0xb4;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  while (iVar1 != 0) {
    FUN_2c59c3d4(*(undefined4 *)(iVar1 + 0xc));
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x28) != iVar1 + 0x30) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x28),*(int *)(iVar1 + 0x30) + 1);
    }
    if (*(int *)(iVar1 + 0x10) != iVar1 + 0x18) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x40);
    iVar1 = iVar2;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(int *)(param_1 + 0xa4) = param_1 + 0x9c;
  *(int *)(param_1 + 0xa8) = param_1 + 0x9c;
  *(undefined4 *)(param_1 + 0xac) = 0;
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
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(int *)(param_1 + 0xec) = param_1 + 0xe4;
  *(int *)(param_1 + 0xf0) = param_1 + 0xe4;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}

