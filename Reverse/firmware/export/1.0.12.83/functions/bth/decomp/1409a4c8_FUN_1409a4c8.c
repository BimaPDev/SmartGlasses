/* FUN_1409a4c8 @ 0x1409a4c8 */

void FUN_1409a4c8(float param_1,uint param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar5;
  undefined1 auStack_44 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  float local_20;
  uint local_1c;
  
  local_1c = *DAT_1409a574;
  if (*DAT_1409a570 == '\0') {
    uVar4 = 0xffffffff;
  }
  else {
    local_38 = 10;
    uStack_34 = 0x50000;
    local_28 = 0;
    uStack_24 = 0;
    local_2c = 0;
    local_30 = param_2;
    local_20 = param_1;
    iVar2 = FUN_140e5998();
    iVar3 = FUN_1409888c();
    if ((iVar2 == iVar3) || (iVar3 = FUN_140b4bf8(), iVar2 == iVar3)) {
      fVar1 = local_20;
      uVar5 = local_30 & 0xff;
      FUN_1402a6e8(4,0x710,DAT_1409a584,DAT_1409a580,DAT_1409a57c,(int)(local_20 * DAT_1409a578));
      FUN_14099b3c(fVar1,uVar5);
      uVar4 = 0;
      param_3 = extraout_r1_00;
    }
    else {
      FUN_140b4a50(auStack_44);
      uVar4 = 0;
      param_3 = extraout_r1;
    }
  }
  if ((*DAT_1409a574 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar4,param_3,*DAT_1409a574 ^ local_1c,0);
}

