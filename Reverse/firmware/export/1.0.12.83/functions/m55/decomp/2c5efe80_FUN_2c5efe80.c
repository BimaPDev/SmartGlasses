/* FUN_2c5efe80 @ 0x2c5efe80 */

void FUN_2c5efe80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x18) != 0) {
      FUN_2c5fee30(*(undefined4 *)(iVar1 + 0x2c));
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      FUN_2c5efbcc(*(undefined4 *)(iVar1 + 0x2c));
      *(undefined4 *)(iVar1 + 0x1c) = 0;
    }
    FUN_2c5fee30(*(undefined4 *)(iVar1 + 0x2c),iVar1);
    iVar1 = iVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

