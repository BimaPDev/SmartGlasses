/* FUN_140be020 @ 0x140be020 */

int FUN_140be020(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  pbVar4 = DAT_140be2d4;
  if ((param_2 - 1 < 0x7f) && (param_1 != 0)) {
    FUN_140e5658(DAT_140be2d4,0,0x80);
    FUN_140e5278(pbVar4,param_1,param_2);
    iVar5 = FUN_140dd3a4(pbVar4);
    uVar3 = DAT_140be2cc;
    pbVar6 = pbVar4 + iVar5;
    pbVar13 = pbVar4;
    do {
      pbVar12 = pbVar13;
      if (pbVar6 == pbVar12) goto LAB_140be0a2;
      uVar11 = *pbVar12 - 9 & 0xff;
    } while ((uVar11 < 0x18) && (pbVar13 = pbVar12 + 1, (int)((DAT_140be2cc >> uVar11) << 0x1f) < 0)
            );
    while (pbVar12 != pbVar6) {
      uVar11 = (int)(char)*pbVar6 - 9U & 0xff;
      if ((0x17 < uVar11) || (uVar11 = ~(uVar3 >> uVar11), (int)(uVar11 << 0x1f) < 0)) break;
      *pbVar6 = (byte)uVar11 & 1;
      pbVar6 = pbVar6 + -1;
    }
LAB_140be0a2:
    uVar3 = DAT_140be2cc;
    iVar5 = 0;
    do {
      puVar7 = (undefined1 *)FUN_140dc4fe(pbVar12,0x3b);
      if (puVar7 == (undefined1 *)0x0) {
        uVar11 = FUN_140dd3a4(pbVar12);
        if (uVar11 == 0) {
          return iVar5;
        }
LAB_140be150:
        iVar5 = FUN_140dd42a(pbVar12,DAT_140be2d0);
        if (iVar5 == 0) {
          iVar5 = FUN_140bdfd0(pbVar12,uVar11,param_3);
        }
        else if (uVar11 - 1 < 0x7f) {
          FUN_140e5658(DAT_140be2d4,0,0x80);
          FUN_140e5278(DAT_140be2d4,pbVar12,uVar11);
          iVar5 = FUN_140dd3a4(DAT_140be2d4);
          pbVar13 = pbVar4 + iVar5;
          pbVar12 = DAT_140be2d4;
          pbVar6 = pbVar4;
          do {
            pbVar2 = pbVar12;
            uVar1 = DAT_140be2d0;
            if (pbVar13 == pbVar6) goto LAB_140be1b6;
            pbVar6 = pbVar2 + 1;
            uVar10 = *pbVar2 - 9 & 0xff;
          } while ((uVar10 < 0x18) && (pbVar12 = pbVar6, (int)((uVar3 >> uVar10) << 0x1f) < 0));
          while (pbVar6 = pbVar2, uVar1 = DAT_140be2d0, pbVar13 != pbVar2) {
            uVar10 = (int)(char)*pbVar13 - 9U & 0xff;
            if ((0x17 < uVar10) || (uVar10 = ~(uVar3 >> uVar10), (int)(uVar10 << 0x1f) < 0)) break;
            *pbVar13 = (byte)uVar10 & 1;
            pbVar13 = pbVar13 + -1;
          }
LAB_140be1b6:
          do {
            puVar9 = (undefined1 *)FUN_140dd42a(pbVar6,uVar1);
            if (puVar9 == (undefined1 *)0x0) {
              iVar5 = FUN_140dd3a4(pbVar6);
              if (iVar5 != 0) {
                iVar5 = FUN_140bdfd0(pbVar6,iVar5,param_3);
                if (iVar5 == 0) {
                  iVar5 = 0;
                }
                goto joined_r0x140be21e;
              }
              break;
            }
            *puVar9 = 0;
            iVar5 = FUN_140dd3a4(pbVar6);
            if (iVar5 == 0) {
              pbVar12 = puVar9 + 2;
              iVar5 = FUN_140dd3a4(pbVar12);
              pbVar13 = pbVar12 + iVar5;
              if (pbVar12 != pbVar13) goto LAB_140be1ec;
LAB_140be29c:
              pbVar6 = puVar9 + 2;
            }
            else {
              iVar5 = FUN_140bdfd0(pbVar6,iVar5,param_3);
              if (iVar5 != 0) goto joined_r0x140be21e;
              pbVar12 = puVar9 + 2;
              iVar5 = FUN_140dd3a4(pbVar12);
              pbVar13 = pbVar12 + iVar5;
              if (pbVar12 == pbVar13) goto LAB_140be29c;
LAB_140be1ec:
              do {
                pbVar6 = pbVar12 + 1;
                uVar10 = *pbVar12 - 9 & 0xff;
                if ((0x17 < uVar10) || (-1 < (int)((uVar3 >> uVar10) << 0x1f))) goto LAB_140be1fe;
                pbVar12 = pbVar6;
              } while (pbVar13 != pbVar6);
            }
LAB_140be212:
          } while ((uint)((int)pbVar6 - (int)pbVar4) < uVar11);
          iVar5 = 0;
        }
        else {
          iVar5 = -1;
        }
joined_r0x140be21e:
        if (puVar7 == (undefined1 *)0x0) {
          return iVar5;
        }
        pbVar12 = puVar7 + 1;
        iVar8 = FUN_140dd3a4(pbVar12);
        pbVar6 = pbVar12 + iVar8;
        if (pbVar12 != pbVar6) goto LAB_140be0e2;
LAB_140be230:
        pbVar12 = puVar7 + 1;
LAB_140be0aa:
        uVar11 = (int)pbVar12 - (int)pbVar4;
      }
      else {
        *puVar7 = 0;
        uVar11 = FUN_140dd3a4(pbVar12);
        if (uVar11 != 0) goto LAB_140be150;
        pbVar12 = puVar7 + 1;
        iVar8 = FUN_140dd3a4(pbVar12);
        pbVar6 = pbVar12 + iVar8;
        if (pbVar12 == pbVar6) goto LAB_140be230;
LAB_140be0e2:
        do {
          pbVar13 = pbVar12 + 1;
          uVar11 = *pbVar12 - 9 & 0xff;
          if ((0x17 < uVar11) || (-1 < (int)((uVar3 >> uVar11) << 0x1f))) goto joined_r0x140be0f6;
          pbVar12 = pbVar13;
        } while (pbVar6 != pbVar13);
        uVar11 = (int)pbVar13 - (int)pbVar4;
      }
    } while (uVar11 < param_2);
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
LAB_140be1fe:
  pbVar6 = pbVar12;
  if (pbVar13 == pbVar12) goto LAB_140be212;
  uVar10 = (int)(char)*pbVar13 - 9U & 0xff;
  if ((0x17 < uVar10) || (uVar10 = ~(uVar3 >> uVar10), (int)(uVar10 << 0x1f) < 0))
  goto LAB_140be212;
  *pbVar13 = (byte)uVar10 & 1;
  pbVar13 = pbVar13 + -1;
  goto LAB_140be1fe;
joined_r0x140be0f6:
  if (pbVar6 == pbVar12) goto LAB_140be0aa;
  uVar11 = (int)(char)*pbVar6 - 9U & 0xff;
  if ((0x17 < uVar11) || (uVar11 = ~(uVar3 >> uVar11), (int)(uVar11 << 0x1f) < 0))
  goto LAB_140be0aa;
  *pbVar6 = (byte)uVar11 & 1;
  pbVar6 = pbVar6 + -1;
  goto joined_r0x140be0f6;
}

