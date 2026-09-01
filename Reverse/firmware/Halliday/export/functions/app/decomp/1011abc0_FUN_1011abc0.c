/* FUN_1011abc0 @ 0x1011abc0 */

uint FUN_1011abc0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_1011ab12(param_1 + 0x260,0xffffffbf,param_3,0x40,param_4);
  }
  else {
    uVar1 = FUN_1011aafc(param_1 + 0x260,0x40);
  }
  return (uVar1 & 0x7f) >> 6;
}

