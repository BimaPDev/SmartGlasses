/* FUN_2c5c43a0 @ 0x2c5c43a0 */

int FUN_2c5c43a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_2c62c45c(0x50);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  uVar2 = FUN_2c5c4348(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = FUN_2c5c4348(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  uVar2 = FUN_2c5c4348(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  uVar2 = FUN_2c5c4348(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  uVar2 = FUN_2c5c4348(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  *(undefined1 *)(iVar1 + 0x30) = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(iVar1 + 0x31) = *(undefined1 *)(param_1 + 0x31);
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined1 *)(iVar1 + 0x40) = *(undefined1 *)(param_1 + 0x40);
  uVar2 = FUN_2c5c4348(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  uVar2 = FUN_2c5c4348(*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  if ((*(char **)(param_1 + 0x48) != (char *)0x0) && (**(char **)(param_1 + 0x48) != '\0')) {
    puVar3 = (undefined1 *)FUN_2c62c45c(0x1c);
    *puVar3 = **(undefined1 **)(param_1 + 0x48);
    uVar2 = FUN_2c5c4348(*(undefined4 *)(*(int *)(param_1 + 0x48) + 4));
    *(undefined4 *)(puVar3 + 4) = uVar2;
    uVar2 = FUN_2c5c4348(*(undefined4 *)(*(int *)(param_1 + 0x48) + 8));
    *(undefined4 *)(puVar3 + 8) = uVar2;
    uVar2 = FUN_2c5c4348(*(undefined4 *)(*(int *)(param_1 + 0x48) + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar2;
    uVar2 = FUN_2c5c4348(*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x10));
    *(undefined4 *)(puVar3 + 0x10) = uVar2;
    uVar2 = FUN_2c5c4348(*(undefined4 *)(*(int *)(param_1 + 0x48) + 0x14));
    *(undefined4 *)(puVar3 + 0x14) = uVar2;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(undefined1 **)(iVar1 + 0x48) = puVar3;
    return iVar1;
  }
  *(undefined4 *)(iVar1 + 0x48) = 0;
  return iVar1;
}

