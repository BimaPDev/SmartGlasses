/* FUN_100a3508 @ 0x100a3508 */

undefined4 FUN_100a3508(undefined4 *param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar3;
  
  iVar6 = 0;
  iVar8 = 0;
  do {
    iVar5 = iVar6 * 0x58;
    iVar6 = iVar6 + 1;
    if ((*(byte *)(*DAT_100a3560 + iVar5) & 1) == 0) {
      iVar8 = *DAT_100a3560 + iVar5;
    }
  } while (iVar6 != 4);
  if (iVar8 == 0) {
    uVar4 = 0xfffffff4;
  }
  else {
    pbVar1 = (byte *)FUN_1011ea48(iVar8,0,0x58);
    puVar2 = param_1;
    pbVar7 = pbVar1;
    do {
      pbVar7 = pbVar7 + 4;
      puVar3 = puVar2 + 1;
      *(undefined4 *)pbVar7 = *puVar2;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + 7);
    uVar4 = 0;
    *pbVar1 = *pbVar1 | 1;
  }
  return uVar4;
}

