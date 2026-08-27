/* FUN_2c0348b6 @ 0x2c0348b6 */

void FUN_2c0348b6(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int extraout_r2;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  int iVar7;
  int unaff_r5;
  int iVar8;
  uint uVar9;
  int iVar10;
  int unaff_r7;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000014;
  undefined4 in_stack_00000180;
  
  uVar9 = (uint)*(ushort *)(param_4 + unaff_r7);
  *param_3 = unaff_r4;
  param_3[1] = unaff_r5;
  param_3[2] = unaff_r7;
  iVar4 = func_0x2c25b18c(param_1,param_2,param_3 + 3,in_stack_00000180);
  *(char *)(unaff_r5 + 0x15) = (char)extraout_r2;
  iVar10 = uVar9 + 0x3f;
  *(undefined1 *)(iVar4 + 8) = 0xc9;
  uVar5 = s_ring_ota_unregister_cb_2c034adc._16_4_;
  cVar2 = *(char *)(extraout_r2 + in_stack_00000014);
  iVar4 = (int)cVar2;
  bVar1 = *(byte *)(s_ring_ota_unregister_cb_2c034adc._16_4_ + 8);
  iVar8 = *(int *)(unaff_r5 * 0x200 + 0x74);
  *(int *)(uVar9 + 0x93) = iVar10;
  *(undefined4 *)(iVar4 + 0x24) = 0x2c0348c9;
  iVar11 = *(int *)(iVar8 + 100);
  iVar7 = (uint)bVar1 * 2;
  *(int *)(uVar9 + 0x93) = iVar7;
  *(char *)(uVar9 + 0x50) = cVar2;
  *(undefined4 *)(iVar7 + 0x54) = uVar5;
  *(int *)(uVar9 + 0x53) = iVar4;
  *(undefined1 *)(iVar8 + 9) = 0;
  uVar3 = (undefined1)iVar11;
  *(undefined1 *)(iVar4 + 1) = uVar3;
  *(int *)(iVar8 + 0x14) = iVar7;
  *(int *)(uVar9 + 0xa3) = iVar7;
  *(undefined1 *)(iVar8 + 9) = uVar3;
  *(char *)(iVar11 + 9) = (char)*(undefined4 *)(iVar11 + 0x24);
  *(undefined1 *)(iVar4 + 0xd) = uVar3;
  *(int *)(uVar9 + 0x53) = iVar7;
  *(char *)(uVar9 + 0x48) = (char)uVar5;
  *(char *)(iVar7 + 0x11) = (char)iVar8;
  *(int *)(iVar8 + 0x30) = iVar11;
  *(undefined1 *)(iVar8 + 9) = uVar3;
  *(int *)(iVar8 + 0x74) = iVar10;
  uVar5 = *(undefined4 *)(uVar9 + 0x53);
  *(int *)(iVar8 + 0x74) = iVar10;
  *(char *)(iVar8 + 0x3d) = (char)*(undefined4 *)(iVar4 + 0x54);
  uVar6 = *(undefined4 *)(iVar7 + 0x74);
  *(undefined4 *)(iVar8 + 0x65) = *(undefined4 *)(iVar8 + 0x99);
  *(char *)(iVar7 + 0xc) = (char)iVar8 + '5';
                    /* WARNING: Could not recover jumptable at 0x2c034ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined2 *)((uint)bVar1 * 4),s_xr_ring_auto_conn_2c035004._4_4_,uVar5,uVar6);
  return;
}

