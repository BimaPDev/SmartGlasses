/* FUN_10069234 @ 0x10069234 */

undefined4 FUN_10069234(undefined4 param_1,byte *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = DAT_10069250;
  pbVar2 = param_2 + param_3;
  for (; param_2 != pbVar2; param_2 = param_2 + 1) {
    *(ushort *)(iVar1 + 0x24) = (ushort)*param_2 + *(short *)(iVar1 + 0x24);
  }
  return 0;
}

