/* FUN_2c13f50c @ 0x2c13f50c */

undefined4 FUN_2c13f50c(uint *param_1,uint param_2)

{
  if (((param_1 != (uint *)0x0) && ((((uint)param_1 | param_2) & 7) == 0)) && (0x17 < param_2)) {
    *param_1 = param_2;
    param_1[2] = (param_2 - 8) + (int)param_1;
    param_1[1] = 0x10;
    *(undefined4 *)((param_2 - 8) + (int)param_1) = 0;
    *(undefined4 *)(param_1[2] + 4) = 0x10;
    param_1[3] = 0;
    FUN_2c13ed9c(param_1,param_2,1);
    return 1;
  }
  FUN_2c13ed9c(param_1,param_2,0);
  return 0;
}

