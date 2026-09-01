/* FUN_1012dacc @ 0x1012dacc */

void FUN_1012dacc(undefined1 param_1,byte param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 local_ac;
  byte local_ab;
  undefined2 local_aa;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined1 auStack_9c [126];
  undefined2 local_1e;
  undefined1 local_1c;
  
  FUN_1011ea48(&local_ac,0,0x94);
  local_ac = param_1;
  local_ab = param_2 | 0x10;
  local_aa = param_4;
  local_a4 = param_3;
  local_a8 = FUN_1012daa4();
  iVar1 = FUN_100539c0(auStack_9c,0x80,param_5,param_6);
  if (iVar1 < 0x7e) {
    auStack_9c[iVar1] = 0xd;
    auStack_9c[iVar1 + 1] = 10;
    local_a0 = iVar1 + 3;
    auStack_9c[iVar1 + 2] = 0;
  }
  else {
    local_1e = 0xa0d;
    local_a0 = 0x81;
    local_1c = 0;
  }
  FUN_100a5b08(&local_ac,local_a0 + 0x10);
  return;
}

