/* FUN_2c48fcac @ 0x2c48fcac */

bool FUN_2c48fcac(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_2c48fcc4 + param_1 * 0x18;
  return *(uint *)(iVar1 + 8) <= *(uint *)(iVar1 + 0x14);
}

