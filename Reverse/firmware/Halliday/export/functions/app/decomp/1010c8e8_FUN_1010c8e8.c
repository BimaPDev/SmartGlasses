/* FUN_1010c8e8 @ 0x1010c8e8 */

int FUN_1010c8e8(uint param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint uStack_58;
  uint local_54;
  undefined1 local_50;
  undefined1 local_4f;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = DAT_1010cab8;
  if (*(int *)(DAT_1010cab8 + 0x720) != 0) {
    if ((param_1 <= *(uint *)(DAT_1010cab8 + 0x79c)) && (param_2 <= *(uint *)(DAT_1010cab8 + 0x7a0))
       ) {
      return 0;
    }
    FUN_1010c7cc();
  }
  iVar3 = FUN_100f0524(0xbc);
  *(int *)(iVar1 + 0x720) = iVar3;
  if (iVar3 == 0) {
    iVar3 = 5;
  }
  else {
    FUN_1011ea48(iVar3,0,0xbc);
    piVar2 = DAT_1010cac4;
    if (param_1 == 0) {
      param_2 = 0;
    }
    else if (param_2 == 0) {
      param_1 = 0;
    }
    uVar7 = param_1 + 0xf & 0xfffffff0;
    local_5c = *DAT_1010cac4 + 8;
    local_50 = *(undefined1 *)(iVar1 + 0x6e8);
    local_4f = *(undefined1 *)(iVar1 + 0x71c);
    local_4c = iVar1;
    uStack_58 = uVar7;
    local_54 = param_2;
    iVar3 = FUN_10062a28(0,&local_5c);
    if (iVar3 == 0) {
      local_6c = iVar3;
      local_68 = iVar3;
      local_64 = iVar3;
      local_60 = iVar3;
      FUN_1010c85c(0,&local_6c,&local_68);
      FUN_1013b428(0x30,&local_64);
      FUN_1013b428(0xe8,&local_60);
      if ((((local_6c == 0x265) && (local_68 == 0x2001)) && (local_64 == 0x421)) && (local_60 == 0))
      {
        *(undefined4 *)(iVar1 + 0x6dc) = 0;
        *(undefined4 *)(iVar1 + 0x6cc) = local_48;
        *(undefined4 *)(iVar1 + 0x6e0) = 0;
        *(undefined4 *)(iVar1 + 0x6d0) = local_44;
        *(undefined4 *)(iVar1 + 0x6d4) = local_40;
        *(int *)(iVar1 + 0x6d8) = *piVar2;
        if ((uVar7 != 0) && (param_2 != 0)) {
          *(undefined4 *)(iVar1 + 0x6f0) = local_30;
          *(undefined4 *)(iVar1 + 0x6fc) = local_24;
          iVar4 = DAT_1010cab8;
          *(undefined4 *)(iVar1 + 0x6ec) = local_34;
          *(int *)(iVar1 + 0x6f4) = local_2c;
          *(undefined4 *)(iVar1 + 0x6f8) = local_28;
          iVar4 = FUN_1013b1e8(iVar4,0xa35);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_1013b1e8(DAT_1010cab8,0xac8,local_2c);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_1013b1e8(DAT_1010cab8,0xacb,*(int *)(iVar1 + 0x6ec) + local_2c);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar5 = FUN_1013b1e8(DAT_1010cab8,0xacc,*(undefined4 *)(iVar1 + 0x6f8));
          iVar4 = DAT_1010cab8;
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = 0xa90;
          do {
            iVar6 = FUN_1013b1e8(iVar4,iVar5,0);
            if (iVar6 != 0) {
              return iVar6;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0xa98);
        }
        *(uint *)(iVar1 + 0x79c) = uVar7;
        *(undefined2 *)(iVar1 + 0x790) = 0;
        *(uint *)(iVar1 + 0x7a0) = param_2;
        *(undefined4 *)(iVar1 + 0x748) = 0;
        *(undefined4 *)(iVar1 + 0x744) = 0;
        *(undefined4 *)(iVar1 + 0x740) = 0;
        *(undefined4 *)(iVar1 + 0x73c) = 0;
        *(undefined4 *)(iVar1 + 2000) = 0;
        *(undefined4 *)(iVar1 + 0x7b0) = 0;
      }
      else {
        FUN_101188d0(DAT_1010cabc,local_6c,local_68,local_64,local_60);
        FUN_101188d0(DAT_1010cac0,0x265,0x2001,0x421,0);
        iVar3 = 7;
      }
    }
  }
  return iVar3;
}

