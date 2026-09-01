/* FUN_100b1840 @ 0x100b1840 */

undefined4 FUN_100b1840(int param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pbVar1 = (byte *)FUN_100b2134(1);
  local_28 = 0;
  local_2c = 0;
  local_24 = 0;
  if (param_2 == (char *)0x0) {
    if (((int)((uint)*(byte *)(param_1 + 0x128) << 0x1f) < 0) &&
       (*(code **)(param_1 + 0x138) != (code *)0x0)) {
      (**(code **)(param_1 + 0x138))(*(undefined4 *)(param_1 + 300),1,0);
      *(undefined4 *)(param_1 + 0x138) = 0;
      if (*(int *)(param_1 + 0x134) != 0) {
        FUN_1011dcae();
        *(undefined4 *)(param_1 + 0x134) = 0;
      }
      if ((*(int *)(param_1 + 0x130) != 0) && ((int)((uint)*(byte *)(param_1 + 0x128) << 0x1e) < 0))
      {
        FUN_1011dcae();
        *(undefined4 *)(param_1 + 0x130) = 0;
        *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfd;
      }
      *(undefined4 *)(param_1 + 300) = 0;
    }
    *pbVar1 = *pbVar1 & 3;
    FUN_100b2064(&local_2c,0);
    bVar5 = *(byte *)(param_1 + 0x128) & 0xfe;
  }
  else {
    if ((int)((uint)*(byte *)(param_1 + 0x128) << 0x1f) < 0) {
      FUN_100a5b78(DAT_100b1a00 | (DAT_100b19fc - DAT_100b19f8) * 0x20 & 0xff00U,DAT_100b1a04);
      if (*(code **)(param_2 + 0xc) != (code *)0x0) {
        (**(code **)(param_2 + 0xc))(*(undefined4 *)(param_2 + 0x10),1,0);
      }
      return 0xfffffff5;
    }
    iVar2 = 0;
    if ((*(int *)(param_2 + 0x10) != 0) &&
       (iVar2 = FUN_1012d7f2(*(int *)(param_2 + 0x10)), iVar2 == 0)) {
      uVar6 = *(undefined4 *)(param_1 + 0x48);
      uVar3 = FUN_1012e06e(0x35,2);
      uVar4 = FUN_1012e0a2(0x35,2);
      iVar2 = FUN_1011dc92(uVar6,uVar3,uVar4);
      *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) | 2;
    }
    local_24 = 0;
    local_2c = CONCAT22(*(undefined2 *)param_2,
                        (byte)param_2[2] & 3 | 0x2200 | (-(ushort)(byte)param_2[8] & 0x3f) << 2 |
                        (ushort)(param_2[4] == ' ') * 0x1000 | (ushort)local_2c & 0xc000);
    if ((*param_2 != param_2[1]) && (param_2[1] != '\0')) {
      uVar6 = *(undefined4 *)(param_1 + 0x48);
      uVar3 = FUN_1012e06e(0x36,2);
      uVar4 = FUN_1012e0a2(0x36,2);
      uVar3 = FUN_1011dc92(uVar6,uVar3,uVar4);
      *(undefined4 *)(param_1 + 0x134) = uVar3;
      local_24 = FUN_101301d8();
    }
    local_28 = FUN_101301d8(iVar2);
    *pbVar1 = *pbVar1 & 3 | param_2[6] * -4;
    FUN_100b2064(&local_2c,*(char *)(param_1 + 0xd4) == '\x05');
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 0x10);
    *(int *)(param_1 + 0x130) = iVar2;
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0xc);
    bVar5 = *(byte *)(param_1 + 0x128) | 1;
  }
  *(byte *)(param_1 + 0x128) = bVar5;
  return 0;
}

