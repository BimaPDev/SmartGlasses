/* FUN_1007cae0 @ 0x1007cae0 */

void FUN_1007cae0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  FUN_1007c4fc();
  iVar2 = DAT_1007cb0c;
  pbVar1 = (byte *)(DAT_1007cb0c + 0x13c);
  *(short *)(DAT_1007cb0c + 0x15c) = (short)((uint)(param_1 * 1000) / 200);
  *(byte *)(iVar2 + 0x13c) = *pbVar1 | 8;
  return;
}

