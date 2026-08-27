/* FUN_14028110 @ 0x14028110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028110(void)

{
  int iVar1;
  
  FUN_14000080();
  FUN_14000060();
  FUN_140e56f8(6);
  FUN_1402dc78(6);
  FUN_140002b0();
  FUN_1402e0a4(0);
  iVar1 = FUN_14000494();
  if (iVar1 == 0) {
    FUN_1400026c();
    FUN_14000288();
    FUN_140001cc();
    do {
      iVar1 = FUN_14000328(1);
    } while (iVar1 == -1);
    FUN_1402ce98(0,6);
                    /* WARNING: Could not recover jumptable at 0x140e50d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_140e50d4)(0);
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

