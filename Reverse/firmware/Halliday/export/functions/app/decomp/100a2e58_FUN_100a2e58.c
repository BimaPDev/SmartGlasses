/* FUN_100a2e58 @ 0x100a2e58 */

undefined4 FUN_100a2e58(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_100a2e88;
  iVar2 = DAT_100a2e84;
  *DAT_100a2e88 = DAT_100a2e84;
  iVar2 = FUN_1011ea48(iVar2,0,0x68);
  FUN_1013c856(iVar2 + 0x10);
  thunk_FUN_101146e4(*piVar1 + 0x38,DAT_100a2e8c);
  FUN_100a2de0(DAT_100a2e90);
  return 0;
}

