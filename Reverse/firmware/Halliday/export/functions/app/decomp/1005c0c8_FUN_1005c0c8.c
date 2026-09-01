/* FUN_1005c0c8 @ 0x1005c0c8 */

uint FUN_1005c0c8(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *local_1c [2];
  
  iVar3 = FUN_10112e70(local_1c);
  iVar2 = DAT_1005c168;
  puVar1 = DAT_1005c164;
  *DAT_1005c164 = 0;
  puVar5 = local_1c[0] + (iVar3 + 0x7ffffff) * 8;
  do {
    if (puVar5 < local_1c[0]) {
      return 0;
    }
    if ((((code *)puVar5[6] != (code *)0x0) &&
        (uVar4 = (*(code *)puVar5[6])(puVar5,5), uVar4 != 0xffffff7a)) &&
       ((uVar4 & 0xffffffdf) != 0xffffff88)) {
      if ((int)uVar4 < 0) {
        FUN_100a5b78((DAT_1005c170 - DAT_1005c16c) * 0x20 & 0xff00U | 0x11e0012,DAT_1005c178,
                     DAT_1005c174,*puVar5,uVar4);
        return uVar4;
      }
      uVar4 = *puVar1;
      if (0x1d < uVar4) {
        FUN_100a5b78((DAT_1005c170 - DAT_1005c16c) * 0x20 & 0xff00U | 0x1260011,DAT_1005c178,
                     DAT_1005c17c);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(undefined4 **)(iVar2 + uVar4 * 4) = puVar5;
      *puVar1 = uVar4 + 1;
    }
    puVar5 = puVar5 + -8;
  } while( true );
}

