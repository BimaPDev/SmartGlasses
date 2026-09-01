/* FUN_100bee34 @ 0x100bee34 */

void FUN_100bee34(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = DAT_100beeac;
  uVar3 = (DAT_100bee9c - DAT_100bee98) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100beea0 | uVar3,DAT_100beea8,DAT_100beea4);
  FUN_1011dbf4(DAT_100beeb0,0xffffffff);
  if (*piVar1 != 0) {
    *(byte *)(piVar1 + 0x5c) = *(byte *)(piVar1 + 0x5c) & 0xfe;
    FUN_1013199c();
    iVar2 = FUN_10131c54(*piVar1,0x13);
    if (iVar2 != 0) {
      FUN_100a5b78(DAT_100beeb4 | uVar3,DAT_100beea8,DAT_100beeb8,iVar2);
    }
    FUN_101319b8(*piVar1);
  }
  thunk_FUN_10113e2c(DAT_100beeb0);
  return;
}

