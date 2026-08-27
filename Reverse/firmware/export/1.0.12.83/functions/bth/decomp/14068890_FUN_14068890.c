/* FUN_14068890 @ 0x14068890 */

undefined4 FUN_14068890(uint param_1,uint param_2,undefined4 param_3,byte *param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  short local_26;
  int local_24;
  
  local_24 = *DAT_140689a4;
  uVar2 = *param_4 & 0x3f;
  local_26 = *(short *)(DAT_140689ac + uVar2 * 8 + 4);
  if ((((1 < param_1) || (iVar3 = *(int *)(DAT_140689a8 + (param_1 + 0x22) * 4), iVar3 == 0)) ||
      (9 < param_2)) ||
     (((iVar3 = *(int *)(iVar3 + param_2 * 4), iVar3 == 0 ||
       (uVar1 = *(ushort *)(iVar3 + 0xe), 0x23 < uVar2)) ||
      (iVar3 = *(int *)(DAT_140689ac + uVar2 * 8), iVar3 == 0)))) {
    uVar5 = 0x43;
    goto LAB_140688fa;
  }
  if (param_5 == 0) {
    if (local_26 == -1) {
      FUN_1407358c(0);
      FUN_140736a8(0,local_26);
      iVar3 = FUN_14072b7c(0,param_4 + 1,&local_26,6,iVar3);
      if (iVar3 == 0) {
        FUN_140736a8(0,1);
        pbVar4 = (byte *)0x0;
        goto LAB_14068982;
      }
      goto LAB_1406896a;
    }
  }
  else if ((ushort)(local_26 + 1U) <= *(ushort *)(param_5 + 6)) {
    FUN_1407358c(param_5);
    FUN_140736a8(param_5,local_26);
    iVar3 = FUN_14072b7c(*(ushort *)(param_5 + 6) + 0x30 + param_5,param_4 + 1,&local_26,6,iVar3);
    if (iVar3 == 0) {
      FUN_140736a8(param_5,1);
      pbVar4 = (byte *)(*(ushort *)(param_5 + 6) + 0x30 + param_5);
LAB_14068982:
      *pbVar4 = *param_4;
      uVar5 = FUN_140711d0(param_1,param_3,uVar1 & 0x3f,0,param_5);
      FUN_140735a8(param_5);
      goto LAB_140688fa;
    }
LAB_1406896a:
    FUN_140735a8(param_5);
    uVar5 = 0x41;
    goto LAB_140688fa;
  }
  uVar5 = 0x4e;
LAB_140688fa:
  if (*DAT_140689a4 == local_24) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

