/* FUN_1006f31c @ 0x1006f31c */

undefined4 FUN_1006f31c(int param_1,undefined4 param_2,undefined1 *param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_38 [9];
  
  iVar2 = DAT_1006f464;
  pbVar3 = (byte *)**(undefined4 **)(param_1 + 0x10);
  if (((pbVar3 == (byte *)0x0) || (param_3 == (undefined1 *)0x0)) || (param_4 == 0)) {
    uVar7 = 0xffffffea;
  }
  else {
    if (pbVar3[1] == 4) {
      bVar1 = *pbVar3;
      uVar8 = *(undefined4 *)(DAT_1006f464 + 0x2c);
      uVar7 = *(undefined4 *)(DAT_1006f464 + 0x70);
      *(uint *)(DAT_1006f464 + 0x70) = *(uint *)(DAT_1006f464 + 0x70) | 0x30000;
      if (bVar1 < 4) {
        *(uint *)(iVar2 + 0x2c) = DAT_1006f468 & *(uint *)(iVar2 + 0x2c);
        *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
        *(undefined4 *)(iVar2 + 0x20) = param_2;
        *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 0x20;
        *(uint *)(iVar2 + 0x2c) = DAT_1006f46c & *(uint *)(iVar2 + 0x2c);
        if (param_4 < 5) {
          *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | param_4 << 0x12 | 0x10000000;
          local_38[0] = *(undefined4 *)(iVar2 + 0x20);
          FUN_1011f442(param_3,local_38);
        }
        else {
          *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 0x10040000;
          puVar5 = param_3;
          do {
            puVar6 = puVar5 + 1;
            *puVar5 = (char)*(undefined4 *)(iVar2 + 0x20);
            puVar5 = puVar6;
          } while (puVar6 != param_3 + param_4);
        }
        *(uint *)(DAT_1006f464 + 0x2c) = *(uint *)(DAT_1006f464 + 0x2c) | 0x20;
      }
      else {
        if (0x20 < param_4) {
          return 0xffffffdf;
        }
        *(uint *)(iVar2 + 0x2c) = DAT_1006f470 & *(uint *)(iVar2 + 0x2c);
        *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | param_4 << 0x12 | 0x10000004;
        *(undefined4 *)(iVar2 + 0x34) = param_2;
        local_38[0] = *(undefined4 *)(iVar2 + 0x20);
        uVar4 = param_4 - 1 >> 2;
        while (uVar4 != 0) {
          local_38[uVar4] = *(undefined4 *)(iVar2 + (uVar4 + 0x13) * 4);
          uVar4 = uVar4 - 1;
        }
        FUN_1011f442(param_3,local_38);
        *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) | 0x20;
      }
      iVar2 = DAT_1006f464;
      *(undefined4 *)(DAT_1006f464 + 0x2c) = uVar8;
      *(undefined4 *)(iVar2 + 0x70) = uVar7;
    }
    else if (pbVar3[1] == 1) {
      uVar7 = *(undefined4 *)(DAT_1006f464 + 0x1c);
      *(uint *)(DAT_1006f464 + 0x1c) = *(uint *)(DAT_1006f464 + 0x1c) & 0xffffffc0;
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 2;
      *(undefined4 *)(iVar2 + 0x20) = param_2;
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 1;
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xffffffc0;
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x12;
      puVar5 = param_3;
      do {
        puVar6 = puVar5 + 1;
        *puVar5 = (char)*(undefined4 *)(iVar2 + 0x20);
        puVar5 = puVar6;
      } while (puVar6 != param_3 + param_4);
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 1;
      *(undefined4 *)(iVar2 + 0x1c) = uVar7;
    }
    uVar7 = 0;
  }
  return uVar7;
}

