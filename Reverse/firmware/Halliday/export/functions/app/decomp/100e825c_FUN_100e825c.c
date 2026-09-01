/* FUN_100e825c @ 0x100e825c */

int FUN_100e825c(uint param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1;
  if ((param_1 & 3) != 0) {
    uVar6 = (param_1 & 0xfffffffc) + 4;
  }
  iVar2 = FUN_1013c66c(DAT_100e8308,uVar6,0,0,param_1,param_2);
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100e8314 | (DAT_100e8310 - DAT_100e830c) * 0x20 & 0xff00U,DAT_100e831c,
                 DAT_100e8318,uVar6);
  }
  else {
    piVar3 = (int *)FUN_1013c66c(DAT_100e8320,0xc,0,0,param_1,param_2);
    piVar1 = DAT_100e8334;
    if (piVar3 == (int *)0x0) {
      FUN_100a5b78((DAT_100e8310 - DAT_100e830c) * 0x20 & 0xff00U | 0x980032,DAT_100e8330,
                   DAT_100e832c,*DAT_100e8328,*DAT_100e8324);
    }
    else {
      piVar3[2] = 0;
      iVar4 = *piVar1;
      *piVar3 = iVar2;
      piVar3[1] = uVar6;
      if (iVar4 == 0) {
        *piVar1 = (int)piVar3;
      }
      else {
        do {
          iVar5 = iVar4;
          iVar4 = *(int *)(iVar5 + 8);
        } while (iVar4 != 0);
        *(int **)(iVar5 + 8) = piVar3;
      }
      piVar1 = DAT_100e8324;
      iVar4 = uVar6 + *DAT_100e8328;
      *DAT_100e8328 = iVar4;
      *piVar1 = *piVar1 + 1;
      if (*DAT_100e8338 < iVar4) {
        *DAT_100e8338 = iVar4;
      }
    }
  }
  return iVar2;
}

