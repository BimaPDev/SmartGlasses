/* FUN_2c63fd20 @ 0x2c63fd20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63fd20(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_14;
  
  uStack_14 = *_LAB_2c63fdd8;
  uVar2 = FUN_2c6411ac();
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 != 0) {
    uVar2 = FUN_2c63ed48(param_1,&uStack_28,1);
    uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c63fde0,0x328,_DAT_2c63fde8,_LAB_2c63fde4,uStack_28,uStack_24,uStack_20);
    }
  }
  if ((*_LAB_2c63fdd8 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(0,uVar1,*_LAB_2c63fdd8 ^ uStack_14,0);
}

