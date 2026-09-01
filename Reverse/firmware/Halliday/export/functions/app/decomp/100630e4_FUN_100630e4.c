/* FUN_100630e4 @ 0x100630e4 */

void FUN_100630e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *DAT_10063148;
  if (iVar3 == 0) {
    uVar2 = 0x16f;
    uVar4 = DAT_1006314c;
  }
  else {
    cVar1 = *(char *)(iVar3 + 0x2d);
    if (param_1 == 0) {
      if ('\0' < cVar1) {
        *(char *)(iVar3 + 0x2d) = cVar1 + -1;
        if ((char)(cVar1 + -1) != '\0') {
          return;
        }
        FUN_10055c2c(0xf,param_2,iVar3,param_4);
        return;
      }
      uVar2 = 0x17d;
      uVar4 = DAT_1006315c;
    }
    else {
      if (cVar1 != '\x7f') {
        *(char *)(iVar3 + 0x2d) = cVar1 + '\x01';
        if ((char)(cVar1 + '\x01') != '\x01') {
          return;
        }
        FUN_10055be0(0xf,param_2,iVar3,param_4);
        return;
      }
      uVar2 = 0x172;
      uVar4 = DAT_10063158;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_10063154,uVar2,DAT_10063150,uVar4);
}

