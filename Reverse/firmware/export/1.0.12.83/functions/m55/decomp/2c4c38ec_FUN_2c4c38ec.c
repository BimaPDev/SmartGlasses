/* FUN_2c4c38ec @ 0x2c4c38ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c38ec(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = _LAB_2c4c3998;
  if (*_LAB_2c4c3998 == 0) {
    iVar5 = FUN_2c64419c(_LAB_2c4c39a8);
    *piVar1 = iVar5;
  }
  FUN_2c644044(*piVar1,0xffffffff);
  func_0x2c4c4ed0();
  func_0x2c4b943c(_LAB_2c4c399c);
  iVar4 = 0;
  iVar5 = _LAB_2c4c39a0;
  do {
    if (*(char *)(iVar5 + 2) != '\0') {
      uVar3 = 0;
LAB_2c4c398a:
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4c39b8,_LAB_2c4c39b4,iVar4,uVar3);
    }
    *(undefined1 *)(iVar5 + 2) = 1;
    *(undefined1 *)(iVar5 + 3) = 0;
    *(undefined1 *)(iVar5 + 0x7c) = 0xff;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    if (*(char *)(iVar5 + 0x9e) != '\0') {
      uVar3 = 1;
      goto LAB_2c4c398a;
    }
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar5 + 0x9e) = 1;
    *(undefined1 *)(iVar5 + 0x9f) = 0;
    *(undefined1 *)(iVar5 + 0x118) = 0xff;
    *(undefined4 *)(iVar5 + 0xac) = 0;
    *(undefined4 *)(iVar5 + 0xb0) = 0;
    piVar2 = _LAB_2c4c39a4;
    iVar5 = iVar5 + 0x138;
    if (iVar4 == 5) {
      if (*_LAB_2c4c39a4 == 0) {
        iVar5 = FUN_2c6440f0(_LAB_2c4c39ac,0);
        *piVar2 = iVar5;
        uVar3 = func_0x2c6469e4();
        iVar5 = *piVar2;
        *_LAB_2c4c39b0 = uVar3;
        FUN_2c644100(iVar5,0);
      }
      FUN_2c644080(*piVar1);
      func_0x2c469e1c(1);
      return 0;
    }
  } while( true );
}

