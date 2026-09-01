/* FUN_100566a4 @ 0x100566a4 */

int FUN_100566a4(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint local_2c;
  ushort local_28;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  uint *local_1c;
  undefined4 local_18;
  
  iVar3 = FUN_10112e84(DAT_1005674c);
  FUN_1011ea48(auStack_24,0,0x14);
  pbVar2 = DAT_10056764;
  if (iVar3 == 0) {
    FUN_100a5b78(DAT_10056758 | (DAT_10056754 - DAT_10056750) * 0x20 & 0xff00U,DAT_10056760,
                 DAT_1005675c);
  }
  else {
    bVar1 = *DAT_10056764;
    if (bVar1 == 0) {
      local_28 = (ushort)(bVar1 & 0xe0 | 3);
      local_2c = (uint)bVar1;
      (*(code *)**(undefined4 **)(iVar3 + 8))(iVar3,&local_2c);
      *pbVar2 = 1;
    }
    local_20 = 8;
    local_18 = 2;
    local_1c = &local_2c;
    iVar3 = (**(code **)(*(int *)(iVar3 + 8) + 4))(iVar3,auStack_24);
    if (iVar3 == 0) {
      return 0x11b4 - ((uint)(ushort)*local_1c * 0x6d7 >> 10);
    }
    FUN_100a5b78(DAT_1005676c | (DAT_10056754 - DAT_10056750) * 0x20 & 0xff00U,DAT_10056760,
                 DAT_10056768,iVar3);
  }
  return -1;
}

