/* FUN_1011e2c0 @ 0x1011e2c0 */

undefined4 FUN_1011e2c0(undefined1 *param_1,int param_2,undefined1 *param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = FUN_1005fb14(param_2);
    FUN_1011ea40(param_1,param_3,param_5 * iVar1);
  }
  else {
    if ((param_2 != 1) || ((param_4 != 8 && (param_4 != 0x80)))) {
      return 0xffffffa8;
    }
    while( true ) {
      if (param_5 == 0) break;
      param_5 = param_5 + -1;
      *param_1 = param_3[2];
      param_1[1] = param_3[1];
      param_1[2] = *param_3;
      param_1 = param_1 + 3;
      param_3 = param_3 + 4;
    }
  }
  return 0;
}

