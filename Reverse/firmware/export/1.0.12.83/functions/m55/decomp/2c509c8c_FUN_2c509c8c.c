/* FUN_2c509c8c @ 0x2c509c8c */

void FUN_2c509c8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0x3c && iVar1 == 0) {
    FUN_2c50ece8(param_1 + 0x58,*(undefined4 *)(param_1 + 0x3c));
    FUN_2c50ec60(param_1 + 0x58,*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x10) = 0x78;
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  if (iVar2 != 0x1e || iVar1 != 0) {
    if ((iVar2 == 0xf && iVar1 == 0) && (*(char *)(param_1 + 0xc) != '\0')) {
      FUN_2c50ece8(param_1 + 0x58,*(undefined4 *)(param_1 + 0x2c));
      FUN_2c50ec60(param_1 + 0x58,*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x10) = 0x1e;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    return;
  }
  FUN_2c50ece8(param_1 + 0x58,*(undefined4 *)(param_1 + 0x34));
  FUN_2c50ec60(param_1 + 0x58,*(undefined4 *)(param_1 + 0x3c));
  *(undefined4 *)(param_1 + 0x10) = 0x3c;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

