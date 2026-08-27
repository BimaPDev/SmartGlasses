/* FUN_2c4f67d8 @ 0x2c4f67d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f67d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if ((code *)*param_4 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)*param_4)(1,param_2,0);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x166,_LAB_2c4f683c,_LAB_2c4f6838,_LAB_2c4f6834,uVar1);
}

