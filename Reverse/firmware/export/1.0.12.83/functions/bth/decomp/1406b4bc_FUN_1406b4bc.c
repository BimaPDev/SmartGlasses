/* FUN_1406b4bc @ 0x1406b4bc */

void FUN_1406b4bc(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0x1d) {
    uVar1 = 0x14;
  }
  else if (param_2 == 0x23) {
    uVar1 = 0xc;
  }
  else {
    if (param_2 != 0x1b) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1406b504,0x1bb,DAT_1406b508);
    }
    uVar1 = 4;
  }
  FUN_1406cd54(param_1,uVar1,0x20,DAT_1406b50c,param_4);
  *param_3 = DAT_1406b510;
  return;
}

