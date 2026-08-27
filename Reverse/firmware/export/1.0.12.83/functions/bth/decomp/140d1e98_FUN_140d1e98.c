/* FUN_140d1e98 @ 0x140d1e98 */

uint FUN_140d1e98(int *param_1,uint param_2,uint param_3)

{
  while( true ) {
    if ((uint)param_1[1] <= param_3) {
      return 0xffffffff;
    }
    if (*(byte *)(*param_1 + param_3) != param_2) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}

