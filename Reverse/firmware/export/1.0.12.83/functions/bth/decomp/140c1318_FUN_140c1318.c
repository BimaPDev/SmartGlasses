/* FUN_140c1318 @ 0x140c1318 */

undefined4 * FUN_140c1318(undefined4 *param_1)

{
  *param_1 = DAT_140c1334;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  FUN_140c0288(param_1);
  return param_1;
}

