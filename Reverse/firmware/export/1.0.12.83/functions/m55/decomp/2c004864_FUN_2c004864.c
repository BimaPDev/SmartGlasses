/* FUN_2c004864 @ 0x2c004864 */

int FUN_2c004864(uint param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00c25c(DAT_2c004938);
  }
  iVar4 = DAT_2c004930 + param_1 * 0x3c;
  if (*(char *)(DAT_2c004930 + param_1 * 0x3c) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c00c25c(DAT_2c004934);
  }
  param_2 = param_2 & 0x3ffffff;
  uVar3 = *(uint *)(iVar4 + 0x2c);
  if (uVar3 <= param_2) {
    return 0xb;
  }
  if (uVar3 - param_2 < param_4) {
    return 0xc;
  }
  uVar3 = *(uint *)(iVar4 + 0x30);
  uVar1 = FUN_2c00502c(param_1,param_5);
  if (param_4 == 0) {
    iVar4 = 0;
  }
  else {
    do {
      uVar5 = uVar3 - (uVar3 - 1 & param_2);
      uVar2 = uVar3;
      if (param_4 <= uVar3) {
        uVar2 = param_4;
      }
      if (uVar2 <= uVar5) {
        uVar5 = uVar2;
      }
      iVar4 = FUN_2c005aec(param_1,param_2,param_3,uVar5,param_5);
      param_4 = param_4 - uVar5;
      param_3 = param_3 + uVar5;
    } while ((param_4 != 0) && (param_2 = param_2 + uVar5, iVar4 == 0));
  }
  FUN_2c005088(param_1,param_5,uVar1);
  return iVar4;
}

