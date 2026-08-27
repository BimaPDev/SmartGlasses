/* FUN_2c507484 @ 0x2c507484 */

void FUN_2c507484(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 1) {
    FUN_2c606dc0(*(undefined4 *)(param_1 + 0x38),0xff00ff00,0);
    FUN_2c606db4(*(undefined4 *)(param_1 + 0x38),1,0);
    FUN_2c606d6c(*(undefined4 *)(param_1 + 0x38),0x19,0,param_4);
    return;
  }
  if (param_2 != 2) {
    return;
  }
  FUN_2c606dc0(*(undefined4 *)(param_1 + 0x5c),0xff00ff00,0);
  FUN_2c606db4(*(undefined4 *)(param_1 + 0x5c),1,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x5c),0x19,0,param_4);
  return;
}

