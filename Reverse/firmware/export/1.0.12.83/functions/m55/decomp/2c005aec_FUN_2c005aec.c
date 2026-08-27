/* FUN_2c005aec @ 0x2c005aec */

undefined4 FUN_2c005aec(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (0x100 < param_4) {
    return 2;
  }
  uVar3 = *(uint *)(DAT_2c005b88 + param_1 * 4);
  if ((int)(uVar3 << 0xd) < 0) {
    uVar4 = 0x32;
  }
  else if ((uVar3 & 0x20000) == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = 0xa2;
  }
  FUN_2c003dcc(param_1);
  uVar3 = FUN_2c003bd4(param_1,param_3,param_4);
  FUN_2c003c84(param_1,6,0);
  FUN_2c003ea8(param_1,param_2);
  FUN_2c003c84(param_1,uVar4,param_2);
  while (uVar1 = uVar3, uVar1 != 0) {
    param_3 = param_3 + (param_4 - uVar1);
    uVar3 = FUN_2c003c1c(param_1,param_3,uVar1);
    param_4 = uVar1;
  }
  FUN_2c003d6c(param_1);
  do {
    iVar2 = FUN_2c005188(param_1);
  } while (iVar2 != 0);
  FUN_2c003d24(param_1);
  return 0;
}

