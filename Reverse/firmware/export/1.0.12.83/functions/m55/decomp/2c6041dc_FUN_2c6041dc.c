/* FUN_2c6041dc @ 0x2c6041dc */

undefined4 FUN_2c6041dc(int param_1,uint param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) &&
     (((-1 < (int)param_2 || (param_2 = param_2 + piVar1[1], -1 < (int)param_2)) &&
      (param_2 < (uint)piVar1[1])))) {
    return *(undefined4 *)(*piVar1 + param_2 * 4);
  }
  return 0;
}

