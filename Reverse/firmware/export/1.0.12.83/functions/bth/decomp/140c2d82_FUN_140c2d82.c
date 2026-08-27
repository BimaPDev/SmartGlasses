/* FUN_140c2d82 @ 0x140c2d82 */

int FUN_140c2d82(int param_1)

{
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
  }
  return param_1;
}

