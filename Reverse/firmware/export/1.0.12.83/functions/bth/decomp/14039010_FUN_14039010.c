/* FUN_14039010 @ 0x14039010 */

void FUN_14039010(void)

{
  undefined4 *puVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  puVar1 = DAT_14039074;
  local_c = *DAT_14039068;
  FUN_1402a6e8(4,0x415,DAT_14039070,DAT_1403906c,DAT_14039064);
  local_2c = *puVar1;
  uStack_28 = puVar1[1];
  uStack_24 = puVar1[2];
  uStack_20 = puVar1[3];
  local_1c = puVar1[4];
  uStack_18 = puVar1[5];
  uStack_14 = puVar1[6];
  uStack_10 = puVar1[7];
  FUN_140315b0(&local_2c,0x20);
  if (*DAT_14039068 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

