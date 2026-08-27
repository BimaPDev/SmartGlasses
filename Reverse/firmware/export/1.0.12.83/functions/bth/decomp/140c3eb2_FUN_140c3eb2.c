/* FUN_140c3eb2 @ 0x140c3eb2 */

uint FUN_140c3eb2(int *param_1,uint param_2,uint param_3)

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

