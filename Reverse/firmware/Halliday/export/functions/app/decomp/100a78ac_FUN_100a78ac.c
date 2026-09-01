/* FUN_100a78ac @ 0x100a78ac */

void FUN_100a78ac(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = 0;
  uStack_14 = 0;
  iVar2 = thunk_FUN_1009efa0(param_1,&local_18,8,0,param_1,param_2);
  if (iVar2 < 0) {
    *param_2 = 5;
  }
  else {
    uVar1 = FUN_1013d036(&local_18);
    *param_2 = uVar1;
  }
  FUN_100a5b78((DAT_100a7900 - DAT_100a78fc) * 0x20 & 0xff00U | 0x1220032,DAT_100a7908,DAT_100a7904,
               param_1,*param_2);
  return;
}

