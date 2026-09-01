/* FUN_100b92f0 @ 0x100b92f0 */

bool FUN_100b92f0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_100b9304;
  uVar2 = *(uint *)(DAT_100b9304 + 0xc);
  *param_1 = uVar2;
  return uVar2 < *(uint *)(iVar1 + 0x10);
}

