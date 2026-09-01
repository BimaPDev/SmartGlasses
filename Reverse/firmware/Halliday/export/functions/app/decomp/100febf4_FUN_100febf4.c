/* FUN_100febf4 @ 0x100febf4 */

undefined1 * FUN_100febf4(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  int local_1c [2];
  
  uVar7 = (uint)*(ushort *)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 0x10);
  puVar2 = (undefined1 *)FUN_100fb280(param_2,1,0,uVar7 + 1,0,local_1c);
  if (local_1c[0] != 0) {
    return (undefined1 *)0x0;
  }
  puVar5 = puVar2;
  if (uVar7 != 0) {
    pbVar3 = puVar2 + -1;
    uVar4 = 0;
    do {
      while( true ) {
        bVar1 = *pbVar6;
        if (bVar1 == 0) goto LAB_100fec36;
        uVar4 = uVar4 + 1;
        if (bVar1 - 0x20 < 0x60) break;
        pbVar3 = pbVar3 + 1;
        *pbVar3 = 0x3f;
        pbVar6 = pbVar6 + 1;
        if (uVar7 == uVar4) goto LAB_100fec36;
      }
      pbVar3 = pbVar3 + 1;
      *pbVar3 = bVar1;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != uVar4);
LAB_100fec36:
    puVar5 = puVar2 + uVar4;
  }
  *puVar5 = 0;
  return puVar2;
}

