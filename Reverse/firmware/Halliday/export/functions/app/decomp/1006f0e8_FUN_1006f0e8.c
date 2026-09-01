/* FUN_1006f0e8 @ 0x1006f0e8 */

void FUN_1006f0e8(int *param_1,undefined4 param_2,uint param_3,int param_4,byte *param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  code *pcVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar2 = DAT_1006f318;
  uVar12 = param_3 >> 9 | param_4 << 0x17;
  iVar11 = param_3 + (param_3 >> 9) * -0x200;
  uVar9 = ((int)PTR_LAB_1006f300 - (int)PTR_DAT_1006f304) * 0x20 & 0xff00;
  do {
    if (param_7 < 1) {
      return;
    }
    bVar1 = *(byte *)(param_1 + 2);
    pbVar10 = (byte *)(bVar1 & 1);
    if ((((bVar1 & 1) == 0) || (uVar12 < (uint)param_1[3])) || (param_1[3] + 4U <= uVar12)) {
      if ((((int)((uint)*(byte *)(param_1 + 0x204) << 0x1f) < 0) && ((uint)param_1[0x205] <= uVar12)
          ) && (uVar12 < param_1[0x205] + 4U)) {
        iVar3 = 1;
        goto LAB_1006f156;
      }
      *puVar2 = 0;
LAB_1006f168:
      pbVar6 = pbVar10;
      if ((bVar1 & 1) == 0) {
LAB_1006f280:
        if ((byte *)(param_1 + (int)pbVar10 * 0x202 + 2) != (byte *)0x0) {
          pbVar6 = (byte *)(param_1 + (int)pbVar10 * 0x202 + 2);
        }
      }
      else {
        pbVar6 = (byte *)(param_1 + 2);
        if (-1 < (int)((uint)*(byte *)(param_1 + 0x204) << 0x1f)) {
          pbVar10 = (byte *)0x1;
          goto LAB_1006f280;
        }
        if ((pbVar6 == (byte *)0x0) ||
           (*(ushort *)((int)param_1 + 0x812) < *(ushort *)((int)param_1 + 10))) {
          pbVar6 = (byte *)(param_1 + 0x204);
        }
      }
      pbVar10 = pbVar6 + 8;
      if ((*pbVar6 & 3) == 3) {
        iVar3 = *param_1;
        *pbVar6 = *pbVar6 & 0xfd;
        uVar13 = 0x800;
        uVar14 = 0;
        pcVar7 = *(code **)(*(int *)(iVar3 + 8) + 4);
        iVar3 = (*pcVar7)(iVar3,pcVar7,*(int *)(pbVar6 + 4) << 9,0,pbVar10);
        if (iVar3 < 0) {
          FUN_100a5b78(uVar9 | 0x430013,PTR_s__block_dev_flush_cache_1006f308,
                       PTR_s_nand_write_error__d__offsec_0x_x_1006f30c,iVar3,
                       *(undefined4 *)(pbVar6 + 4),pbVar10,uVar13,uVar14);
        }
      }
      iVar4 = *param_1;
      *pbVar6 = *pbVar6 & 0xfc | 1;
      iVar3 = param_1[1];
      *(short *)(pbVar6 + 2) = (short)iVar3;
      *(uint *)(pbVar6 + 4) = uVar12 & 0xfffffffc;
      *(short *)(param_1 + 1) = (short)iVar3 + 1;
      uVar13 = 0x800;
      uVar14 = 0;
      pcVar7 = (code *)**(undefined4 **)(iVar4 + 8);
      iVar3 = (*pcVar7)(iVar4,pcVar7,(uVar12 & 0xfffffffc) << 9,0,pbVar10);
      if (iVar3 < 0) {
        FUN_100a5b78(uVar9 | 0x580013,PTR_s__block_dev_update_cache_1006f310,
                     PTR_s_nand_read_error__d__offsec_0x_x__1006f314,iVar3,
                     *(undefined4 *)(pbVar6 + 4),pbVar10,uVar13,uVar14);
      }
      *puVar2 = pbVar6;
    }
    else {
      iVar3 = 0;
LAB_1006f156:
      *puVar2 = param_1 + iVar3 * 0x202 + 2;
      if (param_1 + iVar3 * 0x202 + 2 == (int *)0x0) goto LAB_1006f168;
    }
    pbVar10 = (byte *)*puVar2;
    uVar12 = uVar12 - *(int *)(pbVar10 + 4);
    if (iVar11 != 0) {
      iVar3 = 0x200 - iVar11;
      if (param_7 <= 0x200 - iVar11) {
        iVar3 = param_7;
      }
      pbVar5 = pbVar10 + iVar11 + 8 + uVar12 * 0x200;
      pbVar6 = pbVar5;
      pbVar8 = param_5;
      if ((param_9 == 1) || (pbVar6 = param_5, pbVar8 = pbVar5, param_9 == 0)) {
        FUN_1011ea40(pbVar6,pbVar8,iVar3);
      }
      else {
        FUN_1011ea48(pbVar5,0xff,iVar3);
      }
      param_5 = param_5 + iVar3;
      param_7 = param_7 - iVar3;
      uVar12 = uVar12 + 1;
    }
    for (; (param_7 != 0 && (uVar12 < 4)); uVar12 = uVar12 + 1) {
      iVar11 = param_7;
      if (0x1ff < param_7) {
        iVar11 = 0x200;
      }
      pbVar5 = pbVar10 + uVar12 * 0x200 + 8;
      pbVar6 = pbVar5;
      pbVar8 = param_5;
      if ((param_9 == 1) || (pbVar6 = param_5, pbVar8 = pbVar5, param_9 == 0)) {
        FUN_1011ea40(pbVar6,pbVar8,iVar11);
      }
      else {
        FUN_1011ea48(pbVar5,0xff,iVar11);
      }
      param_5 = param_5 + iVar11;
      param_7 = param_7 - iVar11;
    }
    if (param_9 != 0) {
      *pbVar10 = *pbVar10 | 2;
    }
    iVar11 = 0;
    uVar12 = *(int *)(pbVar10 + 4) + 4;
  } while( true );
}

