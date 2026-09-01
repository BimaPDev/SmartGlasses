/* FUN_100a288c @ 0x100a288c */

undefined4 FUN_100a288c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  byte local_4f;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined2 local_4a;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_1c;
  
  iVar4 = *DAT_100a2960;
  FUN_1011ea48(&local_50,0,0x40);
  uVar2 = DAT_100a2964;
  *(int *)(iVar4 + 0xc) = param_1;
  iVar1 = FUN_1013d44e(param_2,uVar2);
  local_50 = 1;
  if (iVar1 == 0) {
    local_4b = 1;
    local_50 = 5;
  }
  else {
    local_4b = 8;
  }
  FUN_100a9ab8(0);
  local_4a = 0x1010;
  local_48 = 1;
  local_44 = *(undefined4 *)(iVar4 + 0x2c);
  local_40 = 0;
  local_1c = DAT_100a2968;
  if ((*(uint *)(param_1 + 8) & *(uint *)(param_1 + 0xc)) == 0xffffffff) {
    bVar3 = 0x10;
  }
  else {
    bVar3 = 0x12;
  }
  local_4f = bVar3 | local_4f & 0xed;
  local_4d = 4;
  local_4c = 4;
  FUN_100194a0();
  iVar1 = FUN_100a96ac(&local_50);
  *(int *)(iVar4 + 0x28) = iVar1;
  if (iVar1 == 0) {
    FUN_100a27e8(iVar4,param_1,0);
    uVar2 = 0xffffffff;
  }
  else {
    FUN_10019438(local_40,(undefined1)local_4a,2);
    if ((int)((uint)local_4f << 0x1e) < 0) {
      local_58 = *(undefined4 *)(param_1 + 8);
      uStack_54 = *(undefined4 *)(param_1 + 0xc);
      FUN_100a9600(*(undefined4 *)(iVar4 + 0x28),7,&local_58,8);
    }
    FUN_100a9348(*(undefined4 *)(iVar4 + 0x28));
    uVar2 = 0;
  }
  return uVar2;
}

