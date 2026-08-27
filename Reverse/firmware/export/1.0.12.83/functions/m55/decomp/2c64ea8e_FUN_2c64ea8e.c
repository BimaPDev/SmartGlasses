/* FUN_2c64ea8e @ 0x2c64ea8e */

undefined4
FUN_2c64ea8e(undefined4 param_1,undefined4 param_2,uint *param_3,uint *param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_6;
  uStack_14 = param_7;
  while( true ) {
    puVar3 = param_3;
    if (param_4 == puVar3) {
      uVar2 = 0;
      goto LAB_2c64eab8;
    }
    if (0x10ffff < *puVar3) break;
    iVar1 = func_0x2c64e992(&uStack_18);
    param_3 = puVar3 + 1;
    if (iVar1 == 0) {
      uVar2 = 1;
LAB_2c64eab8:
      *param_5 = puVar3;
      *param_8 = uStack_18;
      return uVar2;
    }
  }
  uVar2 = 2;
  goto LAB_2c64eab8;
}

