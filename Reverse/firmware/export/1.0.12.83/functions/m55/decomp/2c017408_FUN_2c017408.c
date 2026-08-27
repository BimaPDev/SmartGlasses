/* FUN_2c017408 @ 0x2c017408 */

int FUN_2c017408(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = param_4;
  if ((0x1a < param_1) || (iVar4 = param_1 * 0x2c + DAT_2c017470, *(char *)(iVar4 + 4) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c017478,DAT_2c017474,param_1,iVar4,param_4);
  }
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) == 0) {
      return 0;
    }
    pcVar5 = *(char **)(iVar4 + 0x24);
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
    iVar4 = 0;
  }
  else {
    pcVar5 = *(char **)(iVar4 + 0x24);
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
    iVar4 = 0;
    pcVar3 = pcVar5;
    do {
      cVar1 = *pcVar3;
      pcVar3 = *(char **)(pcVar3 + 0x1c);
      if (cVar1 == '\x01') {
        iVar4 = iVar4 + 1;
      }
    } while (pcVar3 != (char *)0x0);
    if (-1 < (int)(param_2 << 0x1e)) {
      return iVar4;
    }
  }
  iVar2 = 0;
  do {
    cVar1 = *pcVar5;
    pcVar5 = *(char **)(pcVar5 + 0x1c);
    if (cVar1 == '\x02') {
      iVar2 = iVar2 + 1;
    }
  } while (pcVar5 != (char *)0x0);
  return iVar4 + iVar2;
}

