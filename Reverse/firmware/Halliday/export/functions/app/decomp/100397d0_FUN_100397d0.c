/* FUN_100397d0 @ 0x100397d0 */

void FUN_100397d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_10039804;
  iVar2 = *DAT_10039800;
  *DAT_10039804 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (*DAT_10039800 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_100396fc();
  return;
}

