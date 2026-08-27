/* FUN_2c4936ec @ 0x2c4936ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4936ec(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_14;
  
  puVar1 = _LAB_2c493728;
  uStack_14 = *_LAB_2c493724;
  do {
    do {
      do {
        FUN_2c644324(&iStack_20,*puVar1,0xffffffff);
        iVar2 = iStack_1c;
      } while (iStack_20 != 0x20);
    } while (iStack_1c == 0);
    FUN_2c493624(iStack_1c);
    FUN_2c644388(*puVar1,iVar2);
  } while( true );
}

