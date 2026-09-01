/* FUN_10015208 @ 0x10015208 */

void FUN_10015208(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  iVar3 = *DAT_10015280;
  if (*param_1 != 0) goto LAB_1001522c;
  do {
    bVar6 = false;
    while( true ) {
      if (*DAT_10015280 == iVar3) {
        return;
      }
      FUN_1013cdc0(bVar6);
LAB_1001522c:
      uVar1 = FUN_1011ea10();
      uVar2 = FUN_1011ea10(param_2);
      if (uVar1 < uVar2) break;
      pbVar4 = param_1 + (uVar1 - uVar2);
      for (uVar5 = 0; uVar1 = FUN_1011ea10(param_2), param_1 = pbVar4, uVar5 < uVar1;
          uVar5 = uVar5 + 1) {
        uVar1 = (uint)*(byte *)(param_2 + uVar5);
        param_1 = pbVar4 + 1;
        uVar2 = (uint)*pbVar4;
        if (uVar1 - 0x61 < 0x1a) {
          uVar1 = uVar1 - 0x20;
        }
        if (uVar2 - 0x61 < 0x1a) {
          uVar2 = uVar2 - 0x20;
        }
        if (uVar1 != uVar2) break;
        pbVar4 = param_1;
      }
      uVar1 = FUN_1011ea10(param_2);
      bVar6 = uVar1 == uVar5;
    }
  } while( true );
}

