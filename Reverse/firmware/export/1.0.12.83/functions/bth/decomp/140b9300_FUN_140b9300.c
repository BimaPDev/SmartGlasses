/* FUN_140b9300 @ 0x140b9300 */

undefined1 FUN_140b9300(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  sbyte *psVar4;
  sbyte *psVar5;
  byte *pbVar7;
  undefined1 uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint local_2c;
  sbyte *psVar6;
  
  if (param_2 == 0) {
    uVar8 = 1;
  }
  else {
    if (param_1 != 0) {
      iVar13 = 0;
      do {
        uVar12 = (uint)*(byte *)(param_1 + 4 + iVar13 * 8);
        if (uVar12 < 0x20) {
          if (uVar12 != 0) {
            uVar2 = 0;
            psVar4 = *(sbyte **)(param_1 + iVar13 * 8);
            psVar6 = psVar4;
            do {
              psVar5 = psVar6 + 1;
              uVar2 = uVar2 | 1 << *psVar6;
              psVar6 = psVar5;
            } while (psVar4 + uVar12 != psVar5);
            if (uVar2 != (1 << uVar12) - 1U) {
              return 0;
            }
          }
        }
        else {
          pbVar11 = (byte *)0x0;
          iVar10 = *(int *)(param_1 + iVar13 * 8);
          local_2c = 1;
          pbVar15 = (byte *)(uVar12 - 1);
          pbVar14 = (byte *)(iVar10 + -1);
          while( true ) {
            pbVar14 = pbVar14 + 1;
            pbVar3 = (byte *)(uint)*pbVar14;
            if (pbVar11 < pbVar15) {
              if (pbVar15 < pbVar3) {
                return 0;
              }
              pbVar7 = (byte *)(iVar10 + uVar12);
              do {
                if ((byte *)(uint)pbVar7[-1] == pbVar3) {
                  return 0;
                }
                pbVar9 = pbVar7 + (-2 - iVar10);
                pbVar7 = pbVar7 + -1;
              } while (pbVar11 < pbVar9);
              bVar1 = true;
            }
            else {
              bVar1 = pbVar3 <= pbVar15;
            }
            if (uVar12 <= local_2c) break;
            local_2c = local_2c + 1;
            pbVar11 = pbVar11 + 1;
            if (!bVar1) {
              return 0;
            }
          }
          if (!bVar1) {
            return 0;
          }
        }
        iVar13 = iVar13 + 1;
        if (iVar13 == param_2) {
          return 1;
        }
      } while( true );
    }
    uVar8 = 0;
  }
  return uVar8;
}

