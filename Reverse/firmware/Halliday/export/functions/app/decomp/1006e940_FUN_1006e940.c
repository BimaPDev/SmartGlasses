/* FUN_1006e940 @ 0x1006e940 */

undefined4 FUN_1006e940(int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  piVar6 = *(int **)(param_1 + 0x10);
  iVar9 = *piVar6;
  puVar8 = (undefined4 *)param_3[4];
  iVar7 = iVar9 + (param_2 + 1) * 0x100;
  if (param_2 < (uint)piVar6[1]) {
    uVar5 = puVar8[5];
    if (uVar5 < 0x80000) {
      bVar1 = *(byte *)((int)param_3 + 1);
      if ((bVar1 & 0xc) == 0) {
        bVar2 = *(byte *)((int)piVar6 + param_2 * 0xc + 0x12);
        piVar6[param_2 * 3 + 2] = bVar1 & 0xc;
        *(byte *)((int)piVar6 + param_2 * 0xc + 0x12) = bVar2 & 0xfe;
      }
      else {
        bVar2 = *(byte *)((int)piVar6 + param_2 * 0xc + 0x12);
        piVar6[param_2 * 3 + 2] = param_3[6];
        piVar6[param_2 * 3 + 3] = param_3[5];
        *(byte *)((int)piVar6 + param_2 * 0xc + 0x12) =
             bVar2 & 0xfe | (byte)(((uint)bVar1 << 0x1d) >> 0x1f);
      }
      *(byte *)((int)piVar6 + param_2 * 0xc + 0x12) =
           *(byte *)((int)piVar6 + param_2 * 0xc + 0x12) & 0xfd;
      *(undefined4 *)(iVar7 + 8) = *puVar8;
      *(undefined4 *)(iVar7 + 0x10) = puVar8[1];
      uVar3 = *param_3;
      *(uint *)(iVar7 + 0x18) = uVar5;
      uVar4 = (ushort)*param_3 & 0x380;
      piVar6[param_2 * 3 + 4] =
           DAT_1006ead4 & piVar6[param_2 * 3 + 4] | (((ushort)uVar3 & 0x3ff) >> 7) << 0x12;
      if (uVar4 == 0x80) {
        uVar5 = ((byte)*param_3 & 0x7f) << 8 | 0x8000;
      }
      else if (uVar4 == 0x100) {
        uVar5 = (byte)*param_3 & 0x7f | 0x80;
      }
      else {
        uVar5 = 0;
      }
      if (((*param_3 & 0xf8000380) == DAT_1006ead8) || ((*param_3 & 0xf8000380) == DAT_1006eadc)) {
        uVar5 = uVar5 | 0x10000;
      }
      if (((ushort)param_3[2] == 1) || (*(ushort *)((int)param_3 + 10) == 1)) {
        uVar5 = uVar5 | 0x20000;
      }
      uVar4 = *(ushort *)((int)param_3 + 6);
      if (*(ushort *)((int)param_3 + 6) == 0) {
        uVar4 = (ushort)param_3[1];
      }
      if ((*(byte *)(puVar8 + 7) & 0xc0) != 0) {
        uVar5 = uVar5 | 0x40000;
        *(byte *)((int)piVar6 + param_2 * 0xc + 0x12) =
             *(byte *)((int)piVar6 + param_2 * 0xc + 0x12) | 2;
      }
      if (uVar4 == 2) {
        uVar5 = uVar5 | 0x100000;
      }
      else if (uVar4 != 4) {
        uVar5 = uVar5 | 0x200000;
      }
      *(uint *)((param_2 + 1) * 0x100 + iVar9) = uVar5;
      return 0;
    }
    FUN_100a5b78(((int)PTR_DAT_1006eac4 - (int)PTR_DAT_1006eac0) * 0x20 & 0xff00U | 0xc90011,
                 PTR_s_dma_acts_config_1006eacc,PTR_s_DMA_error__Data_size_too_big___d_1006ead0,
                 uVar5,param_1,param_2,param_3);
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_1006eac4 - (int)PTR_DAT_1006eac0) * 0x20 & 0xff00U | 0xc20012,
                 PTR_s_dma_acts_config_1006eacc,PTR_s_DMA_error_ch__d_>_dma_max_chan___1006eac8,
                 param_2,piVar6[1],param_2,param_3);
  }
  return 0xffffffea;
}

