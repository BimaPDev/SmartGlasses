/* FUN_2c47a8a0 @ 0x2c47a8a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47a8a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_18;
  char *pcStack_14;
  undefined4 uStack_c;
  
  uVar3 = _LAB_2c47a928;
  uVar2 = _LAB_2c47a924;
  puVar1 = _LAB_2c47a920;
  uStack_c = *_LAB_2c47a91c;
  while( true ) {
    do {
      FUN_2c644324(&iStack_18,*puVar1,0xffffffff);
      pcVar4 = pcStack_14;
    } while (iStack_18 != 0x20);
    if (*pcStack_14 == '\x01') break;
    if (*pcStack_14 == '\x06') {
      func_0x2c47bca0(0x69);
    }
    else {
      FUN_2c6741e8(0x711,uVar3,uVar2);
    }
    FUN_2c644388(*puVar1,pcVar4);
  }
  if (*(int *)(pcStack_14 + 0xc) == 0x21) {
    FUN_2c479518(**(undefined1 **)(pcStack_14 + 4),*(undefined2 *)(pcStack_14 + 8));
  }
  else if (*(int *)(pcStack_14 + 0xc) == 0x3b) {
    FUN_2c47a7f4();
  }
  else {
    func_0x2c46d398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(3,*(undefined4 *)(pcStack_14 + 4));
}

