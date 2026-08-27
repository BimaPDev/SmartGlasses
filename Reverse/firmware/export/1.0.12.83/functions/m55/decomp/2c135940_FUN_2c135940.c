/* FUN_2c135940 @ 0x2c135940 */

void FUN_2c135940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar2 = *DAT_2c135984;
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (*DAT_2c135980 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar3 = FUN_2c13583c(param_1,param_2,&uStack_8,*DAT_2c135980,&uStack_8);
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar1 = (undefined4)uVar3;
  }
  if ((*DAT_2c135984 ^ uVar2) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c(uVar1,param_2,*DAT_2c135984 ^ uVar2,0);
}

