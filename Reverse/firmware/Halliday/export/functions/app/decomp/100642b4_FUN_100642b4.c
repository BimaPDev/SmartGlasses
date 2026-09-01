/* FUN_100642b4 @ 0x100642b4 */

undefined4 FUN_100642b4(byte *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [2];
  ushort local_3e;
  undefined1 local_3c;
  byte local_3b;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  FUN_1011ea48(local_40,0,0x20);
  piVar1 = DAT_100643ac;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_58 = 0;
  local_4c = 0;
  local_60 = 0;
  local_5c = 0;
  if (*DAT_100643ac == 0) {
    uVar3 = 0x38;
    uVar2 = DAT_100643b0;
  }
  else {
    if (param_1 != (byte *)0x0) {
      uVar5 = (uint)param_1[2];
      local_3b = param_1[3];
      uVar4 = (uint)local_3b;
      uVar7 = (DAT_100643c4 - DAT_100643c0) * 0x20 & 0xff00;
      local_40[0] = param_1[1];
      local_3e = (ushort)param_1[2];
      FUN_100a5b78(uVar7 | 0x3f0033,DAT_100643cc,DAT_100643c8,local_40[0],uVar5,uVar4);
      local_2c = *(undefined4 *)(param_1 + 0x14);
      local_28 = *(undefined4 *)(param_1 + 0x18);
      if (param_1[5] == 0x10) {
        local_3c = 0;
      }
      else {
        local_3c = 3;
      }
      if ((int)((uint)*param_1 << 0x1d) < 0) {
        local_60 = *(undefined4 *)(param_1 + 8);
        local_5c = (uint)*(ushort *)(param_1 + 6);
        local_24 = &local_60;
      }
      uVar6 = (uint)param_1[2];
      if (uVar6 == 0) {
        FUN_100a5b78(uVar7 | 0x520011,DAT_100643cc,DAT_100643d0,0,uVar5,uVar4);
        uVar2 = 0;
      }
      else {
        if ((int)(uVar6 << 0x1f) < 0) {
          local_54 = *(undefined4 *)(param_1 + 0xc);
          local_50 = *(undefined4 *)(param_1 + 0x10);
          local_58 = CONCAT31(local_58._1_3_,param_1[4]);
          local_38 = &local_58;
        }
        if (((int)(uVar6 << 0x1e) < 0) &&
           (local_44 = local_44 & 0xffffff00, local_34 = &local_4c, local_3b == 0)) {
          local_38 = &local_58;
        }
        uVar2 = (*(code *)**(undefined4 **)(*piVar1 + 8))(*piVar1,local_40);
      }
      return uVar2;
    }
    uVar3 = 0x39;
    uVar2 = DAT_100643bc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_100643b8,uVar3,DAT_100643b4,uVar2);
}

