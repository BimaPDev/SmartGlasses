/* FUN_2c650d2e @ 0x2c650d2e */

uint FUN_2c650d2e(int *param_1,uint param_2,uint param_3)

{
  while( true ) {
    if (*(uint *)(*param_1 + -0xc) <= param_3) {
      return 0xffffffff;
    }
    if (*(byte *)(*param_1 + param_3) != param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}

