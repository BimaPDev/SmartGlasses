/* FUN_10137f0a @ 0x10137f0a */

void FUN_10137f0a(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 8);
  FUN_100c1f58((int *)(param_2 + 8),7);
  uVar1 = *(ushort *)(iVar2 + 1);
  FUN_100e0358(param_1,param_2,(uVar1 << 8 | uVar1 >> 8) - 7);
  FUN_1013cb84(param_1 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x5d) = 4;
  if (((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)param_1[0x1a], UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10137f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_1,*(undefined1 *)((int)param_1 + 0x62));
    return;
  }
  return;
}

