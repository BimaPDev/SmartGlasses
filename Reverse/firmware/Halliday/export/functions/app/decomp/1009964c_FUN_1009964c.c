/* FUN_1009964c @ 0x1009964c */

void FUN_1009964c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x4c) != param_2) {
    pcVar3 = (code *)*DAT_10099724;
    local_20 = param_1;
    local_1c = param_2;
    uStack_18 = param_3;
    FUN_1012bec6(*(undefined4 *)(param_1 + 0x2c));
    iVar1 = (*pcVar3)();
    if (param_2 < 0) {
      param_2 = param_2 + iVar1;
    }
    if ((param_2 <= iVar1) && (param_2 != 0x7fff)) {
      iVar1 = param_2;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
    FUN_10089bf8(param_1);
    iVar2 = FUN_1012c296(param_1);
    FUN_10096f64(*(undefined4 *)(param_1 + 0x2c),iVar1,&local_20);
    iVar1 = local_1c;
    iVar4 = *(int *)(iVar2 + 8);
    iVar2 = thunk_FUN_10126008(param_1);
    if (iVar1 < iVar2) {
      FUN_1008a2b0(param_1,local_1c,1);
    }
    iVar1 = FUN_101257c8(param_1);
    iVar5 = iVar4 + local_1c;
    iVar2 = thunk_FUN_10126008(param_1);
    if (iVar1 < iVar5 - iVar2) {
      FUN_1008a2b0(param_1,(local_1c + iVar4) - iVar1,1);
    }
    iVar1 = local_20;
    iVar2 = FUN_1008a000(param_1);
    if (iVar1 < iVar2) {
      FUN_1008a284(param_1,local_20,1);
    }
    iVar1 = FUN_1012579a(param_1);
    iVar5 = iVar4 + local_20;
    iVar2 = FUN_1008a000(param_1);
    if (iVar1 < iVar5 - iVar2) {
      FUN_1008a284(param_1,(local_20 + iVar4) - iVar1,1);
    }
    *(int *)(param_1 + 0x48) = local_20;
    FUN_10099414(param_1);
    FUN_10099478(param_1);
  }
  return;
}

