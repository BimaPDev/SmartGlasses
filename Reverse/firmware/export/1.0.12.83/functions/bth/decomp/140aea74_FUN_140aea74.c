/* FUN_140aea74 @ 0x140aea74 */

void FUN_140aea74(void)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_44;
  undefined4 local_43;
  undefined2 local_3f;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined2 local_20;
  int local_1c;
  
  uVar1 = DAT_140aeb58;
  local_1c = *DAT_140aeb5c;
  FUN_1402a6e8(4,0x1a,DAT_140aeb60,DAT_140aeb64,DAT_140aeb54,DAT_140aeb58);
  local_44 = 10;
  puVar2 = (uint *)FUN_1409f464();
  FUN_1402a6e8(4,0x21,DAT_140aeb60,DAT_140aeb64,DAT_140aeb68,uVar1,*puVar2);
  if (*puVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(char *)((int)puVar2 + uVar3 * 0x72 + 0x8a) == '\0') {
        if (uVar3 != 5) {
          iVar4 = uVar3 * 0x72;
          local_43 = *(undefined4 *)((int)puVar2 + iVar4 + 0x1a);
          local_3f = *(undefined2 *)((int)puVar2 + iVar4 + 0x1e);
          local_3d = *(undefined1 *)((int)puVar2 + iVar4 + 0x20);
          local_3c = *(undefined4 *)((int)puVar2 + iVar4 + 0x6c);
          uStack_38 = *(undefined4 *)((int)puVar2 + iVar4 + 0x70);
          uStack_34 = *(undefined4 *)((int)puVar2 + iVar4 + 0x74);
          uStack_30 = *(undefined4 *)((int)puVar2 + iVar4 + 0x78);
          local_2c = *(undefined4 *)((int)puVar2 + iVar4 + 0x7c);
          uStack_28 = *(undefined4 *)((int)puVar2 + iVar4 + 0x80);
          uStack_24 = *(undefined4 *)((int)puVar2 + iVar4 + 0x84);
          local_20 = *(undefined2 *)((int)puVar2 + iVar4 + 0x88);
          goto LAB_140aeb36;
        }
        break;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *puVar2);
  }
  FUN_140e5658(&local_43,0,0x25);
LAB_140aeb36:
  FUN_140afd14(&local_44,0x26);
  if (*DAT_140aeb5c == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

