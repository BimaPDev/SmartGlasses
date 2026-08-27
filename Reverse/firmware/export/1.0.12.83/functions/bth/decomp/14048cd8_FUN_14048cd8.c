/* FUN_14048cd8 @ 0x14048cd8 */

int FUN_14048cd8(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = FUN_14051974();
  iVar3 = DAT_14048e58;
  *(undefined1 *)(DAT_14048e58 + 0x147) = uVar1;
  iVar2 = FUN_1404a1b4();
  iVar5 = *(int *)(iVar2 + 0xd4);
  switch(param_1) {
  case 8:
    FUN_1402a6e8(4,0x95,DAT_14048e64,DAT_14048e60,DAT_14048e6c);
    iVar2 = FUN_14097fcc(iVar5);
    return iVar2;
  case 9:
    FUN_1402a6e8(4,0x99,DAT_14048e64,DAT_14048e60,DAT_14048e68);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14098030,DAT_1409802c,0x1f0);
    }
    FUN_140755e4();
    iVar2 = FUN_14081b48(iVar5);
    FUN_1407561c();
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
    return iVar2;
  case 10:
    FUN_1402a6e8(4,0xa4,DAT_14048e64,DAT_14048e60,DAT_14048e70);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140980a0,DAT_1409809c,0x221);
    }
    FUN_140755e4();
    iVar2 = FUN_14081a84(iVar5);
    FUN_1407561c();
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
    return iVar2;
  case 0xb:
    iVar3 = FUN_1404cab4();
    iVar2 = 0;
    if (iVar3 != 0) {
      FUN_1402a6e8(4,0xab,DAT_14048e64,DAT_14048e60,DAT_14048e74);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140980d8,DAT_140980d4,0x231);
      }
      FUN_140755e4();
      iVar2 = thunk_FUN_14087954(iVar5,0x13);
      FUN_1407561c();
      if (iVar2 == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = 1;
      }
      return iVar2;
    }
    break;
  case 0xc:
    iVar2 = FUN_1404cab4();
    if (iVar2 == 0) {
      uVar4 = FUN_14097db0(iVar5);
      FUN_1402a6e8(4,0xb3,DAT_14048e64,DAT_14048e60,DAT_14048e78,uVar4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14098110,DAT_1409810c,0x241);
      }
      FUN_140755e4();
      iVar2 = FUN_14081f4c(iVar5,iVar5);
      FUN_1407561c();
      if (iVar2 == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = 1;
      }
      return iVar2;
    }
    break;
  case 0xd:
    iVar2 = FUN_1402a6e8(4,0xb8,DAT_14048e64,DAT_14048e60,DAT_14048e5c);
    *(undefined1 *)(iVar3 + 0x145) = 1;
    break;
  case 0xe:
    iVar2 = FUN_1402a6e8(4,0xbc,DAT_14048e64,DAT_14048e60,DAT_14048e7c);
    *(undefined1 *)(iVar3 + 0x145) = 0;
    break;
  case 0xf:
    FUN_1402a6e8(4,0xc0,DAT_14048e64,DAT_14048e60,DAT_14048e80);
    uVar1 = 2;
    goto LAB_14048e1e;
  case 0x10:
    FUN_1402a6e8(4,0xc4,DAT_14048e64,DAT_14048e60,DAT_14048e84);
    uVar1 = 1;
    goto LAB_14048e1e;
  case 0x11:
    FUN_1402a6e8(4,200,DAT_14048e64,DAT_14048e60,DAT_14048e88);
    uVar1 = 0;
LAB_14048e1e:
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14098184,DAT_14098180,0x262);
    }
    FUN_140755e4();
    iVar2 = FUN_14081dcc(iVar5,uVar1,0);
    FUN_1407561c();
    if (iVar2 == 0) {
      iVar2 = 2;
    }
    else {
      iVar2 = 1;
    }
    return iVar2;
  case 0x1a:
    FUN_1402a6e8(4,0x9e,DAT_14048e64,DAT_14048e60,DAT_14048e68);
    iVar2 = FUN_1403d1b8(0,0);
    return iVar2;
  }
  return iVar2;
}

