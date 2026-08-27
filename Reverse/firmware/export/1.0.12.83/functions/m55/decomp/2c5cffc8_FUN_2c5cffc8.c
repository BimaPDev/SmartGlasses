/* FUN_2c5cffc8 @ 0x2c5cffc8 */

void FUN_2c5cffc8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_2c6043d8();
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

