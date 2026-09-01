/* FUN_100e6fcc @ 0x100e6fcc */

undefined1
FUN_100e6fcc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar7;
  
  pcVar2 = DAT_100e705c;
  if (*DAT_100e705c == '\x01') {
    iVar8 = DAT_100e7060 - DAT_100e7064;
    uVar3 = DAT_100e706c;
    uVar5 = DAT_100e7068;
  }
  else {
    puVar4 = (ushort *)FUN_100e6b90();
    if (puVar4 != (ushort *)0x0) {
      *pcVar2 = '\x01';
      puVar10 = (undefined4 *)(DAT_100e7078 + 1);
      *DAT_100e7078 = 2;
      puVar6 = param_2;
      do {
        puVar7 = puVar6 + 1;
        *puVar10 = *puVar6;
        uVar5 = DAT_100e707c;
        puVar6 = puVar7;
        puVar10 = puVar10 + 1;
      } while (puVar7 != param_2 + 4);
      *(byte *)((int)puVar4 + 1) = *(byte *)((int)puVar4 + 1) & 0xe0 | 0x11;
      iVar8 = FUN_100c41fc(param_1,uVar5);
      if (iVar8 != 0) {
        uVar1 = *puVar4;
        *pcVar2 = '\0';
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        *puVar4 = uVar1 & 0xe000;
        return 0;
      }
      *(undefined4 *)(puVar4 + 10) = param_1;
      return (char)*puVar4;
    }
    iVar8 = DAT_100e7060 - DAT_100e7064;
    uVar3 = DAT_100e7074;
    uVar5 = DAT_100e7070;
  }
  uVar9 = iVar8 * 0x20 & 0xff00;
  FUN_100a5b78(uVar3 | uVar9,uVar5,DAT_100e7064,uVar9,param_4);
  return 0;
}

