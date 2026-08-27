/* FUN_2c4e6744 @ 0x2c4e6744 */

undefined4 FUN_2c4e6744(uint param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_1 < 3) {
    *(undefined4 *)(param_2 + 4) = 0x2000;
    return 0;
  }
  puVar1 = (undefined4 *)FUN_2c6685e0();
  *puVar1 = 9;
  return 0xffffffff;
}

