/* FUN_100125dc @ 0x100125dc */

void FUN_100125dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_11c [264];
  int local_14;
  
  local_14 = *DAT_100126a8;
  iVar1 = FUN_1006c468(DAT_100126ac,auStack_11c,param_3,0);
  uVar4 = (DAT_100126b0 - DAT_100126b4) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    FUN_100a5b78(uVar4 | 0x1ac0031,DAT_100126bc,DAT_100126b8,DAT_100126ac);
    FUN_1006c2a0(DAT_100126ac);
  }
  uVar3 = DAT_100126c0;
  FUN_100a5b78(DAT_100126c4 | uVar4,DAT_100126bc,DAT_100126c8,DAT_100126c0);
  local_128 = DAT_100126cc;
  local_124 = DAT_100126d0;
  local_12c = uVar3;
  local_120 = 0xd;
  iVar1 = FUN_10112e84(DAT_100126d4);
  if (iVar1 != 0) {
    FUN_10011e4c(iVar1,0);
  }
  iVar2 = FUN_100b7df8(&local_12c);
  *DAT_100126d8 = iVar2;
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100126dc | uVar4,DAT_100126bc,DAT_100126e0);
    if (iVar1 != 0) {
      FUN_10011e4c(iVar1,1);
    }
    uVar3 = 0xffffffff;
  }
  else {
    if (iVar1 != 0) {
      FUN_10011e4c(iVar1,1);
    }
    iVar1 = FUN_10012584();
    uVar3 = 0;
    if (iVar1 != 0) {
      thunk_FUN_1009efe8(DAT_100126e8,DAT_100126e4,5);
      FUN_1012d1ae(0);
      uVar3 = 0;
    }
  }
  if (*DAT_100126a8 != local_14) {
    FUN_1013cdc0(uVar3);
  }
  return;
}

