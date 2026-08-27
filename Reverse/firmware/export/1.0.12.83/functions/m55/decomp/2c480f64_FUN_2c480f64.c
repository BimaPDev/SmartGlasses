/* FUN_2c480f64 @ 0x2c480f64 */

void FUN_2c480f64(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*DAT_2c480fa8;
  uVar1 = DAT_2c480fc0;
  if (uVar2 < 5) {
    uVar1 = *(undefined4 *)(DAT_2c480fac + uVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x152,DAT_2c480fbc,DAT_2c480fb4,DAT_2c480fb0,DAT_2c480fb8,uVar2,uVar1,param_1,
        *(undefined4 *)(DAT_2c480fac + param_1 * 4));
}

