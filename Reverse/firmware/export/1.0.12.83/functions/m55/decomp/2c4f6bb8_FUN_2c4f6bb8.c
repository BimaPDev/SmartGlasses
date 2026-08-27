/* FUN_2c4f6bb8 @ 0x2c4f6bb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f6bb8(void)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iStack_18;
  char *pcStack_14;
  undefined4 uStack_c;
  
  puVar2 = _LAB_2c4f6c10;
  uStack_c = *_LAB_2c4f6c0c;
  do {
    while( true ) {
      do {
        FUN_2c644324(&iStack_18,*puVar2,0xffffffff);
        pcVar3 = pcStack_14;
      } while (iStack_18 != 0x20);
      cVar1 = *pcStack_14;
      if (cVar1 != '\x01') break;
      func_0x2c4f65bc();
LAB_2c4f6bf2:
      FUN_2c644388(*puVar2,pcVar3);
    }
    if (cVar1 != '\x02') {
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(_LAB_2c4f6c14);
      }
      goto LAB_2c4f6bf2;
    }
    func_0x2c4f5e40();
    FUN_2c644388(*puVar2,pcVar3);
  } while( true );
}

