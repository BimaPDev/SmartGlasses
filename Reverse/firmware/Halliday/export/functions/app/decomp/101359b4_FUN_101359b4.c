/* FUN_101359b4 @ 0x101359b4 */

bool FUN_101359b4(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << (param_2 & 0xff);
  uVar2 = *param_1;
  *param_1 = uVar2 & ~uVar1;
  return (uVar2 & uVar1) != 0;
}

