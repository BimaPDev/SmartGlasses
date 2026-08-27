/* FUN_1409eb54 @ 0x1409eb54 */

void FUN_1409eb54(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  iVar2 = DAT_1409ebc8;
  local_14 = *DAT_1409ebcc;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar1 = FUN_140e5308(DAT_1409ebc8,param_2,param_3,0);
  FUN_140e5208(uVar1,0,&local_1c,&local_20,&local_18);
  iVar2 = FUN_140e5978(0xc,uVar1,iVar2,DAT_1409ebd0 - iVar2,local_1c,local_20,local_18,0x1000,
                       DAT_1409ebd4);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1409ebd8,iVar2);
  }
  if (*DAT_1409ebcc == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

