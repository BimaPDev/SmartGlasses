/* FUN_2c4b5750 @ 0x2c4b5750 */

void FUN_2c4b5750(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_2c4b57ec;
  cVar1 = *(char *)(DAT_2c4b57e8 + param_1 * 2 + param_2);
  iVar4 = (int)cVar1;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4b57f4,DAT_2c4b57f0,param_1,param_2);
  }
  if (*(char *)(DAT_2c4b57ec + iVar4 + 7) != '\0') {
    *(undefined1 *)(DAT_2c4b57ec + iVar4 + 7) = 0;
    iVar3 = iVar2 + iVar4 * 0x1c;
    *(undefined4 *)(iVar3 + 0x24) = 0x10;
    if (param_1 == 1) {
      if (iVar4 != 2) {
        FUN_2c4b8700(0,(short)cVar1 * 0x1c + 0x10 + iVar2,0x1c,param_4);
        return;
      }
      FUN_2c4b9d8c(0,iVar2 + 0x48,iVar3,param_4);
      return;
    }
    if (param_1 != 2) {
      FUN_2c4b9480(0,cVar1,(short)cVar1 * 0x1c + 0x10 + iVar2,param_4);
      return;
    }
    if (iVar4 == 4) {
      FUN_2c4ba208(0,iVar2 + 0x80,iVar3,param_4);
      return;
    }
  }
  return;
}

