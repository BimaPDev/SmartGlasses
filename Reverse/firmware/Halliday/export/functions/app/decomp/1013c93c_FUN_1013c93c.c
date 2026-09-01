/* FUN_1013c93c @ 0x1013c93c */

uint * FUN_1013c93c(uint *param_1,int param_2)

{
  if (param_1 != (uint *)0x0) {
    if (((*param_1 & 3) != 0) && (param_1 = (uint *)param_1[1], param_2 != 0)) {
      FUN_1013cfd4();
    }
  }
  return param_1;
}

