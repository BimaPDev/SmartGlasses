/* FUN_1006d018 @ 0x1006d018 */

undefined4 FUN_1006d018(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 local_54;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_24;
  byte local_1c;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x10);
  if ((int)((uint)*(byte *)(iVar5 + 0xe) << 0x1e) < 0) {
    if (*(int *)(iVar4 + 0x14) == 0) {
      iVar3 = FUN_10112e84(*(undefined4 *)(iVar5 + 4));
      *(int *)(iVar4 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_10119dc2(DAT_1006d0f0,*(undefined4 *)(iVar5 + 4));
        goto LAB_1006d032;
      }
    }
    if (*(char *)(iVar4 + 0x19) == -1) {
      uVar1 = (**(code **)(*(int *)(*(int *)(iVar4 + 0x14) + 8) + 0x14))
                        (*(int *)(iVar4 + 0x14),*(undefined1 *)(iVar5 + 0xb));
      *(undefined1 *)(iVar4 + 0x19) = uVar1;
    }
    FUN_10119dc2(DAT_1006d0f4,*(undefined1 *)(iVar4 + 0x19));
    FUN_1011ea48(&local_54,0,0x1c);
    FUN_1011ea48(&local_38,0,0x20);
    if (param_2 != 0) {
      local_54 = (ushort)(local_54._1_1_ | 4) << 8;
      local_40 = param_3;
      iStack_3c = param_2;
    }
    uVar2 = 0;
    local_24 = 0;
    local_1c = local_1c & 0xbf;
    local_54 = *(byte *)(iVar5 + 10) & 0x7f | 0x100 | local_54 & 0xfc00;
    local_4e = 200;
    local_48 = 200;
    local_4c = 1;
    local_38 = 0;
    uStack_34 = 0;
    local_44 = &local_38;
    (*(code *)**(undefined4 **)(*(int *)(iVar4 + 0x14) + 8))
              (*(int *)(iVar4 + 0x14),*(undefined1 *)(iVar4 + 0x19),&local_54);
  }
  else {
    FUN_10119dc2(DAT_1006d0ec);
LAB_1006d032:
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

