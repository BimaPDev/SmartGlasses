/* FUN_2c62e500 @ 0x2c62e500 */

int FUN_2c62e500(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_2 - param_1) + 1;
  uVar2 = *DAT_2c62e524 ^ *DAT_2c62e524 << 0xd;
  uVar2 = uVar2 ^ uVar2 >> 0x11;
  uVar2 = uVar2 ^ uVar2 << 5;
  *DAT_2c62e524 = uVar2;
  return param_1 + (uVar2 - uVar1 * (uVar2 / uVar1));
}

