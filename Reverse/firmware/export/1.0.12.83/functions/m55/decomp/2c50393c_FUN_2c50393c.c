/* FUN_2c50393c @ 0x2c50393c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50393c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  
  uVar1 = lv_mem_alloc(0xd4);
  func_0x2c5046b8(uVar1,*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_2c602de4();
  FUN_2c602df0();
  FUN_2c602f64(uVar1,*(undefined4 *)(param_1 + 4));
  FUN_2c603110(*(undefined4 *)(param_1 + 4));
  FUN_2c602454(*(undefined4 *)(param_1 + 4),_LAB_2c503990,0xd,param_1);
  uVar1 = FUN_2c620f0c(13000,_LAB_2c503994,param_1);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_2c503ed8();
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_DAT_2c503fdc,0x1c,_LAB_2c503fd4,_LAB_2c503fd8,_LAB_2c503fd4,param_4,unaff_r4,
               unaff_r5,unaff_lr);
}

