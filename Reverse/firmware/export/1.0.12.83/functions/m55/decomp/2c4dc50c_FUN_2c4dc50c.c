/* FUN_2c4dc50c @ 0x2c4dc50c */

undefined4 FUN_2c4dc50c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_2c4dc55c;
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4dc526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*piVar2 + 0x18))(piVar2,param_1,param_2);
    return uVar1;
  }
  FUN_2c4e34f4(0x2ad1,0x17,1);
  FUN_2c4e0504(DAT_2c4dc564,0,0,0,DAT_2c4dc56c,0x17,DAT_2c4dc568,0x1300,DAT_2c4dc560);
  return 0;
}

