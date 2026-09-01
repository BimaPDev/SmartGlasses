/* FUN_100d9f70 @ 0x100d9f70 */

void FUN_100d9f70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  uVar1 = thunk_FUN_1013650a();
  pcVar3 = *(code **)(*DAT_100d9fc0 + 4);
  uVar2 = FUN_10131c1c();
  (*pcVar3)(uVar2,(int)&uStack_14 + 3);
  FUN_100a5b78((DAT_100d9fc8 - DAT_100d9fc4) * 0x20 & 0xff00U | 0x1760031,DAT_100d9fd0,DAT_100d9fcc,
               uStack_14._3_1_,param_1);
  uVar2 = FUN_10136c54();
  *DAT_100d9fd4 = uVar2;
  FUN_10132198(uVar1,uStack_14._3_1_);
  return;
}

