/* FUN_2c647cd0 @ 0x2c647cd0 */

int FUN_2c647cd0(int param_1,uint param_2,undefined4 param_3)

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
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  
  pbVar4 = DAT_2c647f84;
  if ((param_2 - 1 < 0x7f) && (param_1 != 0)) {
    FUN_2c674268(DAT_2c647f84,param_1 == 0,0x80);
    FUN_2c674668(pbVar4,param_1,param_2);
    iVar5 = FUN_2c66c4ec(pbVar4);
    uVar3 = DAT_2c647f7c;
    pbVar6 = pbVar4 + iVar5;
    pbVar14 = pbVar4;
    do {
      pbVar13 = pbVar14;
      if (pbVar6 == pbVar13) goto LAB_2c647d58;
      uVar11 = *pbVar13 - 9 & 0xff;
    } while ((uVar11 < 0x18) && (pbVar14 = pbVar13 + 1, (int)((DAT_2c647f7c >> uVar11) << 0x1f) < 0)
            );
    while (pbVar6 != pbVar13) {
      uVar12 = (int)(char)*pbVar6 - 9U & 0xff;
      uVar11 = ~(uVar3 >> uVar12);
      if ((0x17 < uVar12) || ((int)(uVar11 << 0x1f) < 0)) break;
      *pbVar6 = (byte)uVar11 & 1;
      pbVar6 = pbVar6 + -1;
    }
LAB_2c647d58:
    uVar3 = DAT_2c647f7c;
    iVar5 = 0;
    do {
      puVar7 = (undefined1 *)FUN_2c66b60a(pbVar13,0x3b);
      if (puVar7 == (undefined1 *)0x0) {
        uVar11 = FUN_2c66c4ec(pbVar13);
        if (uVar11 == 0) {
          return iVar5;
        }
LAB_2c647e06:
        iVar5 = FUN_2c66c5e0(pbVar13,DAT_2c647f80);
        if (iVar5 == 0) {
          iVar5 = FUN_2c647c80(pbVar13,uVar11,param_3);
        }
        else {
          if (uVar11 - 1 < 0x7f) {
            FUN_2c674268(DAT_2c647f84,0,0x80);
            FUN_2c674668(DAT_2c647f84,pbVar13,uVar11);
            iVar5 = FUN_2c66c4ec(DAT_2c647f84);
            pbVar14 = pbVar4 + iVar5;
            pbVar13 = DAT_2c647f84;
            pbVar6 = pbVar4;
            do {
              pbVar2 = pbVar13;
              uVar1 = DAT_2c647f80;
              if (pbVar14 == pbVar6) goto LAB_2c647e7a;
              pbVar6 = pbVar2 + 1;
              uVar12 = *pbVar2 - 9 & 0xff;
            } while ((uVar12 < 0x18) && (pbVar13 = pbVar6, (int)((uVar3 >> uVar12) << 0x1f) < 0));
            while (pbVar6 = pbVar2, uVar1 = DAT_2c647f80, pbVar14 != pbVar2) {
              uVar12 = (int)(char)*pbVar14 - 9U & 0xff;
              uVar10 = ~(uVar3 >> uVar12);
              if ((0x17 < uVar12) || ((int)(uVar10 << 0x1f) < 0)) break;
              *pbVar14 = (byte)uVar10 & 1;
              pbVar14 = pbVar14 + -1;
            }
LAB_2c647e7a:
            do {
              puVar9 = (undefined1 *)FUN_2c66c5e0(pbVar6,uVar1);
              if (puVar9 == (undefined1 *)0x0) {
                iVar5 = FUN_2c66c4ec(pbVar6);
                if ((iVar5 != 0) && (iVar5 = FUN_2c647c80(pbVar6,iVar5,param_3), iVar5 != 0))
                goto LAB_2c647f1e;
                break;
              }
              *puVar9 = 0;
              iVar5 = FUN_2c66c4ec(pbVar6);
              if (iVar5 == 0) {
                pbVar13 = puVar9 + 2;
                iVar5 = FUN_2c66c4ec(pbVar13);
                pbVar14 = pbVar13 + iVar5;
                if (pbVar13 == pbVar14) goto LAB_2c647f44;
LAB_2c647ea4:
                do {
                  pbVar6 = pbVar13 + 1;
                  uVar12 = *pbVar13 - 9 & 0xff;
                  if ((0x17 < uVar12) || (-1 < (int)((uVar3 >> uVar12) << 0x1f)))
                  goto joined_r0x2c647eb8;
                  pbVar13 = pbVar6;
                } while (pbVar14 != pbVar6);
              }
              else {
                iVar5 = FUN_2c647c80(pbVar6,iVar5,param_3);
                if (iVar5 != 0) goto LAB_2c647f1e;
                pbVar13 = puVar9 + 2;
                iVar5 = FUN_2c66c4ec(pbVar13);
                pbVar14 = pbVar13 + iVar5;
                if (pbVar13 != pbVar14) goto LAB_2c647ea4;
LAB_2c647f44:
                pbVar6 = puVar9 + 2;
              }
LAB_2c647e72:
            } while ((uint)((int)pbVar6 - (int)pbVar4) < uVar11);
            iVar5 = 0;
LAB_2c647f1e:
            if (puVar7 == (undefined1 *)0x0) {
              return iVar5;
            }
            goto LAB_2c647d88;
          }
          iVar5 = -1;
        }
        if (puVar7 == (undefined1 *)0x0) {
          return iVar5;
        }
      }
      else {
        *puVar7 = 0;
        uVar11 = FUN_2c66c4ec(pbVar13);
        if (uVar11 != 0) goto LAB_2c647e06;
      }
LAB_2c647d88:
      pbVar13 = puVar7 + 1;
      iVar8 = FUN_2c66c4ec(pbVar13);
      pbVar6 = pbVar13 + iVar8;
      if (pbVar13 == pbVar6) {
LAB_2c647d60:
        uVar11 = (int)pbVar13 - (int)pbVar4;
      }
      else {
        do {
          pbVar14 = pbVar13 + 1;
          uVar11 = *pbVar13 - 9 & 0xff;
          if ((0x17 < uVar11) || (-1 < (int)((uVar3 >> uVar11) << 0x1f))) goto joined_r0x2c647dac;
          pbVar13 = pbVar14;
        } while (pbVar6 != pbVar14);
        uVar11 = (int)pbVar14 - (int)pbVar4;
      }
    } while (uVar11 < param_2);
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
joined_r0x2c647eb8:
  pbVar6 = pbVar13;
  if (pbVar14 == pbVar13) goto LAB_2c647e72;
  uVar10 = (int)(char)*pbVar14 - 9U & 0xff;
  uVar12 = ~(uVar3 >> uVar10);
  if ((0x17 < uVar10) || ((int)(uVar12 << 0x1f) < 0)) goto LAB_2c647e72;
  *pbVar14 = (byte)uVar12 & 1;
  pbVar14 = pbVar14 + -1;
  goto joined_r0x2c647eb8;
joined_r0x2c647dac:
  if (pbVar6 == pbVar13) goto LAB_2c647d60;
  uVar12 = (int)(char)*pbVar6 - 9U & 0xff;
  uVar11 = ~(uVar3 >> uVar12);
  if ((0x17 < uVar12) || ((int)(uVar11 << 0x1f) < 0)) goto LAB_2c647d60;
  *pbVar6 = (byte)uVar11 & 1;
  pbVar6 = pbVar6 + -1;
  goto joined_r0x2c647dac;
}

