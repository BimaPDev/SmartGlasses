/* FUN_2c478604 @ 0x2c478604 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c478604(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  
  uVar1 = FUN_2c48e3b8();
  FUN_2c48e424(uVar1,_LAB_2c478664);
  uVar2 = FUN_2c48de20();
  uVar2 = VectorFloatToSigned(CONCAT44(extraout_s1,uVar2),3);
  FUN_2c48e424(uVar1,_LAB_2c478668);
  uVar1 = FUN_2c48de20();
  uVar1 = VectorFloatToSigned(CONCAT44(extraout_s1_00,uVar1),3);
  FUN_2c4784f4(uVar1);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x385,_LAB_2c478674,_LAB_2c478678,_LAB_2c478670,_LAB_2c47866c,uVar2,uVar1);
}

