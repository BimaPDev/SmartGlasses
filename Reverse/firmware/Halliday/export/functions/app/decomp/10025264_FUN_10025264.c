/* FUN_10025264 @ 0x10025264 */

void FUN_10025264(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  int local_14;
  
  local_14 = *DAT_100252d0;
  FUN_1004337c(&local_20,param_2,param_3,0);
  FUN_100251bc(&local_20,param_1);
  iVar1 = (**(code **)(DAT_100252d4 + 0x10))(param_2);
  uVar2 = FUN_10024f5c();
  iVar3 = FUN_100250f8();
  if (iVar3 == 0) goto LAB_100252c4;
  FUN_10025098(uVar2,iVar1 + 0x14,local_20,uStack_1c,local_18);
  while( true ) {
    if (*DAT_100252d0 == local_14) break;
    FUN_1013cdc0();
LAB_100252c4:
    FUN_10024fbc(uVar2);
  }
  return;
}

