/* FUN_2c654398 @ 0x2c654398 */

int FUN_2c654398(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puStack_50;
  int iStack_4c;
  undefined1 auStack_48 [16];
  undefined1 *puStack_38;
  int iStack_34;
  undefined1 auStack_30 [20];
  
  puStack_50 = auStack_48;
  FUN_2c654350(&puStack_50);
  puStack_38 = auStack_30;
  FUN_2c654350(&puStack_38,param_4,param_5);
  puVar5 = puStack_50 + iStack_4c;
  puVar4 = puStack_38 + iStack_34;
  puVar3 = puStack_38;
  puVar6 = puStack_50;
  do {
    iVar1 = FUN_2c665a32(param_1,puVar6,puVar3);
    if (iVar1 != 0) {
LAB_2c6543f2:
      FUN_2c65e94c(&puStack_38);
      FUN_2c65e94c(&puStack_50);
      return iVar1;
    }
    iVar1 = FUN_2c66c4ec(puVar6);
    iVar2 = FUN_2c66c4ec(puVar3);
    puVar3 = puVar3 + iVar2;
    if (puVar5 == puVar6 + iVar1) {
      iVar1 = 0;
      if (puVar4 != puVar3) {
        iVar1 = -1;
      }
      goto LAB_2c6543f2;
    }
    if (puVar4 == puVar3) {
      iVar1 = 1;
      goto LAB_2c6543f2;
    }
    puVar6 = puVar6 + iVar1 + 1;
    puVar3 = puVar3 + 1;
  } while( true );
}

