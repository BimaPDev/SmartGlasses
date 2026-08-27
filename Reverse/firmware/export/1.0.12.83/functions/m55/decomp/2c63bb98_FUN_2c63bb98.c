/* FUN_2c63bb98 @ 0x2c63bb98 */

undefined4 FUN_2c63bb98(uint param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_2c63bbec;
  puVar1 = DAT_2c63bbe8;
  if (-1 < ((int)(uint)*DAT_2c63bbe8 >> (param_1 & 0xff)) << 0x1f) {
    FUN_2c644044(*DAT_2c63bbec,0xffffffff);
    uVar3 = *puVar2;
    *puVar1 = (ushort)(1 << (param_1 & 0xff)) | *puVar1;
    FUN_2c644080(uVar3);
    FUN_2c63b0a8();
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x22e,DAT_2c63bbf8,DAT_2c63bbf4,DAT_2c63bbf0);
}

