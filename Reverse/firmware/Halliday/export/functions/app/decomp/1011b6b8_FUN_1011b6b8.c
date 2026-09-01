/* FUN_1011b6b8 @ 0x1011b6b8 */

uint FUN_1011b6b8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_r3;
  undefined4 *puVar5;
  undefined4 *puStack_1c;
  
  puStack_1c = in_r3;
  iVar3 = FUN_10112e70(&puStack_1c);
  iVar2 = DAT_1005c0c4;
  piVar1 = DAT_1005c0ac;
  *DAT_1005c0ac = 0;
  puVar5 = puStack_1c + (iVar3 + 0x7ffffff) * 8;
  do {
    if (puVar5 < puStack_1c) {
      return 0;
    }
    iVar3 = FUN_1011b696(puVar5);
    if ((((iVar3 == 0) && (iVar3 = FUN_1011b6a4(puVar5), iVar3 == 0)) &&
        (uVar4 = FUN_1011b5f8(puVar5,1), uVar4 != 0xffffff7a)) &&
       ((uVar4 & 0xffffffdf) != 0xffffff88)) {
      if ((int)uVar4 < 0) {
        FUN_100a5b78((DAT_1005c0b4 - DAT_1005c0b0) * 0x20 & 0xff00U | 0x4b0013,DAT_1005c0c0,
                     DAT_1005c0bc,*puVar5,*(undefined4 *)(DAT_1005c0b8 + 4),uVar4);
        return uVar4;
      }
      iVar3 = *piVar1;
      *(undefined4 **)(iVar2 + iVar3 * 4) = puVar5;
      *piVar1 = iVar3 + 1;
    }
    puVar5 = puVar5 + -8;
  } while( true );
}

