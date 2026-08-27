/* FUN_2c64ecac @ 0x2c64ecac */

undefined4 FUN_2c64ecac(int *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  
  FUN_2c64ec84(param_1,param_4);
  while( true ) {
    if (*param_1 == param_1[1]) {
      return 0;
    }
    if ((param_2[1] == *param_2) || (uVar1 = FUN_2c64e740(param_1,param_3), uVar1 == 0xfffffffe))
    break;
    if (param_3 < uVar1) {
      return 2;
    }
    puVar2 = (uint *)*param_2;
    *param_2 = (int)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  return 1;
}

