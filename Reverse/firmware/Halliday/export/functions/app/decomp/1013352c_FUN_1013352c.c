/* FUN_1013352c @ 0x1013352c */

bool FUN_1013352c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << (param_2 & 0xff);
  uVar2 = *param_1;
  *param_1 = uVar2 & ~uVar1;
  return (uVar2 & uVar1) != 0;
}

