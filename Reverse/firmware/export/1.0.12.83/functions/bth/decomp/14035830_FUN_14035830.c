/* FUN_14035830 @ 0x14035830 */

void FUN_14035830(ushort param_1)

{
  ushort *puVar1;
  ushort uVar2;
  
  puVar1 = DAT_1403584c;
  uVar2 = param_1 & 0x1ff | *DAT_14035848 & 0xfe00;
  *DAT_14035848 = uVar2;
  *puVar1 = uVar2;
  FUN_14030824();
  return;
}

