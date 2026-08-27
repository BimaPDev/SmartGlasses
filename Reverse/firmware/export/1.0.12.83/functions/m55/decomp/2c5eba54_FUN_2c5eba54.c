/* FUN_2c5eba54 @ 0x2c5eba54 */

void FUN_2c5eba54(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  do {
    iVar2 = FUN_2c60251c(param_1,param_2);
  } while (iVar2 != 0);
  iVar2 = *DAT_2c5ebac4;
  iVar3 = *(int *)(iVar2 + 0x54);
  if (iVar3 != 0) {
    cVar1 = *(char *)((int)DAT_2c5ebac4 + 5);
    do {
      if ((param_1 == *(int *)(iVar3 + 0x44)) && (*(undefined1 *)(iVar3 + 0x58) = 1, cVar1 == '\0'))
      break;
      iVar3 = *(int *)(iVar3 + 0x54);
    } while (iVar3 != 0);
    if (*DAT_2c5ebac8 < 1) {
      iVar3 = *(int *)(iVar2 + 0x54);
      while (iVar4 = iVar2, iVar2 = iVar3, iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x54);
        if (*(char *)(iVar2 + 0x58) != '\0') {
          FUN_2c62bea8();
          *(int *)(iVar4 + 0x54) = iVar3;
          iVar2 = iVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5ebad4,0xfc,DAT_2c5ebad0,DAT_2c5ebacc,param_1);
}

