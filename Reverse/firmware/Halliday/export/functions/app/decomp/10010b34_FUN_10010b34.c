/* FUN_10010b34 @ 0x10010b34 */

void FUN_10010b34(byte param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  
  uVar4 = DAT_10010c50;
  iVar3 = DAT_10010c4c;
  uVar2 = DAT_10010c44;
  local_2c = *DAT_10010c38;
  bVar7 = true;
  uStack_30 = 0;
  local_34 = (uint)param_1;
  uVar5 = (DAT_10010c40 - DAT_10010c3c) * 0x20 & 0xff00;
  do {
    if ((int)((uint)*(byte *)(iVar3 + 0x8c) << 0x1f) < 0) {
      if (*DAT_10010c38 == local_2c) {
        return;
      }
      FUN_1013cdc0();
    }
    if (bVar7) {
      iVar6 = FUN_100b63f0((int)&local_34 + 1,7,1000);
      if (iVar6 == 7) {
        FUN_100a5b78(uVar5 | 0x770031,uVar2,uVar4,uStack_30._2_1_);
        if (uStack_30._2_1_ == -0x7e) {
          iVar6 = FUN_100a9a7c();
          uVar1 = uVar5 | 0x900011;
        }
        else if (uStack_30._2_1_ == -0x7b) {
          iVar6 = FUN_100a9a7c();
          uVar1 = uVar5 | 0xa10011;
        }
        else {
          if (uStack_30._2_1_ != -0x7f) goto LAB_10010be8;
          iVar6 = FUN_100a9a7c();
          uVar1 = uVar5 | 0x7f0011;
        }
        if (iVar6 == 0) {
          FUN_100a5b78(uVar1,uVar2,DAT_10010c48);
        }
        FUN_10010a8c(uStack_30._2_1_,0);
        goto LAB_10010be8;
      }
LAB_10010c28:
      FUN_1011dbc8(10);
    }
    else {
LAB_10010be8:
      iVar6 = FUN_100b63f0(&local_34,1,0);
      if (iVar6 != 1) {
        bVar7 = false;
        goto LAB_10010c28;
      }
      bVar7 = (local_34 & 0xff) == 5;
    }
    FUN_10116668();
  } while( true );
}

