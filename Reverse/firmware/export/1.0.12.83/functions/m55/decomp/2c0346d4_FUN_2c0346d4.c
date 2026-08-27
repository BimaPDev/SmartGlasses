/* FUN_2c0346d4 @ 0x2c0346d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0346d4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar6 = unaff_r6 * 0x4000000;
  *(int *)(unaff_r5 + 0x14) = iVar6;
  *(int *)(unaff_r5 + 0x54) = unaff_r5;
  *(char *)(unaff_r4 + 0xc) = (char)param_1;
  *(int *)(iVar6 + 0x14) = unaff_r4;
  *(int *)(iVar6 + 0x54) = unaff_r4;
  bVar1 = *(byte *)(unaff_r4 + 0x5b);
  uVar5 = (uint)bVar1;
  *(undefined1 *)(uVar5 + 0xc) = 0x5b;
  *(char *)(uVar5 + 8) = (char)param_1;
  *(undefined4 *)(uVar5 + 0x34) = 0x5b;
  iVar4 = *(int *)(uVar5 + 0x44);
  *(undefined4 *)(uVar5 + 0x30) = 0x76;
  iVar3 = *(int *)(iVar6 + 0x44);
  *(undefined1 *)(uVar5 + 0x11) = 0x5b;
  *(short *)(param_4 + iVar4) = (short)param_4;
  uVar2 = s__RING_BATT__the_ring_batt_callba_2c034140._56_4_;
  iVar6 = param_3 + iVar3;
  *(byte *)(iVar6 + iVar4) = bVar1;
  *(int *)(uVar5 + 0x20) = iVar3;
  *(char *)(uVar5 + 0x11) = (char)iVar4;
  *(int *)(uVar5 + 0x44) = iVar4;
  *(byte *)(uVar5 + 9) = bVar1;
  *(undefined1 *)(uVar5 + 0xc) = 0x3d;
  *(char *)(uVar5 + 8) = (char)(uVar2 << 1);
  *(undefined4 *)(uVar5 + 0x34) = 0x3d;
  *(undefined4 *)(uVar2 + 0x54) = uVar2;
  *(char *)(uVar2 + 0xd) = (char)iVar6;
  *(undefined1 *)(uVar5 + 0xc) = 0x3d;
                    /* WARNING: Could not recover jumptable at 0x2c03408a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined2 *)(uVar5 * 2),s_xr_hogprh_unicron_data_handler_2c0341c8._12_4_,iVar6,
             param_4,param_1,param_2,param_3,param_4);
  return;
}

