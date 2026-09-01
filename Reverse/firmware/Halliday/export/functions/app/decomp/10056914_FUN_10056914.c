/* FUN_10056914 @ 0x10056914 */

undefined4 FUN_10056914(void)

{
  uint *puVar1;
  
  puVar1 = DAT_10056950;
  *DAT_10056950 = *DAT_10056950 & 0xfffffff7;
  if ((((-1 < (int)(*puVar1 << 0x1c)) && (-1 < *DAT_10056954 << 0x1c)) &&
      (-1 < *DAT_10056958 << 0x1c)) && ((*DAT_1005695c & 8) == 0)) {
    FUN_10055c2c(0x10);
    return 0;
  }
  return 0xfffffff5;
}

