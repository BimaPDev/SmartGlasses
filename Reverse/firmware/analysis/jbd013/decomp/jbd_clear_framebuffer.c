/* FUN_2c498000 @ 0x2c498000 */

void FUN_2c498000(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_2c498068;
  if (((*DAT_2c498060 != 1) && (*DAT_2c498060 != 3)) && (*DAT_2c498064 != 1)) {
    *DAT_2c498068 = 1;
    FUN_2c497bb0();
    FUN_2c4975bc(0x97);
    FUN_2c497510(1);
    *puVar1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x142,DAT_2c498078,DAT_2c498074,DAT_2c498070,*DAT_2c498060,*DAT_2c498064,*DAT_2c49806c);
}

