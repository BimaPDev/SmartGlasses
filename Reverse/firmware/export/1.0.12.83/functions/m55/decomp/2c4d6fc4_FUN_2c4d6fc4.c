/* FUN_2c4d6fc4 @ 0x2c4d6fc4 */

undefined4 FUN_2c4d6fc4(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  sbyte *psVar5;
  sbyte *psVar6;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  sbyte *psVar7;
  
  if (param_2 != 0) {
    if (param_1 == 0) {
      return 0;
    }
    iVar13 = 0;
    do {
      pbVar3 = (byte *)(uint)*(byte *)(param_1 + 4 + iVar13 * 8);
      if (pbVar3 < (byte *)0x20) {
        if (pbVar3 != (byte *)0x0) {
          psVar5 = *(sbyte **)(param_1 + iVar13 * 8);
          uVar4 = 0;
          psVar7 = psVar5;
          do {
            psVar6 = psVar7 + 1;
            uVar4 = uVar4 | 1 << *psVar7;
            psVar7 = psVar6;
          } while (psVar5 + (int)pbVar3 != psVar6);
          if (uVar4 != (1 << (int)pbVar3) - 1U) {
            return 0;
          }
        }
      }
      else {
        iVar12 = *(int *)(param_1 + iVar13 * 8);
        pbVar10 = (byte *)0x0;
        pbVar14 = (byte *)(iVar12 + -1);
        do {
          pbVar14 = pbVar14 + 1;
          pbVar11 = (byte *)(uint)*pbVar14;
          if (pbVar3 + -1 < pbVar11) {
            return 0;
          }
          if (pbVar10 < pbVar3 + -1) {
            pbVar8 = pbVar3 + iVar12;
            do {
              pbVar9 = (byte *)(uint)pbVar8[-1];
              bVar1 = pbVar11 == pbVar9;
              if (pbVar8 + (-2 - iVar12) <= pbVar10) break;
              pbVar8 = pbVar8 + -1;
            } while (!bVar1);
            bVar2 = false;
            if (pbVar11 != pbVar9) {
              bVar2 = true;
            }
          }
          else {
            bVar1 = false;
            bVar2 = true;
          }
          pbVar10 = pbVar10 + 1;
        } while ((pbVar10 < pbVar3) && (!bVar1));
        if (!bVar2) {
          return 0;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != param_2);
  }
  return 1;
}

