/* FUN_140018b8 @ 0x140018b8 */

void FUN_140018b8(undefined4 param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = DAT_140018d4;
  *(uint *)(DAT_140018d4 + 0x20) = *(uint *)(DAT_140018d4 + 0x20) & 0xffffff00 | (uint)param_2;
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xffffff | (uint)param_2 << 0x18;
  return;
}

