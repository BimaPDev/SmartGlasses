/* FUN_100fa1e4 @ 0x100fa1e4 */

undefined4 FUN_100fa1e4(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return 6;
  }
  if (param_2 != (undefined4 *)0x0) {
    piVar1 = (int *)(**(code **)(param_1 + 4))(param_1,0xd0);
    if (piVar1 != (int *)0x0) {
      FUN_1011ea48(piVar1 + 4,0,0xc0);
      *piVar1 = param_1;
      piVar1[1] = 2;
      piVar1[2] = 10;
      piVar1[3] = 4;
      piVar1[0x33] = 1;
      *param_2 = piVar1;
      return 0;
    }
    return 0x40;
  }
  return 6;
}

