/* FUN_1409a4c0 @ 0x1409a4c0 */

void FUN_1409a4c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined1 auStack_3c [12];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  uint local_14;
  
  local_14 = *DAT_1409a3c4;
  if (*DAT_1409a3c0 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    local_30 = 10;
    uStack_2c = 0x40000;
    uStack_20 = 0;
    local_1c = 0;
    local_28 = param_1;
    local_24 = param_2;
    iVar1 = FUN_140e5998();
    iVar2 = FUN_1409888c();
    if ((iVar1 == iVar2) || (iVar2 = FUN_140b4bf8(), iVar1 == iVar2)) {
      FUN_1409a190(&uStack_2c);
      uVar3 = 0;
      param_2 = extraout_r1_00;
    }
    else {
      FUN_140b4a50(auStack_3c);
      uVar3 = 0;
      param_2 = extraout_r1;
    }
  }
  if ((*DAT_1409a3c4 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar3,param_2,*DAT_1409a3c4 ^ local_14,0);
}

