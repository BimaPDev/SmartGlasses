/* FUN_1005dd4c @ 0x1005dd4c */

undefined4 FUN_1005dd4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_r2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_100568bc();
  iVar4 = *DAT_1005ddb8;
  if (iVar4 == 0) {
    uVar1 = extraout_r2;
    FUN_10119dc2(DAT_1005ddc4,DAT_1005ddc0,DAT_1005ddbc,0x84,uVar5,extraout_r2,0,param_4);
    FUN_1011a1f0(DAT_1005ddbc,0x84,uVar1,iVar4);
  }
  iVar4 = FUN_1005dd10(param_1);
  if (iVar4 == 0) {
    iVar4 = FUN_1005dcd4(param_1);
    if (iVar4 == 0) {
      uVar2 = FUN_1011bb2e();
      goto LAB_1005dd86;
    }
    uVar1 = ((undefined4 *)uVar5)[1];
  }
  else {
    uVar1 = *(undefined4 *)uVar5;
  }
  iVar4 = FUN_1005dbec(uVar1);
  if (iVar4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(byte *)(iVar4 + 10) & 0xf;
  }
LAB_1005dd86:
  uVar3 = *(byte *)(param_1 + 10) & 0xf;
  if (uVar3 == uVar2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (uVar3 != 0xf) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

