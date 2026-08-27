/* FUN_2c4d3c68 @ 0x2c4d3c68 */

undefined4 FUN_2c4d3c68(char *param_1)

{
  uint uVar1;
  
  if (*param_1 != '\x02') {
    return 0;
  }
  if ((param_1[0x7c] != '\0') && (param_1[0x6e] == '\0')) {
    FUN_2c4d2320();
  }
  if (param_1[0x6e] != '\0') {
    return 0;
  }
  uVar1 = FUN_2c4d8838(param_1 + 0x80);
  if (*(ushort *)(param_1 + 200) == uVar1) {
    return 0;
  }
  return 0x403;
}

