/* FUN_2c4d3c50 @ 0x2c4d3c50 */

void FUN_2c4d3c50(char *param_1,undefined4 param_2)

{
  if (*param_1 != '\x02') {
    return;
  }
  if (param_1[0x6e] != '\0') {
    return;
  }
  FUN_2c4d835c(param_1 + 0x80,param_1 + 0x3c,param_2);
  return;
}

