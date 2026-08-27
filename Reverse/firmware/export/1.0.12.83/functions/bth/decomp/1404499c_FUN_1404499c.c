/* FUN_1404499c @ 0x1404499c */

void FUN_1404499c(char param_1,undefined2 param_2,undefined2 param_3)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar2 = DAT_14044a30;
  FUN_1402a6e8(4,0x57b,DAT_14044a3c,DAT_14044a40,DAT_14044a38,DAT_14044a34,*DAT_14044a30,
               *DAT_14044a2c);
  pcVar2[0xc66] = param_1;
  *(undefined2 *)(pcVar2 + 0xc68) = param_2;
  *(undefined2 *)(pcVar2 + 0xc6a) = param_3;
  iVar4 = FUN_140e5148(*(undefined4 *)(pcVar2 + 0xe42),0xffffffff);
  puVar3 = DAT_14044a44;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x710,DAT_14044a4c);
  }
  if (*pcVar2 != '\0') {
    uVar5 = *(undefined4 *)(pcVar2 + 0xe42);
    uVar1 = *DAT_14044a44;
    pcVar2[0xc5e] = '\x01';
    *puVar3 = uVar1 | 4;
    FUN_140e52d8(uVar5);
    return;
  }
  *pcVar2 = '\x01';
  FUN_140e52d8(*(undefined4 *)(pcVar2 + 0xe42));
  FUN_14048958(0,0,DAT_14044a48);
  return;
}

