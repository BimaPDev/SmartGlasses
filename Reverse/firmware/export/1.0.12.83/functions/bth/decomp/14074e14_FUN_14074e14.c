/* FUN_14074e14 @ 0x14074e14 */

void FUN_14074e14(void)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = DAT_14074ea0;
  FUN_140756c0();
  FUN_14074d80();
  puVar1 = DAT_14074ea4;
  pcVar4 = pcVar3 + 0x640;
  do {
    if (((*pcVar3 == '\x01') && (pcVar3[1] == '\x01')) &&
       ((uint)(*(int *)(pcVar3 + 0x14) + *(int *)(pcVar3 + 0x10)) <= *puVar1)) {
      iVar2 = *(int *)(pcVar3 + 4);
      *(int *)(pcVar3 + 0x14) = *(int *)(pcVar3 + 0x14) + *(int *)(pcVar3 + 0x10);
      if (iVar2 == 0) {
        *pcVar3 = '\0';
        **(undefined1 **)(pcVar3 + 0x20) = 0;
        pcVar3[0x20] = '\0';
        pcVar3[0x21] = '\0';
        pcVar3[0x22] = '\0';
        pcVar3[0x23] = '\0';
        pcVar3[0x24] = '\0';
        pcVar3[0x25] = '\0';
        pcVar3[0x26] = '\0';
        pcVar3[0x27] = '\0';
      }
      else if (iVar2 == 1) {
        pcVar3[1] = '\0';
      }
      else if (1 < iVar2) {
        *(int *)(pcVar3 + 4) = iVar2 + -1;
      }
      if (*(code **)(pcVar3 + 0x18) != (code *)0x0) {
        (**(code **)(pcVar3 + 0x18))(*(undefined4 *)(pcVar3 + 0x1c));
      }
    }
    pcVar3 = pcVar3 + 0x28;
  } while (pcVar3 != pcVar4);
  iVar2 = FUN_14074dc0();
  if (iVar2 == 0) {
    *DAT_14074ea8 = 0;
    FUN_140756b4();
    return;
  }
  *DAT_14074ea8 = 1;
  FUN_14075698();
  FUN_140756b4();
  return;
}

