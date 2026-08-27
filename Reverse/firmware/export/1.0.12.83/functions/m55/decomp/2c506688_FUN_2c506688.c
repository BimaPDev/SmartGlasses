/* FUN_2c506688 @ 0x2c506688 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c506688(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c602618(param_2);
  switch(uVar1) {
  case 0xd2:
    FUN_2c506590(param_1);
    return 1;
  case 0xd3:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c506714,0xd4,_LAB_2c506710,_LAB_2c506718);
  case 0xd4:
  case 0xe3:
    (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c506714,0xdc,_LAB_2c506710,_LAB_2c50670c);
  }
}

