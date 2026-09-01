/* FUN_1011aba0 @ 0x1011aba0 */

uint FUN_1011aba0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_1011ab12(param_1 + 0x260,0xfffffff7,param_3,8,param_4);
  }
  else {
    uVar1 = FUN_1011aafc(param_1 + 0x260,8);
  }
  return (uVar1 & 0xf) >> 3;
}

