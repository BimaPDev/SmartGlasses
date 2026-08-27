/* FUN_2c64c9d6 @ 0x2c64c9d6 */

undefined4 FUN_2c64c9d6(int *param_1)

{
  code *pcVar1;
  
  if (*param_1 << 0x1f < 0) {
    return 0;
  }
  if (*(char *)((int)param_1 + 1) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x2c64c9e0);
    (*pcVar1)();
  }
  *(undefined1 *)((int)param_1 + 1) = 1;
  return 1;
}

