/* FUN_2c47ce30 @ 0x2c47ce30 */

undefined1 * FUN_2c47ce30(char *param_1,short *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar2 = (undefined1 *)FUN_2c47245c(3,*(int *)(param_1 + 0xc) + 100);
  if (puVar2 == (undefined1 *)0x0) {
    FUN_2c6741e8(0x711,DAT_2c47cf14,DAT_2c47cf10);
  }
  else {
    *puVar2 = 1;
    puVar2[1] = 0x70;
    puVar2[3] = 1;
    puVar2[2] = 0;
    cVar1 = *param_1;
    puVar2[4] = cVar1;
    if (cVar1 == '\x05') {
      *param_2 = (short)*(undefined4 *)(param_1 + 0xc) + 8;
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      puVar2[5] = 0x71;
      puVar2[7] = (char)uVar3;
      puVar2[6] = (char)((uint)uVar3 >> 8);
      FUN_2c674668(puVar2 + 8,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      return puVar2;
    }
    puVar2[9] = 0;
    puVar2[10] = 1;
    puVar2[8] = 100;
    cVar1 = param_1[1];
    puVar2[0xc] = 0x65;
    puVar2[0xb] = cVar1;
    puVar2[0xd] = 0;
    puVar2[0xe] = 4;
    uVar3 = FUN_2c47a7ac();
    puVar2[0x12] = (char)uVar3;
    puVar2[0x14] = 0;
    puVar2[0x15] = 1;
    puVar2[0xf] = (char)((uint)uVar3 >> 0x18);
    puVar2[0x10] = (char)((uint)uVar3 >> 0x10);
    puVar2[0x11] = (char)((uint)uVar3 >> 8);
    puVar2[0x13] = 0x67;
    cVar1 = param_1[2];
    puVar2[0x18] = 0;
    puVar2[0x17] = 0x6d;
    puVar2[0x19] = 1;
    puVar2[0x16] = cVar1;
    puVar2[0x1a] = param_1[0x14];
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    puVar2[0x1d] = (char)uVar3;
    puVar2[0x1c] = (char)((uint)uVar3 >> 8);
    puVar2[0x1b] = 0x69;
    iVar4 = *(ushort *)(param_1 + 0xc) + 0x16;
    *param_2 = *(ushort *)(param_1 + 0xc) + 0x1e;
    puVar2[7] = (char)iVar4;
    puVar2[5] = 0x71;
    puVar2[6] = (char)((uint)iVar4 >> 8);
    FUN_2c674668(puVar2 + 0x1e,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  return puVar2;
}

