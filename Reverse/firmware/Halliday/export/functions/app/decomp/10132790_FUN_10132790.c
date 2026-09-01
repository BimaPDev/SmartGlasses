/* FUN_10132790 @ 0x10132790 */

int FUN_10132790(int *param_1)

{
  return ((uint)*(ushort *)((int)param_1 + 6) - (uint)*(ushort *)(param_1 + 1)) -
         (*param_1 - param_1[2]);
}

