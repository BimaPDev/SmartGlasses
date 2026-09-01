/* FUN_1007a430 @ 0x1007a430 */

ushort FUN_1007a430(void)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_r3;
  ushort *puVar6;
  
  puVar2 = DAT_1007a478;
  uVar3 = 0;
  uVar4 = (uint)*(byte *)((int)DAT_1007a478 + 0x31);
  puVar6 = DAT_1007a478;
  for (iVar5 = 0; iVar5 < (int)uVar4; iVar5 = iVar5 + 1) {
    uVar3 = uVar3 + *puVar6;
    puVar6 = puVar6 + 1;
  }
  if (uVar4 == 0) {
    FUN_100a5b78((DAT_1007a480 - DAT_1007a47c) * 0x20 & 0xff00U | 0xfb0011,DAT_1007a488,DAT_1007a484
                 ,DAT_1007a47c,in_r3);
    uVar1 = *puVar2;
  }
  else {
    uVar1 = (ushort)(uVar3 / uVar4);
  }
  return uVar1;
}

