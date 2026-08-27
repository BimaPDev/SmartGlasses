/* FUN_2c4b8394 @ 0x2c4b8394 */

undefined4 FUN_2c4b8394(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(DAT_2c4b83b4 + 0x80) = *(uint *)(DAT_2c4b83b4 + 0x80) & 0xfffffffe;
    return 0;
  }
  FUN_2c4b82d8();
  return 0;
}

