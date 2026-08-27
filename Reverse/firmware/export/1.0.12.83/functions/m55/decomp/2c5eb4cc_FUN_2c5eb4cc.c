/* FUN_2c5eb4cc @ 0x2c5eb4cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5eb4cc(char *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar1 = FUN_2c66c4ec();
  uVar3 = (uint)*param_1;
  if ((uVar3 & 0xf0) == 0xf0) {
    uVar3 = uVar3 & 7;
    iVar2 = 4;
    if (uVar1 < 4) goto LAB_2c5eb544;
  }
  else if ((uVar3 & 0xe0) == 0xe0) {
    uVar3 = uVar3 & 0xf;
    iVar2 = 3;
    if (uVar1 < 3) goto LAB_2c5eb544;
  }
  else {
    if ((uVar3 & 0xc0) != 0xc0) {
      iVar2 = 1;
      if (uVar1 == 0) goto LAB_2c5eb544;
      goto LAB_2c5eb4fa;
    }
    uVar3 = uVar3 & 0x1f;
    iVar2 = 2;
    if (uVar1 < 2) {
LAB_2c5eb544:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5eb57c,0x1f,_LAB_2c5eb578,_LAB_2c5eb574,iVar2,uVar1);
    }
  }
  pcVar5 = param_1 + 1;
  do {
    pcVar4 = pcVar5 + 1;
    uVar3 = (int)*pcVar5 & 0x3fU | uVar3 << 6;
    if (((int)*pcVar5 & 0xc0U) != 0x80) {
      return 0xffffffff;
    }
    pcVar5 = pcVar4;
  } while (param_1 + iVar2 != pcVar4);
LAB_2c5eb4fa:
  *param_2 = uVar3;
  *param_3 = iVar2;
  return 0;
}

