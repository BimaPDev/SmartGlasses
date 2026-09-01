/* FUN_10073f28 @ 0x10073f28 */

int FUN_10073f28(int param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  
  if (((param_2 == (int *)0x0) || (param_3 == 0)) || (param_4 == 0)) {
    FUN_100a5b78(DAT_10074078 | (DAT_10074074 - DAT_10074070) * 0x20 & 0xff00U,DAT_10074080,
                 DAT_1007407c,param_2,param_3,param_4);
    return -0x16;
  }
  if (*param_2 != DAT_10074084) {
    FUN_100a5b78((DAT_10074074 - DAT_10074070) * 0x20 & 0xff00U | 0x6500011,DAT_10074080,
                 DAT_10074088,*param_2,param_1,param_2);
    return -0xe;
  }
  if ((int)((uint)*(byte *)((int)param_2 + 0x23) << 0x1f) < 0) {
    uVar4 = (DAT_10074074 - DAT_10074070) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1007408c | uVar4,DAT_10074080,DAT_10074090,uVar4,param_1,param_2);
    return 0;
  }
  if (-1 < (int)((uint)*(ushort *)(param_2 + 3) << 0x1f)) {
    uVar4 = (DAT_10074074 - DAT_10074070) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_10074094 | uVar4,DAT_10074080,PTR_s_session_not_opened_10074098,uVar4,param_1,
                 param_2);
    return -1;
  }
  iVar7 = param_1;
  piVar8 = param_2;
  if (-1 < (int)((uint)*(byte *)((int)param_2 + 0x23) << 0x1d)) {
    iVar5 = *(int *)(param_1 + 0x10);
    iVar1 = FUN_10073cdc(iVar5);
    if (iVar1 != 0) {
      FUN_100a5b78((DAT_10074074 - DAT_10074070) * 0x20 & 0xff00U | 0x6680011,DAT_10074080,
                   PTR_s_prepare_session_dma_error_1007409c,DAT_10074070,iVar7,piVar8);
      return -6;
    }
    bVar6 = (*(byte *)((int)param_2 + 0x23) & 2) != 0;
    uVar4 = *(byte *)((int)param_2 + 0x23) & 2;
    if (bVar6) {
      param_4 = param_4 << 1;
      uVar4 = param_3;
    }
    uVar2 = uVar4;
    if (!bVar6) {
      uVar2 = param_3;
    }
    iVar1 = FUN_1011f8a8(*(undefined4 *)(iVar5 + 0x18),param_2[1],uVar2,uVar4,param_4);
    iVar7 = param_4;
    if (iVar1 != 0) {
      iVar5 = DAT_10074074 - DAT_10074070;
      uVar4 = DAT_100740a4;
      puVar3 = PTR_s_dma_reload_error__d_100740a0;
      goto LAB_10074042;
    }
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 8))(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar5 = DAT_10074074 - DAT_10074070;
  uVar4 = DAT_100740ac;
  puVar3 = DAT_100740a8;
LAB_10074042:
  FUN_100a5b78(uVar4 | iVar5 * 0x20 & 0xff00U,DAT_10074080,puVar3,iVar1,iVar7,piVar8);
  return iVar1;
}

