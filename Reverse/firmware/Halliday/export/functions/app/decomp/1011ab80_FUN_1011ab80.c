/* FUN_1011ab80 @ 0x1011ab80 */

uint FUN_1011ab80(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_1011ab12(param_1 + 0x260,0xfffffffb,param_3,4,param_4);
  }
  else {
    uVar1 = FUN_1011aafc(param_1 + 0x260,4);
  }
  return (uVar1 & 7) >> 2;
}

