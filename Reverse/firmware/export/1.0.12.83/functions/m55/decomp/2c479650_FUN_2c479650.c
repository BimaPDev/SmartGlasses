/* FUN_2c479650 @ 0x2c479650 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c479650(void)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_r3;
  byte *pbVar6;
  int iVar7;
  
  iVar5 = _LAB_2c4796fc;
  iVar4 = _LAB_2c4796f0;
  if (*(char *)(_LAB_2c4796f0 + 0x617) != '\0') {
    pbVar6 = (byte *)(_LAB_2c4796f0 + 0x517);
    do {
      pbVar6 = pbVar6 + 1;
      if ((ushort)*pbVar6 == *(ushort *)(_LAB_2c4796f0 + 0x204e)) {
        FUN_2c6741e8(0x711,_LAB_2c4796f8,_LAB_2c4796f4,pbVar6,in_r3);
        return 0;
      }
    } while (pbVar6 != (byte *)(_LAB_2c4796f0 + 0x518 +
                               (uint)(byte)(*(char *)(_LAB_2c4796f0 + 0x617) - 1)));
  }
  iVar7 = *(int *)(_LAB_2c4796f0 + 0x50c);
  if (iVar7 + (uint)*(ushort *)(_LAB_2c4796fc + 0xe4c) < 0xc351) {
    FUN_2c674668(_LAB_2c479700 + iVar7,_LAB_2c4796fc + 0xc4b);
    bVar1 = *(byte *)(iVar4 + 0x617);
    uVar2 = *(undefined2 *)(iVar5 + 0x104e);
    *(byte *)(iVar4 + 0x617) = bVar1 + 1;
    uVar3 = *(ushort *)(iVar5 + 0xe4c);
    *(char *)(iVar5 + (uint)bVar1 + -0xae8) = (char)uVar2;
    *(uint *)(iVar4 + 0x50c) = *(int *)(iVar4 + 0x50c) + (uint)uVar3;
    return 1;
  }
  FUN_2c6741e8(0x711,_LAB_2c479704,_LAB_2c4796f4,iVar7,in_r3);
  return 0;
}

