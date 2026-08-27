/* FUN_2c47a92c @ 0x2c47a92c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47a92c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_c;
  
  uVar3 = _LAB_2c47a9dc;
  uVar2 = _LAB_2c47a9d8;
  puVar1 = _LAB_2c47a9d4;
  uStack_c = *_LAB_2c47a9d0;
  do {
    do {
      FUN_2c644324(&iStack_18,*puVar1,0xffffffff);
      puVar4 = puStack_14;
    } while (iStack_18 != 0x20);
    switch(*puStack_14) {
    case 1:
      if (*(int *)(puStack_14 + 0xc) == 0x21) {
        FUN_2c479518(**(undefined1 **)(puStack_14 + 4),*(undefined2 *)(puStack_14 + 8));
      }
      else if (*(int *)(puStack_14 + 0xc) == 0x3b) {
        FUN_2c47a7f4();
      }
      else {
        func_0x2c46d398();
      }
      if (*(int *)(puVar4 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(3);
      }
      break;
    case 2:
      func_0x2c47cd1c();
      break;
    case 3:
      func_0x2c47cd38();
      break;
    case 4:
      FUN_2c47d068(*(undefined4 *)(puStack_14 + 8));
      break;
    case 5:
      func_0x2c47a624(puStack_14[8]);
      break;
    case 6:
      FUN_2c47bc8c(0x69);
      break;
    default:
      FUN_2c6741e8(0x711,uVar3,uVar2);
    }
    FUN_2c644388(*puVar1,puVar4);
  } while( true );
}

