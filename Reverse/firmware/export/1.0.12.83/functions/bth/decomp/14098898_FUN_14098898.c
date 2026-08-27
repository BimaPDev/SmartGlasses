/* FUN_14098898 @ 0x14098898 */

undefined4 FUN_14098898(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_1409893c;
  if (*DAT_1409893c == 0) {
    iVar5 = FUN_140e5138(DAT_14098948);
    *piVar1 = iVar5;
  }
  FUN_140e5148(*piVar1,0xffffffff);
  FUN_140984b0();
  iVar4 = 0;
  iVar5 = DAT_14098940;
  do {
    if (*(char *)(iVar5 + 2) != '\0') {
      uVar3 = 0;
LAB_14098930:
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14098958,DAT_14098954,iVar4,uVar3);
    }
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined1 *)(iVar5 + 2) = 1;
    *(undefined1 *)(iVar5 + 3) = 0;
    *(undefined1 *)(iVar5 + 0x7c) = 0xff;
    if (*(char *)(iVar5 + 0x9e) != '\0') {
      uVar3 = 1;
      goto LAB_14098930;
    }
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar5 + 0xac) = 0;
    *(undefined4 *)(iVar5 + 0xb0) = 0;
    *(undefined1 *)(iVar5 + 0x9e) = 1;
    *(undefined1 *)(iVar5 + 0x9f) = 0;
    *(undefined1 *)(iVar5 + 0x118) = 0xff;
    piVar2 = DAT_14098944;
    iVar5 = iVar5 + 0x138;
    if (iVar4 == 5) {
      if (*DAT_14098944 != 0) {
        FUN_140e52d8(*piVar1);
        return 0;
      }
      iVar5 = FUN_140e5418(DAT_1409894c,0);
      *piVar2 = iVar5;
      uVar3 = FUN_140e5828();
      iVar5 = *piVar2;
      *DAT_14098950 = uVar3;
      FUN_140e5198(iVar5,0);
      FUN_140e52d8(*piVar1);
      return 0;
    }
  } while( true );
}

