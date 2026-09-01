/* FUN_100a0a70 @ 0x100a0a70 */

int FUN_100a0a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100a0310(param_1,2);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100a0af0 - DAT_100a0aec) * 0x20 & 0xff00U | 0x1760011,DAT_100a0af8,
                 DAT_100a0af4);
    iVar1 = -0x58;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_100a09ec(*(int *)(param_1 + 0x38),param_1);
    }
    iVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 0x24))(param_1);
    if (iVar1 != 0) {
      FUN_100a5b78((DAT_100a0af0 - DAT_100a0aec) * 0x20 & 0xff00U | 0x1800011,DAT_100a0af8,
                   DAT_100a0afc,iVar1);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
      FUN_10113fd0();
    }
    *(undefined1 *)(param_1 + 2) = 3;
  }
  return iVar1;
}

