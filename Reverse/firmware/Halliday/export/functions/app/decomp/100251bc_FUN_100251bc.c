/* FUN_100251bc @ 0x100251bc */

void FUN_100251bc(int param_1,char param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  ushort uVar5;
  int local_44 [4];
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  uint uVar4;
  
  local_14 = *DAT_1002525c;
  bVar1 = param_2 + *(char *)(param_1 + 2);
  *(byte *)(param_1 + 2) = bVar1;
  if (0x17 < bVar1) {
    *(byte *)(param_1 + 2) = bVar1 - 0x18;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  local_44[0] = *DAT_10025260;
  local_44[1] = DAT_10025260[1];
  local_44[2] = DAT_10025260[2];
  local_44[3] = DAT_10025260[3];
  local_34 = DAT_10025260[4];
  iStack_30 = DAT_10025260[5];
  iStack_2c = DAT_10025260[6];
  iStack_28 = DAT_10025260[7];
  local_24 = DAT_10025260[8];
  iStack_20 = DAT_10025260[9];
  iStack_1c = DAT_10025260[10];
  iStack_18 = DAT_10025260[0xb];
  uVar5 = *(ushort *)(param_1 + 6);
  if ((((uVar5 & 3) == 0) && ((uint)uVar5 % 100 != 0)) || ((uint)uVar5 % 400 == 0)) {
    local_44[1] = 0x1d;
  }
  if (local_44[*(byte *)(param_1 + 4)] < (int)(uint)*(byte *)(param_1 + 3)) {
    uVar3 = *(byte *)(param_1 + 4) + 1;
    uVar4 = uVar3 & 0xff;
    uVar2 = (undefined1)uVar3;
    if (0xb < uVar4) {
      uVar2 = 0;
      uVar5 = uVar5 + 1;
    }
    *(undefined1 *)(param_1 + 3) = 1;
    if (uVar4 < 0xc) {
      *(undefined1 *)(param_1 + 4) = uVar2;
    }
    else {
      *(undefined1 *)(param_1 + 4) = uVar2;
      *(ushort *)(param_1 + 6) = uVar5;
    }
  }
  if (*DAT_1002525c != local_14) {
    FUN_1013cdc0();
  }
  return;
}

