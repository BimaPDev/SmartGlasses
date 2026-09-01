/* FUN_100a2bb8 @ 0x100a2bb8 */

void FUN_100a2bb8(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  iVar3 = 10000;
  iVar2 = *DAT_100a2c2c;
  while (*(int *)(iVar2 + 0xc) != 0) {
    bVar5 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    if (bVar5) goto LAB_100a2bcc;
    FUN_1011dbc8(4);
  }
  if (iVar3 == 0) {
    FUN_100a5b78(DAT_100a2c38 | (DAT_100a2c34 - DAT_100a2c30) * 0x20 & 0xff00U,DAT_100a2c40,
                 DAT_100a2c3c);
  }
LAB_100a2bcc:
  FUN_1011dbf4(iVar2 + 0x10,0xffffffff);
  puVar1 = *(undefined4 **)(iVar2 + 4);
  if ((puVar1 != (undefined4 *)0x0) && (param_1 != 0)) {
    puVar4 = (undefined4 *)*puVar1;
    while( true ) {
      FUN_1012d950(iVar2 + 4,puVar1);
      FUN_1012d1f4(extraout_r1);
      if (puVar4 == (undefined4 *)0x0) break;
      puVar1 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined1 *)(iVar2 + 0x25) = 0;
  }
  thunk_FUN_10113e2c(iVar2 + 0x10);
  return;
}

