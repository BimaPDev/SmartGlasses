/* FUN_2c5fbddc @ 0x2c5fbddc */

void FUN_2c5fbddc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_2c5fbe50;
  if (*DAT_2c5fbe4c == '\0') {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_2c5fee30(*(undefined4 *)(DAT_2c5fbe50 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_2c5fee30(*(undefined4 *)(iVar1 + 4));
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_2c5fee30(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(param_1 + 0x20));
    uVar2 = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_2c5fee30(uVar2,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + 0xe54);
    *(int *)(iVar1 + 0xe54) = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x54c,DAT_2c5fbe60,DAT_2c5fbe5c,DAT_2c5fbe58,DAT_2c5fbe54,param_1);
}

