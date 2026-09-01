/* FUN_100a0b00 @ 0x100a0b00 */

int FUN_100a0b00(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_100a09ec(*(int *)(param_1 + 0x38),param_1);
  }
  pcVar2 = *(code **)(*(int *)(param_1 + 0x50) + 0x28);
  iVar1 = 0;
  if ((pcVar2 != (code *)0x0) && (iVar1 = (*pcVar2)(param_1), iVar1 != 0)) {
    FUN_100a5b78(DAT_100a0b54 | (DAT_100a0b4c - DAT_100a0b48) * 0x20 & 0xff00U,DAT_100a0b58,
                 DAT_100a0b50,iVar1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_1012d1f4();
  }
  FUN_1012d1f4(param_1);
  return iVar1;
}

