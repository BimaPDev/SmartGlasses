/* FUN_140607dc @ 0x140607dc */

void FUN_140607dc(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  undefined4 extraout_r1_01;
  int iVar3;
  int local_20;
  uint local_1c;
  
  iVar3 = *param_1;
  local_1c = *DAT_1406085c;
  if (iVar3 == 0) {
    FUN_14073468(param_1,0,0,param_2);
    iVar3 = *param_1;
    uVar2 = extraout_r1_01;
LAB_14060840:
    uVar1 = 0;
    if (iVar3 == 0) goto LAB_14060816;
  }
  else if (*(ushort *)(iVar3 + 8) < param_2) {
    local_20 = 0;
    FUN_140737d0(iVar3,&local_20,0,param_2);
    FUN_140735a8(iVar3);
    *param_1 = local_20;
    uVar2 = extraout_r1_00;
    iVar3 = local_20;
    goto LAB_14060840;
  }
  FUN_140e5278((uint)*(ushort *)(iVar3 + 6) + (uint)*(ushort *)(iVar3 + 4) + 0x30 + iVar3,param_3,
               param_2);
  FUN_1407373c(*param_1,param_2);
  uVar1 = 1;
  uVar2 = extraout_r1;
LAB_14060816:
  if ((*DAT_1406085c ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar1,uVar2,*DAT_1406085c ^ local_1c,0);
  }
  return;
}

