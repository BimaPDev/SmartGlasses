/* FUN_2c082ab0 @ 0x2c082ab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c082ab0(undefined2 *param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  int *unaff_r7;
  int *piVar4;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr12;
  
  *param_1 = (short)param_3;
  *unaff_r6 = param_3;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r5;
  unaff_r6[4] = unaff_r7;
  *(char *)(((int)(unaff_r6 + 5) >> 0x19) + 0x1f) = (char)param_2;
  func_0x2b8adb28();
  iVar1 = *unaff_r7;
  iVar2 = unaff_r7[1];
  piVar4 = unaff_r7 + 4;
  if (iVar1 != 0) {
    piVar4 = (int *)(unaff_r7[3] << 0xc);
  }
  *(int *)(iVar1 + extraout_r3) = iVar1;
  coprocessor_function(0xe,2,1,in_cr3,in_cr5,in_cr12);
  uVar3 = *(undefined4 *)(iVar1 + 0x6c);
  *(undefined2 *)((uint)*(byte *)((int)piVar4 + iVar1) + extraout_r3) = param_2;
                    /* WARNING: Could not recover jumptable at 0x2c082afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_2c082e94)(iVar1,iVar2,uVar3,*(undefined2 *)(iVar1 + 0x10),param_3);
  return;
}

