/* FUN_2c603814 @ 0x2c603814 */

void FUN_2c603814(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*DAT_2c603854 != '\0') {
    for (iVar2 = FUN_2c62a4ec(0); iVar2 != 0; iVar2 = FUN_2c62a4ec(iVar2)) {
      if (*(int *)(iVar2 + 0x28) != 0) {
        uVar3 = 0;
        do {
          iVar1 = uVar3 * 4;
          uVar3 = uVar3 + 1;
          FUN_2c6037b0(param_1,*(undefined4 *)(*(int *)(iVar2 + 0xc) + iVar1));
        } while (uVar3 < *(uint *)(iVar2 + 0x28));
      }
    }
    return;
  }
  return;
}

