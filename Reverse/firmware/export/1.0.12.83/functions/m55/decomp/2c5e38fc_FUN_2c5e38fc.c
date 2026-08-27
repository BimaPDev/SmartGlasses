/* FUN_2c5e38fc @ 0x2c5e38fc */

undefined4 FUN_2c5e38fc(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (((param_2[1] != 0) && (*param_2 != 0)) && (param_2[2] != 0)) {
    uVar1 = FUN_2c5e3cd8();
    *param_1 = uVar1;
    uVar1 = FUN_2c5e3cd8(param_2[1]);
    param_1[1] = uVar1;
    param_1[2] = param_2[2];
    *(char *)(param_1 + 3) = (char)param_2[3];
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5e394c,0xde,DAT_2c5e3948,DAT_2c5e3944);
}

