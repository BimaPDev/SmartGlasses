/* thunk_FUN_100c60f8 @ 0x10132f1e */

undefined4 thunk_FUN_100c60f8(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *extraout_r3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  byte bStack_14;
  
  iVar1 = FUN_100c5d4c(0x200c,2);
  if (iVar1 == 0) {
    uVar4 = 0xffffff97;
  }
  else {
    pbVar2 = (byte *)FUN_100c1fe4(iVar1 + 8,2);
    if (param_1 == 1) {
      iVar3 = FUN_10132e28(DAT_100c6168);
      extraout_r3[1] = (byte)((uint)(iVar3 << 0x17) >> 0x1f);
      pbVar2 = extraout_r3;
    }
    else {
      pbVar2[1] = 0;
    }
    *pbVar2 = (byte)param_1;
    uStack_1c = DAT_100c6168;
    bStack_14 = (byte)param_1 & 1;
    uStack_18 = 5;
    iVar3 = FUN_100c196c(iVar1);
    *(undefined4 **)(iVar3 * 0xc + DAT_100c616c + 4) = &uStack_1c;
    uVar4 = FUN_100c5e48(0x200c,iVar1,0);
  }
  return uVar4;
}

