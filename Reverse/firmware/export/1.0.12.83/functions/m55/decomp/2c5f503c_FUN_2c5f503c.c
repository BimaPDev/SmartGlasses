/* FUN_2c5f503c @ 0x2c5f503c */

undefined4 FUN_2c5f503c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_3) {
    iVar4 = 0;
    do {
      pcVar2 = (char *)(iVar4 + -1 + param_2);
      iVar3 = iVar4;
      do {
        pcVar2 = pcVar2 + 1;
        if (*pcVar2 == '&') break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
      if (iVar4 < iVar3) {
        if (iVar4 == 0) {
          if (param_3 <= iVar3) {
            return 0;
          }
          FUN_2c5f6990(param_1,param_3);
          FUN_2c5f6b40(param_1,param_2,iVar3);
        }
        else {
          FUN_2c5f6b40(param_1,param_2 + iVar4,iVar3 - iVar4);
          if (param_3 <= iVar3) {
            return 1;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_2c5f4e70(param_1,param_2 + iVar3,param_3 - iVar3);
      iVar4 = iVar3 + iVar1;
      if (iVar1 == 0) {
        FUN_2c5f6b1c(param_1,0x26);
      }
    } while (iVar4 < param_3);
  }
  return 1;
}

