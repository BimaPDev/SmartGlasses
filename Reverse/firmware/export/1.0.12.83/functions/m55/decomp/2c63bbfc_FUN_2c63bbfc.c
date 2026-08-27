/* FUN_2c63bbfc @ 0x2c63bbfc */

undefined4 FUN_2c63bbfc(uint param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_2c63bc54;
  puVar1 = DAT_2c63bc50;
  if (((int)(uint)*DAT_2c63bc50 >> (param_1 & 0xff) & 1U) != 0) {
    FUN_2c644044(*DAT_2c63bc54,0xffffffff);
    uVar3 = *puVar2;
    *puVar1 = *puVar1 & ~(ushort)(1 << (param_1 & 0xff));
    FUN_2c644080(uVar3);
    FUN_2c63b0a8();
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x23e,DAT_2c63bc60,DAT_2c63bc5c,DAT_2c63bc58);
}

