/* FUN_14075458 @ 0x14075458 */

int FUN_14075458(int param_1,short param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 8);
  *(ushort *)(param_1 + 8) = param_2 + uVar1;
  return param_1 + (uint)*(ushort *)(param_1 + 10) + (uint)uVar1 + 0x10;
}

