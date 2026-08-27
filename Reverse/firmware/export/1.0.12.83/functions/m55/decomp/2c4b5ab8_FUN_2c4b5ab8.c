/* FUN_2c4b5ab8 @ 0x2c4b5ab8 */

undefined4 FUN_2c4b5ab8(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  char cVar10;
  int iVar11;
  int unaff_r6;
  int iVar12;
  bool bVar13;
  
  iVar6 = FUN_2c4ba688(param_2);
  iVar7 = FUN_2c4ba688(param_3);
  pbVar1 = DAT_2c4b5cec;
  if (iVar6 != iVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4b5ce0,DAT_2c4b5cb8,iVar6,iVar7);
  }
  iVar11 = 0;
  pbVar9 = DAT_2c4b5cec;
  iVar7 = 0;
  do {
    iVar12 = iVar7;
    if (((pbVar9[0xc] != 0) &&
        (unaff_r6 = FUN_2c4ba688(*(undefined4 *)(pbVar9 + 0x14)), iVar12 = unaff_r6, iVar7 != 0)) &&
       (iVar12 = iVar7, unaff_r6 != iVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4b5cd4,DAT_2c4b5cb8,iVar11,iVar7,unaff_r6);
    }
    puVar4 = DAT_2c4b5cd0;
    piVar3 = DAT_2c4b5ccc;
    pbVar2 = DAT_2c4b5cc8;
    iVar11 = iVar11 + 1;
    pbVar9 = pbVar9 + 0x1c;
    iVar7 = iVar12;
  } while (iVar11 != 5);
  if (((iVar12 != 0) && (param_4 != (code *)0x0)) && (unaff_r6 != iVar6)) {
    (*param_4)(0,unaff_r6,0);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x16f,DAT_2c4b5cbc,DAT_2c4b5cc4,DAT_2c4b5cc0,DAT_2c4b5cb8,iVar6,unaff_r6);
  }
  bVar8 = *DAT_2c4b5cc8;
  *DAT_2c4b5ccc = iVar6;
  *puVar4 = param_4;
  if (bVar8 != 0) {
    *pbVar2 = bVar8 | (byte)param_1;
    FUN_2c4b6a94(param_1,1);
    FUN_2c4ba684(param_1);
    return 0;
  }
  *pbVar2 = (byte)param_1;
  FUN_2c4be7a8(1);
  FUN_2c673d98(0);
  iVar6 = FUN_2c674568();
  bVar8 = *pbVar1;
  bVar13 = iVar6 != 0;
  *pbVar1 = bVar8 | 2;
  if (bVar8 == 0) {
    pbVar1[1] = bVar13;
    FUN_2c4b8038(0);
    FUN_2c4b6bfc();
  }
  else if ((bool)pbVar1[1] != bVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4b5ce8,DAT_2c4b5ce4,bVar13,2,bVar8);
  }
  uVar5 = DAT_2c4b5cdc;
  if (pbVar1[0xc] == 0) {
    pbVar1[0x20] = pbVar1[0x20] & 1 | 0x14;
    *(int *)(pbVar1 + 0x14) = *piVar3;
    pbVar1[0x18] = 1;
    pbVar1[0x1c] = 2;
    pbVar1[0x1d] = 0;
    pbVar1[0x1e] = 0;
    pbVar1[0x1f] = 0;
    pbVar1[0x24] = 0x16;
    pbVar1[0x25] = 0;
    pbVar1[0x26] = 0;
    pbVar1[0x27] = 0;
    FUN_2c4b9480(0,0,uVar5);
    bVar8 = pbVar1[0x28];
  }
  else {
    bVar8 = pbVar1[0x28];
  }
  if (bVar8 == 0) {
    iVar6 = *piVar3;
    pbVar1[0x34] = 0;
    *(int *)(pbVar1 + 0x30) = iVar6;
    bVar8 = pbVar1[0x3c];
    pbVar1[0x38] = 0;
    uVar5 = DAT_2c4b5cd8;
    pbVar1[0x39] = 0;
    pbVar1[0x3a] = 0;
    pbVar1[0x3b] = 0;
    pbVar1[0x3c] = bVar8 & 1 | 0x10;
    pbVar1[0x40] = 0x16;
    pbVar1[0x41] = 0;
    pbVar1[0x42] = 0;
    pbVar1[0x43] = 0;
    FUN_2c4b9480(0,1,uVar5);
  }
  bVar8 = 1;
  cVar10 = '\0';
  pbVar9 = pbVar1;
  do {
    if (pbVar9[0xd] == 0) {
      if (cVar10 != '\0') {
        if ((cVar10 != '\x01') || (pbVar1[0x61] == 0)) {
LAB_2c4b5b98:
          FUN_2c4b8340(0,cVar10);
          goto LAB_2c4b5ba0;
        }
LAB_2c4b5ba4:
        FUN_2c4b6a94(param_1,1);
        FUN_2c4ba684(param_1);
        if (pbVar1[2] == 0) {
          return 0;
        }
        FUN_2c4b6c90();
        return 0;
      }
      if ((pbVar1[0x45] == 0) && (pbVar1[0x7d] == 0)) {
        FUN_2c4b6bc8(1);
        goto LAB_2c4b5b98;
      }
    }
    else {
LAB_2c4b5ba0:
      if (1 < bVar8) goto LAB_2c4b5ba4;
    }
    bVar8 = bVar8 + 1;
    cVar10 = cVar10 + '\x01';
    pbVar9 = pbVar9 + 0x1c;
  } while( true );
}

