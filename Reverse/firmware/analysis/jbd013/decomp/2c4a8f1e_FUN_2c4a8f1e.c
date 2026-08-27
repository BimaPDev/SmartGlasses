/* FUN_2c4a8f1e @ 0x2c4a8f1e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4a8f1e(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x345,DAT_2c4a8fc0,DAT_2c4a8fbc,_LAB_2c4a8fc4,DAT_2c4a8fb4,param_1);
  }
  puVar3 = *(undefined4 **)(_LAB_2c4a8fb0 + param_1 * 4);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = FUN_2c4aaa54(*puVar3);
    iVar2 = FUN_2c66c540(uVar1,param_2,0x32);
    if ((iVar2 != 0) && (iVar2 = FUN_2c4aa9d0(*puVar3,param_2), iVar2 < 0)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x358,DAT_2c4a8fc0,DAT_2c4a8fbc,DAT_2c4a8fb8,*(undefined1 *)(puVar3 + 3),DAT_2c4a8fb4,
            param_2);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x34a,DAT_2c4a8fc0,DAT_2c4a8fbc,DAT_2c4a8fc8,DAT_2c4a8fb4,param_1);
}

