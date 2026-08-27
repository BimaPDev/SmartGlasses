/* FUN_2c161a38 @ 0x2c161a38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c161a38(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 unaff_r7;
  undefined4 uVar11;
  undefined4 uVar12;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar7 = unaff_r4 * 2;
  cVar2 = (char)param_3;
  iVar10 = (int)*(short *)(_DAT_0000008e * 2);
  cRam000000fd = cVar2;
  *(char *)(_DAT_0000008e + 0x11) = (char)*(undefined2 *)(_DAT_0000008e * 2);
  iVar8 = *(int *)(iVar7 + 0x54);
  *(int *)(iVar7 + 0x14) = iVar10;
  *(char *)(iVar7 + 0x11) = (char)param_4;
  *(undefined1 *)(iVar8 + 9) = unaff_r7;
  uVar3 = (undefined1)iVar7;
  *(undefined1 *)(iVar8 + 0x19) = uVar3;
  uVar4 = (undefined1)*(undefined4 *)(iVar7 + 0x44);
  *(undefined1 *)(param_4 + 0x15) = uVar4;
  iVar8 = *(int *)(iVar8 + 0x54);
  sVar1 = *(short *)(iVar8 * 2);
  *(int *)(iVar10 + 0x54) = param_3;
  *(char *)(iVar10 + 0x15) = (char)param_4;
  *(undefined1 *)(iVar8 + 0x11) = uVar3;
  *(undefined1 *)(param_4 + 0x19) = uVar4;
  *(int *)(iVar8 + 0x54) = (int)sVar1;
  *(int *)(iVar7 + 0x54) = iVar7;
  iVar8 = *(int *)(iVar8 + 0x54);
  *(int *)(iVar10 + 0x54) = param_3;
  uVar5 = (undefined1)(unaff_r4 * 4);
  *(undefined1 *)(iVar10 + 0x15) = uVar5;
  *(undefined1 *)(iVar8 + 0x11) = uVar3;
  iVar8 = *(int *)(iVar8 + 0x54);
  *(int *)(iVar10 + 0x54) = param_3;
  *(undefined1 *)(iVar10 + 0x15) = uVar5;
  *(undefined1 *)(iVar8 + 0x11) = uVar3;
  *(undefined1 *)(unaff_r4 * 4 + 0xd) = uVar4;
  uVar12 = s_del_base_key_item_2c16189c._12_4_;
  *(int *)(iVar10 + 0x54) = param_3;
  *(undefined1 *)(iVar10 + 0x15) = uVar5;
  *(undefined1 *)(uVar12 + 0x11) = uVar3;
  iVar8 = iVar10 * 2;
  *(short *)(param_3 + uVar12) = (short)iVar8;
  *(int *)(iVar7 + 0x14) = iVar10;
  *(char *)(iVar7 + 0x11) = (char)iVar8;
  *(char *)(uVar12 + 9) = (char)(iVar10 << 1);
  *(undefined1 *)(uVar12 + 0x19) = uVar3;
  *(char *)(iVar8 + 0x15) = (char)*(undefined4 *)(iVar7 + 0x44);
  uVar3 = (undefined1)*(undefined2 *)(*(int *)(uVar12 + 0x54) * 2);
  *(undefined1 *)(*(int *)(uVar12 + 0x54) + 0x11) = uVar3;
  iVar9 = *(int *)(iVar7 + 0x54);
  uVar12 = *(undefined4 *)(iVar9 + 0x10);
  *(int *)(iVar10 + 0x54) = iVar7;
  sVar1 = *(short *)(iVar9 * 2);
  iVar9 = (int)sVar1;
  *(char *)(iVar7 + 0x11) = cVar2;
  *(int *)(iVar9 + 0x30) = iVar10;
  *(short *)(iVar7 + 0x2e) = sVar1;
  iVar7 = *(int *)(iVar9 + 0x14);
  *(char *)(iVar10 + 0x11) = (char)iVar8;
  iVar8 = *(int *)(iVar10 + 4);
  *(char *)(iVar9 + 0x1d) = (char)uVar12;
  iVar9 = *(int *)(iVar9 + 0x14);
  uVar11 = *(undefined4 *)(iVar8 + 0x44);
  *(undefined1 *)(iVar9 + 0xd) = uVar3;
  *(int *)(iVar7 + 0x40) = iVar9;
  *(char *)(iVar7 + 0xc) = (char)iVar9;
  *(char *)(iVar7 + 0xc) = (char)iVar9;
  iVar9 = *(int *)(iVar9 + 0x54);
  uVar6 = *(undefined4 *)(iVar9 + 100);
  *(int *)(iVar7 + 0x54) = iVar7;
  *(int *)(iVar7 + 0x40) = iVar9;
  uVar12 = *(undefined4 *)(iVar7 + 0x60);
  *(char *)(iVar9 + 0x11) = (char)uVar11;
  *(char *)(iVar7 + 0xc) = (char)uVar12;
  *(char *)(iVar10 + 1) = (char)iVar9;
  *(char *)(iVar10 + 0x11) = cVar2 + '\x14';
  *(char *)(iVar9 + 0x11) = (char)uVar6;
  *(int *)(*(int *)(iVar7 + 0x54) + 0x44) = iVar9;
  _DAT_00000078 = 0x6f;
                    /* WARNING: Could not recover jumptable at 0x2c1611b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (0x6f,s_set_result_mutex_init_fail_2c161334._0_4_,
             *(undefined4 *)(*(int *)(iVar9 + 0x74) + 0x14),iVar8,param_3);
  return;
}

