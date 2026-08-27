/* FUN_2c658218 @ 0x2c658218 */

int FUN_2c658218(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  FUN_2c6581d0(&puStack_50);
  puStack_38 = auStack_30;
  FUN_2c6581d0(&puStack_38,param_4,param_5);
  puVar5 = puStack_50 + iStack_4c * 4;
  puVar4 = puStack_38 + iStack_34 * 4;
  puVar3 = puStack_38;
  puVar6 = puStack_50;
  do {
    iVar1 = func_0x2c665a52(param_1,puVar6,puVar3);
    if (iVar1 != 0) {
LAB_2c658278:
      FUN_2c6648a4(&puStack_38);
      FUN_2c6648a4(&puStack_50);
      return iVar1;
    }
    iVar1 = FUN_2c66ea0c(puVar6);
    iVar2 = FUN_2c66ea0c(puVar3);
    puVar3 = puVar3 + iVar2 * 4;
    if (puVar5 == puVar6 + iVar1 * 4) {
      iVar1 = 0;
      if (puVar4 != puVar3) {
        iVar1 = -1;
      }
      goto LAB_2c658278;
    }
    if (puVar4 == puVar3) {
      iVar1 = 1;
      goto LAB_2c658278;
    }
    puVar6 = puVar6 + iVar1 * 4 + 4;
    puVar3 = puVar3 + 4;
  } while( true );
}

