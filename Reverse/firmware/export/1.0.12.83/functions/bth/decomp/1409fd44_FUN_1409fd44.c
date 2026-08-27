/* FUN_1409fd44 @ 0x1409fd44 */

void FUN_1409fd44(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*DAT_1409fe0c;
  if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
    uVar3 = 0;
    do {
      if (*(byte *)((int)puVar4 + uVar3 * 0x72 + 0x8a) == param_1) {
        iVar2 = (int)(char)uVar3;
        if (iVar2 < 0) {
          return;
        }
        FUN_1402a6e8(4,0x292,DAT_1409fe1c,DAT_1409fe18,DAT_1409fe14,DAT_1409fe10,
                     *(undefined1 *)((int)puVar4 + iVar2 * 0x72 + 0x1a),
                     *(undefined1 *)((int)puVar4 + iVar2 * 0x72 + 0x1b),
                     *(undefined1 *)((int)puVar4 + iVar2 * 0x72 + 0x1c),
                     *(undefined1 *)((int)puVar4 + iVar2 * 0x72 + 0x1d),
                     *(undefined1 *)((int)puVar4 + iVar2 * 0x72 + 0x1e),
                     *(undefined1 *)((int)puVar4 + iVar2 * 0x72 + 0x1f));
        uVar1 = FUN_140a047c();
        if (uVar3 < *puVar4 - 1) {
          do {
            FUN_140e5278(uVar3 * 0x72 + 0x1a + (int)puVar4,uVar3 * 0x72 + 0x8c + (int)puVar4,0x72);
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < *puVar4 - 1);
        }
        FUN_140e5658((int)puVar4 + uVar3 * 0x72 + 0x1a,0);
        *puVar4 = *puVar4 - 1;
        FUN_140a0ebc();
        FUN_140a04dc(uVar1);
        FUN_140a0f2c();
        return;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *puVar4);
  }
  return;
}

