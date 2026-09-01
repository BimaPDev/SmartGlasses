/* FUN_100bb874 @ 0x100bb874 */

void FUN_100bb874(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined1 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  puVar2 = (undefined4 *)FUN_100b9d90(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_100a5b78((DAT_100bba38 - DAT_100bba3c) * 0x20 & 0xff00U | 0x300011,DAT_100bba44,DAT_100bba40
                );
  }
  else {
    iVar3 = FUN_10136858(puVar2,3);
    if (iVar3 != 0) {
      uVar4 = FUN_1013131a();
      if (1 < iVar3) {
        iVar3 = 2;
      }
      puVar6 = puVar2;
      do {
        bVar1 = *(byte *)((int)puVar6 + 6);
        if ((((int)((uint)bVar1 << 0x1f) < 0) && ((bVar1 & 0xc) == 4)) &&
           (((bVar1 & 0x70) != 0 || ((int)((uint)*(byte *)((int)puVar6 + 7) << 0x1f) < 0)))) {
          FUN_1011ea48(&local_38,0,0x10);
          local_38 = *puVar6;
          iVar3 = iVar3 + -1;
          local_34 = *(undefined2 *)(puVar6 + 1);
          local_32 = 0x300;
          local_30 = 3;
          local_2e = 6000;
          local_2c = 3000;
          FUN_1013687a(&local_38);
          bVar1 = *(byte *)((int)puVar6 + 6);
          *(byte *)((int)puVar6 + 6) = bVar1 & 0xfe;
          if ((bVar1 & 0xe) == 6) goto LAB_100bb922;
          break;
        }
        puVar6 = puVar6 + 2;
      } while (puVar2 + 6 != puVar6);
      iVar8 = 0;
      uVar5 = 0;
      do {
        if (iVar3 == 0) goto LAB_100bb922;
        puVar6 = puVar2;
        if (uVar4 == uVar5) break;
        puVar7 = (undefined4 *)((int)puVar2 + iVar8);
        bVar1 = *(byte *)((int)puVar7 + 6);
        if ((((int)((uint)bVar1 << 0x1f) < 0) &&
            ((((bVar1 & 0x70) != 0 || ((int)((uint)*(byte *)((int)puVar7 + 7) << 0x1f) < 0)) &&
             ((bVar1 & 0xe) == 0)))) && ((*(byte *)((int)puVar7 + 7) & 2) == 0)) {
          FUN_1011ea48(&local_38,*(byte *)((int)puVar7 + 7) & 2,0x10);
          local_38 = *puVar7;
          iVar3 = iVar3 + -1;
          local_34 = *(undefined2 *)(puVar7 + 1);
          local_32 = 0x300;
          local_30 = 3;
          local_2e = 6000;
          local_2c = 3000;
          FUN_1013687a(&local_38);
          *(byte *)((int)puVar7 + 6) = *(byte *)((int)puVar7 + 6) & 0xfe;
          uVar5 = uVar5 + 1 & 0xff;
        }
        iVar8 = iVar8 + 8;
      } while (iVar8 != 0x18);
      do {
        if (iVar3 == 0) break;
        bVar1 = *(byte *)((int)puVar6 + 6);
        if (((((int)((uint)bVar1 << 0x1f) < 0) &&
             (((bVar1 & 0x70) != 0 || ((int)((uint)*(byte *)((int)puVar6 + 7) << 0x1f) < 0)))) &&
            ((bVar1 & 0xe) == 0)) && ((int)((uint)*(byte *)((int)puVar6 + 7) << 0x1e) < 0)) {
          FUN_1011ea48(&local_38,bVar1 & 0xe,0x10);
          local_38 = *puVar6;
          local_34 = *(undefined2 *)(puVar6 + 1);
          local_32 = 0x300;
          local_30 = 3;
          local_2e = 6000;
          local_2c = 3000;
          FUN_1013687a(&local_38);
          *(byte *)((int)puVar6 + 6) = *(byte *)((int)puVar6 + 6) & 0xfe;
          break;
        }
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar2 + 6);
    }
LAB_100bb922:
    FUN_100b9e04(puVar2);
  }
  return;
}

