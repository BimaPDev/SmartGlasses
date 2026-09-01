/* FUN_10050194 @ 0x10050194 */

void FUN_10050194(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *DAT_100501bc;
  if ((*DAT_100501bc ^ uVar1) != 0) {
    FUN_1013cdc0(param_1,param_1,*DAT_100501bc ^ uVar1,uVar1,param_1,uVar1,param_3);
  }
  FUN_100a0350(DAT_100501c0);
  return;
}

