/* FUN_2c602110 @ 0x2c602110 */

byte FUN_2c602110(undefined4 *param_1,int param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)**(undefined4 **)(param_2 + 4);
    goto LAB_2c602118;
  }
  while( true ) {
    param_1 = (undefined4 *)*param_1;
LAB_2c602118:
    if (param_1 == (undefined4 *)0x0) break;
    if (param_1[4] != 0) {
      *(undefined4 *)(param_2 + 0xc) = 0;
      (*(code *)param_1[4])(param_1,param_2);
      return ~*(byte *)(param_2 + 0x1c) & 1;
    }
  }
  return 1;
}

