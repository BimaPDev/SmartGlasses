/* FUN_2c50b10c @ 0x2c50b10c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50b10c(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uStack_15;
  int iStack_14;
  
  iStack_14 = *_LAB_2c50b1b8;
  puVar2 = *(undefined1 **)(param_1 + 0x70);
  if (puVar2 != *(undefined1 **)(param_1 + 0x74)) {
    *(undefined1 **)(param_1 + 0x74) = puVar2;
  }
  if (1 < *(byte *)(param_1 + 0x25)) {
    iVar3 = *(byte *)(param_1 + 0x25) - 2;
    while( true ) {
      uStack_15 = (undefined1)iVar3;
      if (puVar2 == *(undefined1 **)(param_1 + 0x78)) {
        FUN_2c505c90(param_1 + 0x70,puVar2,&uStack_15);
        bVar1 = *(byte *)(param_1 + 0x25);
      }
      else {
        *puVar2 = uStack_15;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
        bVar1 = *(byte *)(param_1 + 0x25);
      }
      if ((int)(uint)bVar1 < iVar3) break;
      puVar2 = *(undefined1 **)(param_1 + 0x74);
      iVar3 = iVar3 + 1;
    }
LAB_2c50b168:
    if (*_LAB_2c50b1b8 != iStack_14) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  iVar3 = -1;
  uStack_15 = 0xff;
  if (*(undefined1 **)(param_1 + 0x78) == puVar2) goto LAB_2c50b1a6;
  do {
    *puVar2 = uStack_15;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    while( true ) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 3) goto LAB_2c50b168;
      puVar2 = *(undefined1 **)(param_1 + 0x74);
      uStack_15 = (undefined1)iVar3;
      if (*(undefined1 **)(param_1 + 0x78) != puVar2) break;
LAB_2c50b1a6:
      FUN_2c505c90(param_1 + 0x70,puVar2,&uStack_15);
    }
  } while( true );
}

