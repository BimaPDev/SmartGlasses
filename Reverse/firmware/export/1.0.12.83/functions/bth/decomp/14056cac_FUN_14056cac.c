/* FUN_14056cac @ 0x14056cac */

undefined4 FUN_14056cac(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  
  bVar3 = param_2[1];
  bVar1 = *param_2;
  if (bVar3 == 0x41) {
    iVar4 = FUN_1405b0a8((uint)bVar1,param_4,*(undefined2 *)(param_2 + 2),DAT_14056cf8);
    if (iVar4 == 0) {
      return 0;
    }
    bVar3 = param_2[1];
  }
  else {
    iVar4 = 0x40;
  }
  pbVar2 = (byte *)FUN_14074378(0xe00,param_4,(uint)bVar1 << 8 | 3,4);
  if (pbVar2 != (byte *)0x0) {
    *pbVar2 = bVar1;
    pbVar2[1] = bVar3;
    *(short *)(pbVar2 + 2) = (short)iVar4;
    FUN_140743d0();
  }
  return 0;
}

