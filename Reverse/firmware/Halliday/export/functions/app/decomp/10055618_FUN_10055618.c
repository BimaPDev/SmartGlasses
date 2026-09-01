/* FUN_10055618 @ 0x10055618 */

void FUN_10055618(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_40;
  undefined1 auStack_3c [4];
  char local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  ushort local_2c;
  undefined1 auStack_28 [4];
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  iVar1 = FUN_10112e84(DAT_10055740);
  FUN_1011ea48(auStack_28,0,0x18);
  local_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  uVar2 = FUN_100563a8(300);
  local_40 = 0;
  FUN_10056b90(8,&local_40);
  if (local_40 != 0) {
    iVar3 = FUN_10112e84(DAT_10055744);
    uVar4 = DAT_10055748;
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 8) + 4))(iVar3,auStack_3c);
      FUN_10119dc2(DAT_10055758,local_38);
      uVar4 = DAT_10055748;
      if (local_38 != '\0') {
        local_1c = FUN_1011a97e();
        uVar4 = FUN_100561f8(0);
        if (uVar4 < local_1c) {
          uVar5 = local_1c - uVar4;
        }
        else {
          uVar5 = (local_1c + 0x3ffffff) - uVar4;
        }
        FUN_10119dc2(DAT_1005575c,local_1c,uVar4,uVar5);
        uVar5 = FUN_10004238((int)((ulonglong)uVar5 * 0x3e8000),
                             (int)((ulonglong)uVar5 * 0x3e8000 >> 0x20),uVar2,0);
        FUN_10119dc2(DAT_10055760,uVar5);
        local_13 = 1;
        uVar4 = DAT_10055748;
        if (uVar5 < DAT_10055764) {
          local_12 = 1;
          uVar4 = uVar5;
        }
      }
    }
    local_11 = 1;
    FUN_1005629c(uVar4);
    FUN_10119dc2(DAT_1005574c,uVar4);
  }
  local_20 = FUN_100561f8(1);
  if (((0 < local_20) && (iVar1 != 0)) &&
     (iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,&local_34), iVar1 == 0)) {
    FUN_101221f0(&local_34,auStack_28);
    local_24 = local_2c + 5;
    local_14 = 1;
    local_18 = uVar2;
    iVar1 = FUN_1007378c(DAT_10055750,auStack_28,0x18);
    if (iVar1 == 0) {
      FUN_10119dc2(DAT_10055768,local_20,uVar2);
      FUN_10083358(&local_34);
    }
    else {
      FUN_10119dc2(DAT_10055754);
    }
  }
  return;
}

