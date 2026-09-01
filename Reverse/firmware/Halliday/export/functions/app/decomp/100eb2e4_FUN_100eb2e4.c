/* FUN_100eb2e4 @ 0x100eb2e4 */

void FUN_100eb2e4(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_10138fdc();
  *DAT_100eb304 = (((uVar1 + param_1 * param_2 * 2) - 1) / uVar1) * uVar1;
  return;
}

