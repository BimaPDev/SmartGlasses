/* FUN_140312ec @ 0x140312ec */

void FUN_140312ec(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_1403134c;
  uVar3 = DAT_14031348;
  FUN_1402a6e8(4,0x201,DAT_14031354,DAT_14031350,DAT_14031344,DAT_14031348);
  if (*piVar1 == 0) {
    iVar2 = FUN_140e5998();
    *piVar1 = iVar2;
  }
  iVar2 = FUN_14026764(0,0,DAT_1403135c,DAT_14031358,0);
  if (iVar2 == 0) {
    FUN_14026a60();
    return;
  }
  FUN_1402a6e8(4,0x20b,DAT_14031354,DAT_14031350,DAT_14031360,uVar3);
  return;
}

