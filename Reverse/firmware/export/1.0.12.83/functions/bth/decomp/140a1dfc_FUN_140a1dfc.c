/* FUN_140a1dfc @ 0x140a1dfc */

undefined4 FUN_140a1dfc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_140a1e30;
  if (*DAT_140a1e28 == '\x01') {
    puVar1 = DAT_140a1e30 + -0x4b;
  }
  if ((*DAT_140a1e2c != '\0') && (param_1 != (undefined4 *)0x0)) {
    *param_1 = *puVar1;
    return 0;
  }
  return 0xffffffff;
}

