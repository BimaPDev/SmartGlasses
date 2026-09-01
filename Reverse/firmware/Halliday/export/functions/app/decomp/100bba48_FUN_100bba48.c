/* FUN_100bba48 @ 0x100bba48 */

void FUN_100bba48(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined1 local_28;
  undefined2 local_26;
  undefined2 local_24;
  
  puVar2 = (undefined4 *)FUN_100b9d90(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100a5b78(((int)PTR_DAT_100bbb0c - (int)PTR_DAT_100bbb10) * 0x20 & 0xff00U | 0x910011,
                 PTR_s_bt_manager_startup_reconnect_pho_100bbb18,
                 PTR_s_malloc_failed_10151ffe_0xb_100bbb14);
  }
  else {
    iVar3 = FUN_10136858(puVar2,3);
    if (iVar3 != 0) {
      uVar4 = FUN_1013131a();
      if (1 < iVar3) {
        iVar3 = 2;
      }
      uVar6 = 0;
      puVar5 = puVar2;
      do {
        bVar1 = *(byte *)((int)puVar5 + 6);
        if ((((int)((uint)bVar1 << 0x1f) < 0) &&
            ((((bVar1 & 0x70) != 0 || ((int)((uint)*(byte *)((int)puVar5 + 7) << 0x1f) < 0)) &&
             (uVar4 != uVar6)))) &&
           (((bVar1 & 0xe) == 0 && ((*(byte *)((int)puVar5 + 7) & 2) == 0)))) {
          FUN_1011ea48(&local_30,*(byte *)((int)puVar5 + 7) & 2,0x10);
          local_30 = *puVar5;
          local_2c = *(undefined2 *)(puVar5 + 1);
          local_2a = 0x300;
          local_28 = 3;
          local_26 = 6000;
          local_24 = 3000;
          FUN_1013687a(&local_30);
          iVar3 = iVar3 + -1;
          uVar6 = uVar6 + 1 & 0xff;
          if (iVar3 == 0) break;
        }
        puVar5 = puVar5 + 2;
      } while (puVar2 + 4 != puVar5);
    }
    FUN_100b9e04(puVar2);
  }
  return;
}

